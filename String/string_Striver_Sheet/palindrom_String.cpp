// Check a String is Palindrom or not
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#include <cstring>
string isPalindrome(string c)
{
    string p=c;
    reverse(p.begin(),p.end());
    
  if (p==c)
  {
    return ("yes");
    
  }
  else
  {
    return("no");
  }
  

}

int main(int argc, char const *argv[])

{
    string p = "ABCBA";
    cout << isPalindrome(p);
    return 0;
}
