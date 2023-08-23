#include <iostream>
#include <algorithm>
using namespace std;

void sort(int arr[],int n1)
{
    for (int i = 0; i <n1; i++)
    {
        for (int j = 0; j <n1-1; j++)
        {
            if (arr[j]>arr[j+1])
            {
           swap(arr[j],arr[j+1]);
            }
        }
        
    }
    for (int i = 0; i <n1; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    int n;
    n=arr[n1/2];
   if (n%2==0)
   {
    cout<<n+1/2;
   }
   else
   {
    cout<<((n/2)+(n/2+1))/2;
   }
   
    
}
int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i <n; i++)
    {
       cin>>arr[i];
    }
    
   sort(arr,n);

    return 0;
}
