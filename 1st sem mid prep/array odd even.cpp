#include <iostream>
using namespace std;
int main()
{
    char w[]="Kalabhuna";
    int a=0,e=0,i1=0,o=0,u=0;
    int size = sizeof(w)/sizeof(w[0]);
    cout<<size<<endl;
    for(int i=0;i<size-1;i++)
    {
        char ch = tolower(w[i]);
        if(ch=='a')
        {
            a++;
        }
        else if(ch=='e')
        {
            e++;
        }
        else if(ch=='i')
        {
            i1++;
        }
        else if(ch=='o')
        {
            o++;
        }
        else if(ch=='u')
        {
            u++;
        }
    }
    cout<<a<<e<<i1<<o<<u;
}
