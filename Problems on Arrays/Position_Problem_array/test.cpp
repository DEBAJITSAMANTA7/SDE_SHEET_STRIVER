#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
   int arr[6]={1,2,3,4,5};
   cout<<sizeof(arr)/sizeof(arr[0]);
   cout<<arr[1];
    return 0;
}
