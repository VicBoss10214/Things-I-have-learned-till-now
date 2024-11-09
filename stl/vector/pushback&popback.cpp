#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v;
    //push_back add elements by order
    v.push_back(6);
    v.push_back(7);
    v.push_back(8);
    cout<<v[0]<<v[1]<<v[2]<<endl ;

    //pop_back removes last element

    v.pop_back();
    v.push_back(0);
    cout<<v[0]<<v[1]<<v[2]<<endl ;

    //use size() to print size
    cout<<v.size();

    return 0;
}
