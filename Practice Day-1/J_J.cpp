#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int array[n];
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
        cin >> array[i];
    }
    cout << sum;

    return 0;
}