#include <bits/stdc++.h>

using namespace std;

int main()
{
    pair<int,int> a[4];

    for(int i=0;i<4;i++)
    {
        cin>>a[i].first>>a[i].second;
    }


    sort(a,a+5);
    for(int i=0;i<4;i++)
    {
        cout<<a[i].first<<a[i].second<<endl;
    }


    //to be continued

    return 0;

}
