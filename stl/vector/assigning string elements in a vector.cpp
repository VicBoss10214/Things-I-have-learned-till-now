#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    //Creating a string
    vector<int> n;//declaring an integer vector named a
    for(int i=0;i<s.size();i++)
    {
        n.push_back(s[i]-0);//using push_back to assign elements into vector, as they are character data type, I subtracted char'0' to get the integer value
    }
    //Now I can sort them easily
    sort(n.begin(),n.end());
    //lets print them
    for(int i=0;i<n.size();i++)
    {
        cout<<n[i];
    }
    return 0;
    //I solved helpful math namok problem in codeforces using this function
}
