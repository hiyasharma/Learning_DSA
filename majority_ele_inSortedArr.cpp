#include <iostream>
using namespace std;

int majorityElement(int arr[], int size)
{
    int count = 1;
    int candidate = arr[0];

    for(int i=1;i<size;i++)
    {
        if (arr[i] == candidate) {
            count++;
        } else {
            count--;

            if (count == 0) {
                // If count becomes 0, update the candidate to the current element
                candidate = arr[i];
                count = 1;
            }
        }


    }

    return candidate;
}

int main()
{
    int arr[] = {1, 2, 2, 2, 3, 4, 4, 4, 4, 4, 5};
    int size = sizeof(arr)/sizeof(arr[0]);

    cout<<"Majority Element is:"<<majorityElement(arr, size);

    return 0;
}
