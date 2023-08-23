#include <iostream>
#include <stdlib.h>
using namespace std;
#include <cstring>
bool SubString(char str1[], int n1, char str2[], int n2)
{
  for (int i = 0; i < n1 - n2 + 1; i++)
  {
    int init = 0;
    int k = i; // for i iteration in j
    for (int j = 0; j < n2; j++)
    {
      if (str1[k] != str2[j])
      {
        break;
      }
      k++;
      init++;
    }

    // how to check how many iteration has been done
    if (init == n2)
    {
      return (true);
    }
  }
  return (false);
}

int main(int argc, char const *argv[])
{
  char str1[] = {"abcdefghijklxooxxomnopqrstuvwxyz"};
  char str2[] = {"xoxo"};
  int n1 = strlen(str1);
  int n2 = strlen(str2);
  cout << SubString(str1, n1, str2, n2);
  return 0;
}
