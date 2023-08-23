// Count frequency of each element in the array
// Problem statement: Given an array,
// we have found the number of occurrences of each element in the array.

#include <iostream>
#include <vector>
using namespace std;
void Frequency(int arr[], int n)
{
    vector<bool> visited(n, false);
     
    for (int i = 0; i < n; i++)
    {
        if (visited[i] == true)
            continue;
        int count=1; //this position is important for count otherwise error occure  
        for (int j = i+1; j < n; j++)
        {
            // if arr[j]=i kori then it is an error 
            if (arr[i] == arr[j])
            {
                visited[j] = true;
                count++;
            }
        }
        cout << arr[i] << " total Times " << count << endl;
    }
}

int main(int argc, char const *argv[])
{
   int arr[]={ 10, 5, 10, 15, 10, 5};
   int n= sizeof(arr)/sizeof(arr[0]);
    // int n;
    // cin>>n;
    // int arr[n];
    // for (int i = 0; i < n; i++)
    // {
    //    cin>>arr[i];
    // }
    
    Frequency(arr, n);
    return 0;
}
