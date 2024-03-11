/* use binary (+) operator to perform the addition of two numbers. */  
#include <iostream>  
using namespace std;  
class am 
{  
    // declare data member or variable  
    int x, y;  
    public:  
        // create a member function to take input  
        void input()  
        {  
            cout << " Enter the first number: ";  
            cin >> x;  
        }         
        void input2()  
        {  
            cout << " Enter the second number: ";  
            cin >> y;  
        }     
        // overloading the binary '+' operator to add number  
        am operator + (am &ob)  
        {  
            // create an object  
            am A;  
            // assign values to object  
            A.x = x + ob.x;  
            return (A);  
        }         
        // display the result of binary + operator  
        void print()  
        {  
            cout << "The sum of two numbers is: " <<x;  
        }         
};  
int main ()  
{  
   am x1, y1, result; // here we create object of the class Arith_num i.e x1 and y1   
    // accepting the values  
    x1.input();  
    y1.input();   
    // assign result of x1 and x2 to res  
    result = x1 + y1;    
    // call the print() function to display the results  
    result.print();      
    return 0;     
}  