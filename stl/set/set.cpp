#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<int>s;
    s.insert(1);
    s.insert(3);
    s.insert(2);
    s.insert(4);
    for(auto& str : s)
        cout<<str;
        cout<<endl;

    s.erase(4);
    for(auto& str : s)
        cout<<str;
        cout<<endl;
    if(s.count(5))//checks if 5 is present in the set
    {
        cout<<"5 is here"<<endl;
    }
    else
    {
        cout<<"5 is not here"<<endl;
    }


    cout<<s.size();//current size of set
    return 0;
}
