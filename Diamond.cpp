#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n ;
    cin>>n ;
    
    for(int i= 0 ; i<=n ; i++)                     // first half 
    {
        for(int j=0 ; j<n ; j++)
        {
            if(j<n-i)
            {cout<<" " ;}
        else
        {
            cout<<"*" ;
        }
        }
        for(int j =0 ; j<=i ; j++)
        {
            cout<<"*" ;
        }
        cout<<endl ;
    }                                           // for triangle 
        for(int i= n ; i>=0 ; i--)              // second half
    {
        for(int j=0 ; j<n ; j++)
        {
            if(j<n-i)
            {cout<<" " ;}
        else
        {
            cout<<"*" ;
        }
        }
        for(int j =0 ; j<=i ; j++)
        {
            cout<<"*" ;
        }
        cout<<endl ;
    }

    return 0;
}
