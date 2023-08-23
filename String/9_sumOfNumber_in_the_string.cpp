#include <iostream>
using namespace std;
#include <cstring>
void SumofNum(string s)
{
    int init = 0;
    int s2[s.length()];
    int count = 0;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z' || s[i] >= 'A' && s[i] <= 'Z')
        {
            continue;
        }
        else
        {
            // cout<<s[i];
            s2[init++] = (int)s[i];
            cout << s2[init] << endl;
        }
    }
    // for (int i = 0; i < init; i++)
    // {
    //     count=count+s2[i];
    //     cout<<count<<endl;
    // }
}
int main(int argc, char const *argv[])
{
    string s1 = {"123abcdEFGH45"};
    SumofNum(s1);
    return 0;
}
