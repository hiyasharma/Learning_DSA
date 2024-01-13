#include <iostream>
using namespace std;

int mostFrequent(int arr[], int n)
    {
        int maxCount=0;
        int element_hav_max_freq;

        for (int i=0;i<n;i++)
        {
            int count=0;
            for(int j=0;j<n;j++)
            {
                if(arr[i]==arr[j])

                    count++;

            }
                if (count > maxCount)
                {
                    maxCount = count;
                    element_hav_max_freq = arr[i];
                }
        }
                return element_hav_max_freq;



    }

int main()
{
    int arr[]={ 60, 40, 40, 40, 80, 73, 94, 61, 40};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<mostFrequent(arr, n);
    return 0;

}


