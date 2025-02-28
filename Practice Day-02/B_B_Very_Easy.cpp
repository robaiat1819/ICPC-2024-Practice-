// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int array[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> array[i];
//     }
//     int i = 0, j = n - 1;
//     bool flag = true;
//     while (i < j)
//     {
//         if (array[i] != array[j])
//         {
//             flag = false;
//             break;
//         }
//         i++;
//         j--;
//     }

//     if (flag)
//     {
//         cout << "NO" << endl;
//     }
//     else
//     {
//         cout << "YES" << endl;
//     }


//     return 0;
// }
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
    
    int i = 0, j = n - 1;  
    bool flag = true;      

    while (i < j)
    {
        if (array[i] != array[j])
        {
            flag = false;
            break;         
        }
        i++;
        j--;
    }

    if (flag)
    {
        cout << "YES" << endl; 
    }
    else
    {
        cout << "NO" << endl;  
    }
    
    return 0;
}
