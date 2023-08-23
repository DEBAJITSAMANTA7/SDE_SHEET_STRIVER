#include<iostream>
using namespace std;
#include <cstring>
string Remove(string s)
{
    string s1;
    int count=0;
    for (int i = 0; i <s.length(); i++)
    {
        if (s[i]=='(' ||s[i]==')')
        {
            continue;
        }
        else
        {
            // cout<<s[i];
            s1[count++]=s[i];
        }
        
    }
    // for (int i = 0; i < count; i++)
    // {
    //     cout<<s1[i];
    // }
    
    return(s1);
}
int main(int argc, char const *argv[])
{
    string s={"a+((b-c)+d)"};
    cout<<Remove(s);
    return 0;
}
