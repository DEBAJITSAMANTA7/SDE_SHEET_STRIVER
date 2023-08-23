#include <iostream>
using namespace std;
void Changeing(int arr[], int s, int e)
{
    while (s <= e)
    {
        int init;
        init = arr[s];
        arr[s] = arr[e];
        arr[e] = init;
        s++;
        e--;

        // or you can do this 
        // swap(arr[s],arr[e]);
        // s++;
        // e--;
        /* code */
    }
}
void Reverse(int arr[], int n, int k)
{
    int d;
    d = n % k;
    Changeing(arr, 0, d - 1);
    Changeing(arr, d, n - 1);
    Changeing(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main(int argc, char const *argv[])
{
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;
    Reverse(arr, n, k);
    return 0;
}
