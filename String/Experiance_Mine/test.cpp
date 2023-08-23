#include <iostream>
#include <cstring>
#include <typeinfo>
using namespace std;
int main(int argc, char const *argv[])
{
  int n;
//   cout<<sizeof(n);
string arr[]={"123bh"};
char c='a';
cout<<typeid(c).name();
    return 0;
}
