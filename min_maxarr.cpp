#include <iostream>
using namespace std;

int getMIN(int arr[], int n)
    {
        int minval = arr[0];
        for(int i=1;i<n;i++)
            {
            if (arr[i]< minval)
                {
                    minval = arr[i];
                }
            }
      return minval;
        }

int getMAX (int arr[], int n)

    {
        int maxval = arr[0];

        for(int i=1;i<n;i++)
        {
            if (arr[i] > maxval){
                maxval = arr[i];
            }
        }
    return maxval;
    }


int main()
    {
        int numbers[] = {12, 24, 45, 62, 1, 89, 4};

        int size= sizeof(numbers)/ sizeof(numbers[0]);

        cout<<"Minimum Element:"<< getMIN (numbers, size)<<endl;
        cout<<"Maximum Element:"<< getMAX (numbers, size)<<endl;

        return 0;
    }
