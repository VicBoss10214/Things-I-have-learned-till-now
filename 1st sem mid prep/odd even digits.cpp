#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int odd=0;
    int even=0;
    while(n>0)
    {
        int r=n%10;
        if(r%2)
        {
            odd++;
        }
        else
        {
            even++;
        }
        n/=10;
    }
    cout<<odd<<endl<<even;
    return 0;
}
