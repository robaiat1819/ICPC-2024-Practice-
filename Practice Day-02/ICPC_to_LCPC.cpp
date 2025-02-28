#include<bits/stdc++.h>
using namespace std;
int main()
{
    int y;
    cin>>y;
    if(y<1582)
    {
        if(y%4==0)
        {
            cout<<"I can participate in LCPC"<<endl;
        }
        else 
        {
            cout<<"I have to travel back to the past"<<endl;
        }
    }
    else if(y%4==0)
    {
        cout<<"I can participate in LCPC"<<endl;
    }
    else if(y%100==0)
    {
        cout<<"I have to travel back to the past"<<endl;
    }
    else
    {
        cout<<"I have to travel back to the past"<<endl;
    }
    return 0;
}