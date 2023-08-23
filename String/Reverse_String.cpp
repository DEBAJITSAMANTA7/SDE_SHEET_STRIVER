// Reverse the String 
#include <iostream>
#include <cstring>
using namespace std;

string Reverse(string s)
{
    string s1;
    for (int i = s.length(); i >= 0; i--)
    {
        s1.push_back(s[i]);
    }
    return(s1);
}

int main(int argc, char const *argv[])
{
    string s ="Hello World ";
    cout<<Reverse(s);
    return 0;
}
