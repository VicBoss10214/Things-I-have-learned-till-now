#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    string sub;
    cin>>s;
    cin>>sub;
    int res=s.find(sub);
    if(res==string::npos)
    {
        cout<<"NOT FOUND";
    }
    else
    {
        cout<<"Found";
    }
    return 0;

}
