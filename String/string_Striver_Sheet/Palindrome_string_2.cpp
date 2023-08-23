#include <iostream>
using namespace std;
#include <cstring>
string ispalindrome(string s)
{
   for (int i = 0; i < s.length()/2; i++)
   {
    if (s[i]!=s[s.length()-i-1])
    {
        return("not ");
    }
    
   }
   return("Yes");

}

int main(int argc, char const *argv[])
{
    string p;
    getline(cin, p);
    cout << ispalindrome(p);
    // char str1[]={"abc"};
    // cout<<strlen(str1);
    return 0;
}
