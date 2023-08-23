#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>

using namespace std;
int main()
{
    int n = 5;
    int nums[] = {10, 3, 5, 6, 2};

    int temp = 0;
    
    for (int i = 0; i < n; i++)
    {
        if (n == 1)
        {
            cout << 1;
            break;
        }
        for (int j = 0; j < n; j++)
        {
            temp = temp + nums[j];
        }
        temp = temp - nums[i];
        cout << temp;
        temp = 0;
        cout << endl;
    }
    return (0);
}






