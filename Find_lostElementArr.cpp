#include <iostream>
using namespace std;

int Find_Lost_Element(int arr1[], int arr2[], int n1, int n2)
{
    for(int i = 0; i < n1; i++)
    {
        bool found = false;

        for(int j = 0; j < n2; j++)
        {
            if(arr1[i] == arr2[j])
            {
                found = true;
                break;
            }
        }

        if (!found)
        {
            return arr1[i];
        }
    }

    return -1; // Return -1 if no missing element is found
}

int main()
{
   int arr1[] = {1, 4, 5, 7, 9};
   int arr2[] = {4, 5, 7, 9};

   int n1 = sizeof(arr1) / sizeof(arr1[0]);
   int n2 = sizeof(arr2) / sizeof(arr2[0]);

   int missing = Find_Lost_Element(arr1, arr2, n1, n2);

   if (missing == -1) {
       cout << "No missing element" << endl;
   }
   else {
       cout << "Missing element: " << missing << endl;
   }
   return 0;
}
