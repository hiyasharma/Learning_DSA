#include <iostream>
using namespace std;

int searchElement(int arr[], int n, int key)
{
    int i;
    for(int i=0;i<n;i++)
    {
        if(arr[i] == key)
        return i;
    }

    return -1;
}

int main()
{
    int arr[]={12, 34, 10, 6, 40};
    int n = sizeof(arr)/sizeof(arr[0]);

    int key = 40;

    int position = searchElement(arr, n, key);

    if (position == -1)
        cout << "Element not found";
    else
        cout << "Element Found at Position: "
             << position + 1;

    return 0;
}
