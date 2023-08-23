#include <iostream>
#include <cstring>
using namespace std;
void vowel(string s)
{
    // lower Character
    for (int  i = 0; i <s.length(); i++)
    {
        s[i]=towlower(s[i]);
    }
    int init=0;
    string s1;
    for (int i = 0; i <s.length(); i++)
    {
       if (s[i] =='a' || s[i] =='e' ||s[i] =='i' ||s[i] =='o' ||s[i] =='u' )
       {
        
       continue;
       }
       else
       {
         s1[init]=s[i];
        init++;
       }
       
    }
    for (int i = 0; i <init+1; i++)
    {
        cout<<s1[i]<<" ";
    }
    


}

int main(int argc, char const *argv[])
{
    string Str = "take u forward";
    vowel(Str);
    return 0;
}
