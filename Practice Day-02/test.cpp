#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    
    int i = 0, j = n - 1;  // Set j to n-1 to start from the last element
    bool flag = true;      // Use bool instead of int for clarity

    while (i < j)
    {
        if (array[i] != array[j])
        {
            flag = false;
            break;         // Break early if a mismatch is found
        }
        i++;
        j--;
    }

    if (flag)
    {
        cout << "YES" << endl; // Array is a palindrome
    }
    else
    {
        cout << "NO" << endl;  // Array is not a palindrome
    }
    
    return 0;
}
