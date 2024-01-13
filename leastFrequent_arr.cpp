#include <iostream>
#include <climits>
using namespace std;

int leastFrequent(int arr[], int n)
    {
        int minCount= INT_MAX;
        int element_hav_least_freq;

        for (int i=0;i<n;i++)
        {
            int count=0;
            for(int j=0;j<n;j++)
            {
                if(arr[i]==arr[j])

                    count++;

            }
                if (count < minCount)
                {
                    minCount = count;
                    element_hav_least_freq = arr[i];
                }
        }
                return element_hav_least_freq;



    }

int main()
{
    int arr[]={ 80, 40, 40, 40, 80, 80, 10, 40, 40};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<leastFrequent(arr, n);
    return 0;

}
