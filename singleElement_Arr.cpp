#include <iostream>
using namespace std;

int findSingle(int arr[], int n)
    {
        for(int i=0;i<n;i++)
        {
            int count =0;

            for(int j=0;j<n;j++)
            {

                if(arr[i]==arr[j])

                count++;

            }

            if (count==1)

            return arr[i];

        }

    return -1;

    }





    int main()
    {
        int arr[] = {2, 2, 4, 3, 5, 4, 5, 6, 6};

        int n = sizeof(arr)/sizeof(arr[0]);

        cout<<findSingle(arr, n);

        return 0;

    }
