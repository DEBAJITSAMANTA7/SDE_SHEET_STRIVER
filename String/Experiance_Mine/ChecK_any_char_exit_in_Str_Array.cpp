// Check any Character array exist in te array or not 
#include <iostream>
#include <cstring>
#include <stdlib.h>
#include <typeinfo>
using namespace std;
bool Check(string arr[],int n)
{
char k;
// cout<<typeid(arr).name();
for (int i = 0; i <n; i++)
{
    if (typeid(arr[i]).name()==typeid(k).name())
    {
       cout<<arr[i]<<endl;
       return(true);
       break;
    }
    
}
return(false);

}
using namespace std;
int main(int argc, char const *argv[])
{
    string elem[15]={"1234"};
    // getline(cin,elem);
    // int n=elem.size();
    int n=sizeof(elem)/sizeof(elem[0]);
    // cout<<elem<<endl<<n;
   if (Check(elem,15)==true)
    {
       cout<<"Exist";
    }
    else
    {
        cout<<" Not Exist";
    }
// for (int i = 0; i <20; i++)
// {
//    cout<<elem[i]<<" ";
// }

    return 0;
}
