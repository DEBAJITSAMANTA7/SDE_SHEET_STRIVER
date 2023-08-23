#include <iostream>
#include <cstring>
using namespace std;
void counting(string s)
{
    int vowel_count = 0, consonent_count = 0, white_space_count = 0;
    // covert all string in lower case
    for (int i = 0; i < s.length(); i++)
    {
        s[i] = towlower(s[i]);
    }

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
        {
            vowel_count++;
        }
        else if (s[i] >= 'a' && s[i] <= 'z')
        {
            consonent_count++;
        }
        else if (s[i] = ' ')
        {
            white_space_count++;
        }
    }

    cout << vowel_count << " " << consonent_count << " " << white_space_count;
}
int main(int argc, char const *argv[])
{

    string s = {"aeiou 12 ll"};
    counting(s);

    return 0;
}
