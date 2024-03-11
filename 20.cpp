#include <iostream>
using namespace std;

class Simple { // Use PascalCase for class names
public:
    void getData(int a, int b) {  // Corrected function name (lowercase d)
        x = a;
        y = b;
    }

    void display() {
        cout << x << endl;
        cout << y << endl;
    }

    Simple operator-() {  // Return a new Simple object for immutability
        Simple temp;  // Create a temporary Simple object
        temp.x = -x;    // Negate values in the temporary object
        temp.y = -y;
        return temp;   // Return the modified temporary object
    }

private:
    int x, y;  // Make member variables private for better encapsulation
};

int main() {
    Simple s;
    s.getData(4, -9);

    cout << "Before" << endl;
    s.display();

    cout << "After" << endl;
    Simple negatedS = -s;  // Call the operator function and store the result
    negatedS.display();    // Display the negated values

    return 0;
}
