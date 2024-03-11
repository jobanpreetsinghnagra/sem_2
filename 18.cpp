#include <iostream>

class Rectangle {
public:
  int width;
  int height;

  // Parameterized constructor with two arguments for width and height
  Rectangle(int w, int h) {
    width = w;
    height = h;
    std::cout<<"Parametrized Constructor Called"<<std::endl;
  }

  // Function to calculate and display the area of the rectangle
  void area() {
    std::cout << "Area: " << width * height << std::endl;
  }
};

int main() {
  // Create a Rectangle object using the parameterized constructor and passing values
  Rectangle rect1(5, 10);

  // Call the area() function to display the area
  rect1.area();

  return 0;
}
