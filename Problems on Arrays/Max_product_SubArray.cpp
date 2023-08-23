// Maximum Product Subarray in an Array
// Problem Statement: Given an array that contains both negative and positive integers, find the maximum product subarray.


#include<bits/stdc++.h>
using namespace std;
int SubArray(int arr[], int n)
{
    int maximum=INT_MIN;
    int subarr[n];
    int k=0;
    for (int i = 0; i <n; i++)
    {
        for(int j=i+1;j<n;j++)
        {
            int init=1;
            for (int k = i; k < j; k++)
            {
                init=init*arr[k];
            }
         maximum = max(init,maximum);      
        }
       
    }
return(maximum);
}

int main(int argc, char const *argv[])
{
    int arr[] = {5,4,3};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout<< SubArray(arr,n);
    
    return 0;
}
