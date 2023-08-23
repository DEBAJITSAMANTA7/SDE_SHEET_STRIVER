// if same element exist then destroy this and make it dynamic array;
#include<iostream>
using namespace std;
void Destroy(int arr[],int n)
{
    int i,j,k;
for ( i = 0; i <n; i++)
{
    for ( j = i+1; j <n; j++)
    {
        if (arr[i]==arr[j])
        {
            for ( k = j; k <n; k++)
            {
                arr[k]=arr[k+1];
            }
            n--;
        }
        
    }
    
}

for (int i = 0; i <n; i++)
{
    cout<<arr[i]<<endl;
}

}

int main(int argc, char const *argv[])
{
    int arr[]={1,2,3,4,1,2,3,4,56,47,34,56};
    int n= sizeof(arr)/sizeof(arr[0]);
    
    // cout<<sizeof(arr)/sizeof(arr[0]);
    Destroy(arr,n);
    

    return 0;
}
