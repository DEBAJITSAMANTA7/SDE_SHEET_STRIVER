
#include <iostream>
using namespace std ;
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int arr[5][2];
    for (int i = 0; i <5; i++)
    {
        for (int j = 0; j<2; j++)
        {
            cin>>arr[i][j];
        }
        
    }
    

    
    for (int i = 0; i <5; i++)
    {
        for (int j = 0; j<2; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}







