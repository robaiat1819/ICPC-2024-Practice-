// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     char s;
//     cin>>getline

//     return 0;
// }
#include <iostream>
#include <string>
using namespace std;

int main() {
    string binaryString;
    cin >> binaryString;

    int count0 = 0, count1 = 0;

    
    for (char c : binaryString) {
        if (c == '0') {
            count0++;
        } else if (c == '1') {
            count1++;
        }
    }

    // Output the counts
    
    cout  << count1 <<" ";
    cout  << count0 << endl;

    return 0;
}
