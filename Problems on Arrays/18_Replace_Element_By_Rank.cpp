// try to make it in O(n) Time Complexity
#include <iostream>
#include <algorithm>

using namespace std;
void Replace_Elem(int arr[], int n)
{
    int arr2[n];
    for (int i = 0; i < n; i++)
    {
        arr2[i] = arr[i];
    }
    sort(arr2, arr2 + n);
    for (int i = 0; i < n; i++)
    {
       for (int j = 0; j <n; j++)
       {
         if (arr[i]==arr2[j])
         {
            cout<<arr[i]<<"->"<<j+1<<endl;
            break;
         }
         
       }
       


    }
}
int main(int argc, char const *argv[])
{
    int arr[] = {2,20, 15, 26, 2, 98, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    Replace_Elem(arr, n);
    return 0;
}


// ->> Striver Strategy 

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	int n = 6;
// 	int arr[n] = {20, 15, 26, 2, 98, 6};
// 	for (int i = 0; i < n; i++) {
// 		set<int>s;
// 		for (int j = 0; j < n; j++) {
// 			if (arr[j] < arr[i]) {
// 				s.insert(arr[j]);
// 			}
// 		}
// 		cout << s.size() + 1 << " ";
// 	}

// }