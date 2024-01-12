#include <iostream>
using namespace std;

void dupLastIndex(int arr[], int n)
{
    if( arr== NULL || n < 0 )
    {
        return;
    }

    for(int i=n-1; i>0; i--)
    {
        if (arr[i] == arr[i-1]){
         cout << "Last index: " << i << "\nLast duplicate item: " << arr[i] <<endl;

            return;
        }
    }

    cout<<"No Duplicate found"<<endl;
}

int main()
{
    int arr[]= {1, 5, 5, 6, 6, 7, 9};
    int n = sizeof(arr)/ sizeof(int);
    dupLastIndex(arr,n);
    return 0;
}
