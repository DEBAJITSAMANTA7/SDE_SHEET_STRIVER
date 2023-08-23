/*Find Second Smallest and Second Largest Element in an array
Problem Statement: Given an array, find the second smallest and second largest element in the array.
 Print ‘-1’ in the event that either of them doesn’t exist.*/
#include <iostream>
using namespace std;
void sort(int arr[], int n)
{
    // Bubble sort i is for iteration no count j works form o to n-1
    // int size = sizeof(arr) / sizeof(arr[0]);

    if (n > 1)
    {

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n - 1; j++)
            {
                if (arr[j] > arr[j + 1])
                {
                    swap(arr[j], arr[j + 1]);
                }
            }
        }
        cout << "2nd largest & 2nd smallest " << arr[1] << " " << arr[n - 2];
    }
    else
    {
        cout << " Not enough Elements exist" << endl;
    }
    /*for (int i = 0; i < n; i++)
     {
         cout << arr[i] << " ";
     }*/
}
int main(int argc, char const *argv[])
{

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, n);

    return 0;
}
