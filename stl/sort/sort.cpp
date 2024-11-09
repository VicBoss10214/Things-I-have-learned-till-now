#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main()
{
    //for int array, sort(a,a+n).n= element no+1
    int a[4]={3,1,4,2};
    sort(a,a+4);
    for(int i=0;i<4;i++)
    {
        cout<<a[i]<<endl;
    }

    cout<<endl;

    //for vector , sort(v.begin(),v.end())
    vector<int> v = {5,7,4,2};
    sort(v.begin(),v.end());
    for(int i=0;i<4;i++)
    {
        cout<<v[i]<<endl;
    }
    return 0;
}
