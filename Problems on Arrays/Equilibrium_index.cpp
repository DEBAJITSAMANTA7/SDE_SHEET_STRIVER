#include <iostream>
using namespace std;
int Equilibrium(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        int leftsum = 0;
        int rightsum = 0;
        // left sum
        for (int j = 0; j < i; j++)
        {
            leftsum = leftsum + arr[j];
        }
        // Right sum
        for (int k = i + 1; k < n; k++)
        {
            rightsum = rightsum + arr[k];
            //    rightsum+=arr[k];
        }
        if (leftsum == rightsum)
        {
            return (i);
        }
    }
    return (-1);
}

int main(int argc, char const *argv[])
{
    int arr[] = {2, 3, -1, 8, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << Equilibrium(arr, n);

    return 0;
}
