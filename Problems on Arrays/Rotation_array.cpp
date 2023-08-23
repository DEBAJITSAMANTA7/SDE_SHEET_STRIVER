#include <iostream>
using namespace std;
void Reverse(int arr[], int start, int end)
{

    while (start < end)
    {
        int temp;
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
   
}
void rotateArr(int arr[], int d, int n)
{

    d = d % n;
    Reverse(arr, d, n - 1);
    Reverse(arr, 0, d - 1);
    Reverse(arr, 0, n - 1);
    
    
}
int main(int argc, char const *argv[])
{
    int arr[] = {1, 2, 3, 4, 5};
    rotateArr(arr, 10, 5);
    return 0;
}
