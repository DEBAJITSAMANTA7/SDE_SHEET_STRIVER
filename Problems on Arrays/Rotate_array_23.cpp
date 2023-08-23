// Find non repeatating no

#include <iostream>
using namespace std;
#include <algorithm>
void Non_Repeatating(int arr[], int n, int d1)
{
        int d= n%d1;
        cout<<d;
      int temp[n];
      
      
          for(int i=0;i<d+1;i++)
          {
              temp[i]=arr[d+i];
              
          }
          for (int i = 0; i <d; i++)
    {
       cout<<temp[i];
    }
          
    // for (int i = 0; i <d; i++)
    // {
    //    cout<<temp[i];
    // }
    

       for(int i=0;i<d1;i++)
       {
        temp[d+i]=arr[i];
           
       }


    //    for(int i=0;i<n;i++)
    //    {
    //        arr[i]=temp[i];
    //    }
    // for (int i = 0; i < n; i++)
    // {
    //     arr[i] = temp[i];
    //     cout<<arr[i]<<" ";
    // }
}
int main(int argc, char const *argv[])
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    // sort(arr,arr+n);
    int d = 3;
    Non_Repeatating(arr, n, d);
    return 0;
}
