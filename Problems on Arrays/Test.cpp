#include <iostream>
#include <cstring>
using namespace std;

bool SubString(char str1[],char str2[],int n1, int n2)
{
    for (int  i = 0; i < n1-n2+1; i++)
    {
        int k=i;
        int temp=0;
        for (int j = 0; j < n2; j++)
        {
            if (str1[k]!=str2[j])
            {
               break;
            }
            k++;
            temp++;
        }
        
        if (temp==n2)
        {
           return(true);
        }
        
    }
    return(false);

}


int main(int argc, char const *argv[])
{
   char str1[]={"abcdefghxoxoijk"};
   char str2[]={"xoxo"};
   int n1=strlen(str1);
   int n2=strlen(str2);
   cout<<SubString(str1,str2,n1,n2);
    return 0;
}















