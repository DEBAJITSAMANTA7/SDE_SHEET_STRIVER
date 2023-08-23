#include <iostream>
using namespace std;
#include <algorithm>
void NonRepeat(int arr[], int n)
{
    int arr2[n];
    int k=0;
    for (int i = 0; i < n; i++)
    {
        int count=0;
        for (int j = 0; j < n; j++)
        {
            if (arr[i]==arr[j])
            {
                count++;
            }
            
        }
        if (count==1)
        {
            // cout<<arr[i]<<" ";
            arr2[k++]=arr[i];
           
        }
        
    }
// cout <<endl;
// print 1st 2
    for (int  i = 0; i <2; i++)
    {
        cout<<arr2[i]<<" ";
    }
    
    
}
int main(int argc, char const *argv[])
{
    int arr[] = {1, 2, 1, 1, 2, 3, 6, 4, 5, 4, 3, 9, 20};
    int n = sizeof(arr) / sizeof(arr[0]);
    sort(arr, arr + n);
    NonRepeat(arr, n);
    return 0;
}