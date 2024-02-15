#include <iostream>
using namespace std;

void removeElement(int arr[], int &n, int key) {
    int i;
    for (i=0; i<n; i++)
        if (arr[i] == key)
            break;

    if (i < n) {
        n = n - 1;
        for (int j=i; j<n; j++)
            arr[j] = arr[j+1];
    }
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr)/sizeof(arr[0]);
    int key = 30;

    cout << "Array before removing " << key << " : ";
    for (int i=0; i<n; i++)
        cout << arr[i] << " ";

    removeElement(arr, n, key);

    cout << "\nArray after removing " << key << " : ";
    for (int i=0; i<n; i++)
        cout << arr[i] << " ";

    return 0;
}
