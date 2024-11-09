#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v={1,2,3,4};
    auto it=v.begin();
    cout<<*it;
    cout<<++*it;
    cout<<*(it+3);
    return 0;
}
