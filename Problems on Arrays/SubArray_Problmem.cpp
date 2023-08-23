#include <iostream>
using namespace std;
void Subarray(int arr1[], int arr2[], int n1, int n2)
{
    int init = 0;
    // cout<<"hello";
    for (int j = 0; j < n2; j++)
    {
    
        for (int i = 0; i < n1; i++)
        {
            if (arr2[j] == arr1[i])
            {
                init++;
                
                break;
            }
        }
    }
    if (init == n2)
    {
        cout << "exist";
    }
    else
    {
        cout << "Not Exist";
    }
}
int main(int argc, char const *argv[])
{
    /* code */
   

    // int arr1[] = {2, 4, 3, 1, 7, 5, 15};
    // int arr2[] = {1, 3, 4, 5, 2};
    int arr1[] = {2, 4, 3, 1, 7, 5, 15};
    int arr2[] = {9,4,3,7,69,7};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    Subarray(arr1, arr2, n1, n2);

     return 0;
}
