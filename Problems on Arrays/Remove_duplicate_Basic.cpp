#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int arr[] = {1, 2, 3, 4, 1, 3, 9, 4, 5, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    int init = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                for (int k = j; k < n; k++) // destroying arr[j] and other elements takes place of arr[j]
                {
                    arr[k] = arr[k + 1];
                }
                // j--;
                n--;
                init++;
            }
        }
        for (int i = 0; i < init; i++)
        {
            /* code */ cout << arr[i] << " ";
        }
    }

    return 0;
}
