// Remove characters from a string except alphabets
#include <iostream>
#include <cstring>
using namespace std;

string solve(string str, int n) {
  string ans;
  for (int i = 0; i < n; i++) {
    int ascii = (int) str[i]; // ascii value

    if ((ascii >= 65 && ascii <= 90) || (ascii >= 97 && ascii <= 122)) // if alphabets
      ans.push_back(str[i]);
  }
  return ans;
}

void Change(string s)
{
    int init = 0;
    string s1;
    // for (int i = 0; i < s.length(); i++)
    // {
    //     s[i] = towlower(s[i]);
    // }
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z' || s[i] >= 'A' && s[i] <= 'Z')
        {
            s1[init++] = s[i];
        }
    }

    for (int i = 0; i < init; i++)
    {
        cout << s1[i];
    }
}

int main(int argc, char const *argv[])

{
    string str = "take12% *&u ^$#forward";
    // Change(str);
    // cout<<solve(str,str.length());
//     string s ={"a,z,A,Z"};
//   int init;
//   for (int i = 0; i <s.length(); i++)
//   {
//     cout<<(int)s[i]<<endl;
//   }
  
    return 0;
}
