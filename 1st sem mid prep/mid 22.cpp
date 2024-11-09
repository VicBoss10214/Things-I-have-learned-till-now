#include <iostream>
using namespace std;
int main()
{
    int n,s=0,co=0,io;
    cin>>n;
    int i=1;
    while(s<n)
    {
        if(s+i>n)
            break;
        s=s+i;
        co++;
        i++;
    }
    io=n-s;
    cout<<co<<"."<<io;
    return 0;
}
