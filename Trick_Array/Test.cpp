// Remove Duplicate from the arraym
#include <iostream>
#include <algorithm>
#include <stdlib.h>
using namespace std;
void Sorted(int arr[], int n)
{
    int init = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[init] != arr[i])
        {
            init++;
            arr[init] = arr[i];
        }
    }

    for (int i = 0; i < init + 1; i++)
    {
        cout << arr[i] << " ";
    }
}

void Unsorted(int arr[], int n)
{
    // destroying previous similar Array Elements Index and right shift those elements from as same destroing

    cout << " Unsorted" << endl;
    int i, j, k;
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                for (k = j; k < n; k++)
                {
                    arr[k] = arr[k + 1];
                }
                n--;
            }
        }
    }

    // print
    sort(arr,arr+n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(int argc, char const *argv[])
{
    int arr[] = {11, 2, 3, 1, 2, 4, 5, 6, 2, 777, 85, 11, 33, 2, 44, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    Unsorted(arr, n);
    sort(arr, arr + n);
    Sorted(arr, n);
    return 0;
}
