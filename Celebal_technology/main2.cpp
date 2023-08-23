#include <bits/stdc++.h>
using namespace std;

void Reverse(string str)
{
    int n = str.length();
    // reverse(str.begin(), str.end());

    for (int i = 0; i <= n / 2; i++)
    {
        swap(str[i], str[n - i - 1]);
    }

    for (int i = 0; i < str.length(); i++)
    {
        str[i] = towlower(str[i]);
    }

    for (int i = 0; i <n; i++)
    {
        if (i == 0 || i == n - 1)
        {
            str[i] == toupper(str[i]);
            cout<<str[i]<<" ";
        }
    }
    // for (int i = 0; i <str1.length; i++)
    // {
    //     /* code */
    // }

   cout<<str<<endl;
   cout<<toupper(str[2]);   }

int main(int argc, char const *argv[])
{
    string s = "hello wORld";
    s[0] = toupper(s[0]);
    Reverse(s);
    return 0;
}
