#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void Repeat(int arr[], int n)
{
 
       int count =0;
       int arr2[n];
       for (int i = 0; i <n-1; i++)
       {
        for (int j = i+1; j < n; j++)
        {
            if (arr[i]==arr[j])
            {
              
               arr2[count]=arr[i];
               count++;
            }
            
        }
        
       }

       //now if you want delete the 111,222,333,44 this types of duplicate data
       for (int i = 0; i <count; i++)
       {
        if (arr2[i]!=arr2[i+1])
        {
           cout<<arr2[i]<<" ";
        }
        
       }
       
       
}

int main(int argc, char const *argv[])
{
    int arr[] = {1, 2, 1, 1, 2, 3, 6, 4, 5, 4, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    sort(arr,arr+n);
    Repeat(arr, n);
    return 0;
}
