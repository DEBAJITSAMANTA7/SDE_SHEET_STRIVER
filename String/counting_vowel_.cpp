// Count number of vowels, consonants, spaces in String
#include <iostream>
using namespace std;
#include <cstring>
void counting(string s)
{
    for (int i = 0; i < s.length(); i++) // converting given string to lowercase
  {
    s[i] = towlower(s[i]);
  }


    string val = {'a', 'e', 'i', 'o', 'u'};
    string space = {' '};
    int val_count = 0;
    int space_count = 0;
    int consonent=0;
    for (int i = 0; i < s.length(); i++)
    {

        for (int j = 0; j < val.length(); j++)
        {
            if (s[i] == val[j])
            {
                val_count++;
            }
        }
        for (int k = 0; k < space.length(); k++)
        {
            if (s[i] == space[k])
            {
                space_count++;
            }

           
        }
        // if (s[i]>='a' && s[i]<='z')
        // {
        //     consonent++;
        // }
        
    }



    int cons = s.length() - val_count - space_count;
    cout << "Vawel " << val_count << " space " << space_count << "  Consonent" << cons;
}
int main(int argc, char const *argv[])
{
    string s = {"aeiou qk BAABA"};
    counting(s);
    return 0;
}
