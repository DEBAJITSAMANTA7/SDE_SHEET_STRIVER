#include <iostream>
using namespace std;
#include <string.h>
void Capital(string str)
{
    int init = 0;
    int n = str.length();
    string str1;
    for (int i = 0; i < n; i++)
    {
        str[i] = towlower(str[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (i == 0 || str[i-1]== ' '||i == n-1)
        {
            // str[i] = towupper(str[i]);
            str1[init++] = towupper(str[i]);
        }
        else if (str[i + 1] == ' ')
        {
            str1[init++] = towupper(str[i]);
        }
        else
        {
            str1[init++] = str[i];
        }
    }

    for (int i = 0; i < init; i++)
    {
       cout<<str1[i]; 
    }
    
}

int main(int argc, char const *argv[])
{
    // string str = {"DeBajit pallabi"};
    string str = {"HacLLi  iS NoYUh"};
    Capital(str);

    return 0;
}
