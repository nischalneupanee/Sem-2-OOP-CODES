// WAP to demonstrate the concept of pointer and array.
#include <iostream>

using namespace std;

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    int *ptr;
    ptr = arr;

    cout << "Elements of the array using pointer:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << *(ptr + i) << " ";
    }
    cout << endl;

    cout << "Elements of the array using array indexing:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
