#include <iostream>

class A {
public:
    int a = 20; // Member variable of class A

private: // Encapsulate `B` as a member class
    class B {
    public:
        int b = 10; // Member variable of class B

        void show(int a, int b) {
            // Access member variables of A:
            std::cout << "The value of A's a (using this->a): " << this->a << std::endl;
            std::cout << "The value of A's a (using objA.a): " << objA.a << std::endl; // Corrected access

            // Access local variables:
            std::cout << "The value of a passed to show: " << a << std::endl;
            std::cout << "The value of b passed to show: " << b << std::endl;
        }

    private:
        A& objA; // Reference to enclosing A object

        B(A& objA) : objA(objA) {} // Constructor to obtain reference
    };

public:
    B getB() { // Provide a member function to create and return a B object
        return B(*this); // Pass `this` to constructor
    }
};

int main() {
    A objA;
    A::B objB = objA.getB(); // Create a B object using A's getB()

    objB.show(30, 40); // Call show() with arguments

    return 0;
}
