#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
    int r;
    while(b%a!=0)
    {
        r=b%a;
        b=a;
        a=r;
    }
    return a;
}

int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>n;
        if(n%2)
        {
            b=n-1;
            a=b/2;
        }
        else
        {
            a=n/2;
        }
        cout<<a<<endl;
    }
    return 0;
}
