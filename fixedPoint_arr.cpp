#include <iostream>
using namespace std;

int linearSearch(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==i)
        return i;
    }

    return -1;
}

int main()
{
    int arr[]={9, 4, 12, 3, 5, 6};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"Fixed point is:"<<linearSearch(arr, n)<<endl;
    return 0;

}
