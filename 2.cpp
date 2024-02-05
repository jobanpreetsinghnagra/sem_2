#include <iostream>
using namespace std;
 
int factorial(int n) {
    if (n > 1)
        return n * factorial(n - 1);
    else
        return 1;
}
 
int main() {
    int n;
 
    cout << "Enter a positive integer: ";
    cin >> n;
 
    if (n < 0)
        cout << "Error! Factorial of a negative number doesn't exist.";
    else
        cout << "Factorial of " << n << " = " << factorial(n);
 
    return 0;
}
