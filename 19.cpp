// C++ program to demonstrate the working
// of a COPY CONSTRUCTOR
#include <iostream>
using namespace std;

class Point {
private:
	int point1,point2;

public:
	Point(int x1, int y1)//parametrised constructor to set default value
	{
		point1 = x1;
		point2 = y1;
        cout<<"Default Constructor Ran"<<endl;
	}

	// Copy constructor
	Point(const Point& p1)
	{
		point1 = p1.point1;
		point2 = p1.point2;
        cout<<"Copy Constructor Ran"<<endl;
	}

	int getX() { return point1; }
	int getY() { return point2; }
};

int main()
{
	Point p1(10, 15); // Normal constructor is called here
    cout<<"Copying Classs"<<endl;
	Point p2(p1); // Copy constructor is called here

	// Let us access values assigned by constructors
	cout << "p1.x = " << p1.getX() << ", p1.y = " << p1.getY();

	cout << "\np2.x = " << p2.getX() << ", p2.y = " << p2.getY();
	return 0;
}
