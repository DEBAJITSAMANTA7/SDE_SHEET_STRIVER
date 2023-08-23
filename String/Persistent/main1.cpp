// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
#include <algorithm>
int main() {
    // Write C++ code here
    int arr[]={1,0,3,2,0,4,9,0,5,0,7};
    // int arr[]={};
    int n=sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+n);
    
    int arr2[n];
    int arr3[n];
    int init=0;
    if (n<=0)
    {
       return(0);
    }
    

    for (int i = 0; i <n; i++)
    {
       if (arr[i]!=0)
       {
           arr2[init]=arr[i];
           init++;
       }
       
       
    }
    // cout<<init<<n<<endl;
     for (int i = 0; i <n; i++)
    {
       if (arr[i]==0)
       {
           arr2[init]=arr[i];
           init++;
       }
       
       
    }
 for (int i = 0; i < n ; i++)
 {
   cout<<arr2[i]<<" ";
 }
 
    // for (int i = 0; i <n; i++)
    // {
    //    if (arr[i]==0)
    //    {
    //        arr2[init]=arr[i];
    //        init++;
    //    }
       
       
    // }
    
    // int init=0;
    // int count=0;
    // int k=n;
    // for (int i=0;i<n;i++)
    // {
    //   if(arr[i]!=0)
    //   {
    //       arr2[init]=arr[i];
    //       init++;
    //       cout<<arr2[i]<<" ";
    //   }
    //   cout<<endl;
    //   if(arr[i]==0)
    //   {
    //       count++;
    //   }
    // //   cout<<count;
        
    // }

    return 0;
};