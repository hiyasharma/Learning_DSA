#include <iostream>

using namespace std;

int max_Consecutive_steps(int arr[], int n)
{
    int maximum=0;
    int count =0;

    for(int i=1; i<n; i++)
    {
        if(arr[i]>arr[i-1])
        {
            count++;
        }

        else
        {

        maximum = max(maximum, count);

        count =0;

        }

    }

    return max(maximum, count);
}

int main()
{
    int arr[]={1, 2, 3, 4};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<max_Consecutive_steps(arr, n)<<endl;
}
