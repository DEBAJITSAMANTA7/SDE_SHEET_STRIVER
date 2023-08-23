// Remove Spaces from a String
#include <cstring>
#include <iostream>
using namespace std;

void RemoveSpace(string s)
{
    for (int i = 0; i < s.length(); i++)
    {
        s[i] = towlower(s[i]);
    }
    int init = 0;
    string s1;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i]!= ' ')
        {
            s1[init++] = s[i];
            // cout<<s1
        }
    }

    for (int i = 0; i < init + 1; i++)
    {
        cout << s1[i];
    }
}
int main(int argc, char const *argv[])
{
    string str = "Take you forward";
    RemoveSpace(str);
    // char arr[]={"abcdefgh"};
    // cout<<strlen(arr);
    return 0;
}
