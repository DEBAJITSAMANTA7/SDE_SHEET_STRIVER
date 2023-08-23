// Remove all vowels from the String
#include <iostream>
#include <cstring>
using namespace std;
void Removeing(string s)
{
    string s2;
    int count=0;
    for (int i = 0; i < s.length(); i++)
    {
        s[i] = towlower(s[i]);
    }
    // cout<<"okay";
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            s2[i] = s[i];
            count++;
            cout<<s2[i];
            // cout<<s2[i]<<" "<<s[i]<<endl;
        }
    }
 

    // for (int i = 0; i < count; i++)
    // {
    //     cout << s2[i] << " ";
    // }
}
int main(int argc, char const *argv[])
{

    string s;
    s = {"abcd123efgh"};
    Removeing(s);
    return 0;
}
