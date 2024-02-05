#include<iostream>
using namespace std;

void remove(int arr[], int &n, int pos) {
    // Shift elements to the left
    for (int i = pos - 1; i < n - 1; i++)
        arr[i] = arr[i + 1];
  
    // Decrease the size of the array
    n--;
}

int main() {
    int arr[100], n, position;

    cout << "Enter number of elements in array\n";
    cin >> n;
    cout << "Enter " << n << " elements\n";

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Enter the location where you wish to remove an element\n";
    cin >> position;

    // Remove the value at the desired position
    remove(arr, n, position);

    cout << "Resultant array is\n";

    for (int i = 0; i < n; i++)
        cout << arr[i] << "\n";

    return 0;
}
