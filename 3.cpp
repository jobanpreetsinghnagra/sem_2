#include<iostream>
using namespace std;

int main() {
    int arr[5]={11,8,2,3};
    int  pos, i, n, value;
    cout << "Enter number of elements in array\n";
    cin >> n;


    cout << "Enter the location where you wish to insert an element\n";
    cin >> pos;

    cout << "Enter the value to insert\n";
    cin >> value;

    for (i = n - 1; i >= pos - 1; i--){
        arr[i+1] = arr[i];
    }
    arr[pos-1] = value;

    cout << "Resultant array is\n";

    for (i = 0; i <= n; i++)
        cout << arr[i] << "\n";

    return 0;
}
