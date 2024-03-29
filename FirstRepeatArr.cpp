#include <iostream>
using namespace std;

int FirstRepeatingElement(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if (arr[i]==arr[j])
                return i;
        }
    }

    return -1;
}

int main()
{
    int arr[]={10, 5, 3, 4, 3, 5, 6};
    int n= sizeof(arr)/sizeof(arr[0]);
    int index = FirstRepeatingElement(arr, n);
    if (index == -1) {
        cout << "No repeating element found!" << endl;
    }
    else {
        // Printing the first repeating element and its
        // index
        cout << "First repeating element is " << arr[index]
             << endl;
    }

    return 0;
}
