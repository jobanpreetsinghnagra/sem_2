////Fibonacci Series////
#include <iostream>
using namespace std;
 
int main() {
    int n, x = 0, y = 1, nextTerm = 0;
    cout << "Enter the number of terms: ";
    cin >> n;
    cout << "Fibonacci Series: ";
 
    for (int i = 1; i <= n; ++i) {
        if(i == 1) {
            cout << x << ", ";
            continue;
        }
        if(i == 2) {
            cout << y << ", ";
            continue;
        }
        nextTerm = x + y;
        x = y;
        y = nextTerm;
        cout << nextTerm << ", ";
    }
    return 0;
}
