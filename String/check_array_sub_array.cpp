// check a subarray in array  is exist or not in not same sequencetially
#include<iostream>
#include<cstring>
using namespace std;
int SubString(char str[],char key[],int n,int key_len)
{
for (int i = 0; str[i]==0; i++)// but not optimised cause -- case 1
// for (int i = 0; i<n-key_len+1; i++)//optimised
{
    int k=i,j;
    for ( j = 0; j < key_len; j++)
    {
       if (str[k]!=key[j])
       {
        break;
       }
       k++;
    }
    //after some time when subarray match at that time we just break from whole loop
   if (j == key_len)
   {
    cout<<"beginning arr is "<< i <<" to "<< i+3 <<endl;
    return(1);
   }
   
    
    
}
return(-1);
}
int main(int argc, char const *argv[])
{
  char str[]={"abcdefghijklaabb"};
  int n=strlen(str);
  char key[]={"xoxo"};
//   char key[]={"aabb"};
  int key_len=strlen(key);
  if (SubString(str,key,n,key_len)==1)
  {
    cout<<"exist"<<endl;
  }
  else
  {
    cout<<"Not Exist"<<endl;
  }
//   cout<<n;
//   for (int i = 0; i <n; i++)
//   {
//    cout<<str[i]<<endl;
//   }
  
    return 0;
}
