#include <iostream>
using namespace std;

int findElement(int arr[], int n, int key);

int deleteElement(int arr[], int n, int key)
{
    int pos = findElement(arr, n, key);

    if(pos==-1)
    {
        cout<<"Element not found"<<endl;
        return n;
    }


    for(int i=pos; i<n-1; i++)
    {
        arr[i] = arr[i+1];
    }
    return n-1;

}

int findElement(int arr[], int n, int key)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
            return i;
    }

    return -1;
}

int main()
{
    int arr[]={10, 50, 30, 40, 20};
    int n= sizeof(arr)/sizeof(arr[0]);
    int key = 30;

    cout<<"Array before deletion"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    n= deleteElement(arr, n, key);

    cout<<endl;

    cout<<"Array after deletion"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}
