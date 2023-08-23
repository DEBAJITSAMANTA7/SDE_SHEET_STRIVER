#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void Repeat(int arr[], int n)
{
  int arr2[n];
  int k = 0;

  for (int i = 0; i < n; i++)
  {
    int count = 0;
    for (int j = 0; j < n; j++)
    {
      if (arr[i] == arr[j])
      {
        count++;
      }
    }
    if (count == 1)
    {
      arr2[k++] = arr[i];
    }
  }

  // remove the same duplicate element

  int arr3[k];
  int l = 0;
  for (int i = 0; i < k; i++)
  {
    if (arr[i] != arr[i + 1])
    {
      arr3[l++] = arr[i];
    }
  }

  //   print 1st two repeatating elemet
  for (int i = 0; i < 2; i++)
  {
    cout << arr3[i] << " ";
  }
}

int main(int argc, char const *argv[])
{
  int arr[] = {1, 2, 1, 1, 2, 3, 6, 4, 5, 4, 3};
  int n = sizeof(arr) / sizeof(arr[0]);
  sort(arr, arr + n);
  Repeat(arr, n);
  return 0;
}
