#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    string s1=s.substr(3,3);
    //declared another string called s1 to store the substring
    //substr() function does the main thing
    //main string.substr(index of first element,lenghth of the sub string)
    cout<<s1;
    return 0;
}
