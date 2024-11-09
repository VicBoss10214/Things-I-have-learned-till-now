#include <iostream>
using namespace std;
int main()
{
    int n,r,s=0;
    cin>>n;
    int temp = n;
    while(n!=0)
    {
        r=n%10;
        s=s*10+r;
        n/=10;
    }
    if(s==temp)
    {
        cout<<"Palindrome";
    }
    return 0;
}
