// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;
//     for (int i = 0; i < t; i++)
//     {
//         int n, d;
//         cin >> n >> d;
//         long long int fact = 1;
//         for (int i = 1; i <= n; i++)
//         {
//             fact = fact * i;
//         }
//         if (fact % d == 0)
//         {
//             cout << "YES" << endl;
//         }
//         else
//         {
//             cout << "NO" << endl;
//         }
//     }
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int n, d;
        cin >> n >> d;
        
        long long fact = 1;
        for (int j = 1; j <= n; j++) {
            fact = fact * j;
           
            if (fact % d == 0) break;
            if (fact > d) fact %= d;  
        }
        
        if (fact % d == 0) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
