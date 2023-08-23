#include <iostream>
using namespace std;
void Add(int arr[],int n,int e,int key)
{
    for (int i = n-1; i >=key; i--)
    {
        arr[i+1]=arr[i];
    
    }
    arr[key]=e;
    for (int i = 0; i < n+1 ; i++)  //now i=0 to i=5
    {
        cout<<arr[i]<<" " ;
    }
    
}
int main(int argc, char const *argv[])
{
    int n=5;//Total element in the array
    int arr[n+1]={1,2,3,4,5};
    int key=3;
    int e=99;
    Add(arr,n,e,key);
    return 0;
}
