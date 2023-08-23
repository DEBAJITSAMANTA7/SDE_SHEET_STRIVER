// Check a String is Palindrom or not 
#include<iostream>
using namespace std;
#include <cstring>

bool Palindrom(char str[],int n)
{

for (int  i = 0; i <n; i++)
{
    int k=n-1;
    if (k== n/2)
    {
        /* code */
    }
    
    if (str[i]==str[k])
    {
        k--;

    }
    
}

}
int main(int argc, char const *argv[])
{
    char str1[]={"abba"};
    int n=strlen(str1);
    cout<<n;
    // cout<<Palindrom(str1,n);
    return 0;
}
