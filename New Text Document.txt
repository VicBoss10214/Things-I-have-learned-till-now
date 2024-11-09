#include <iostream>
using namespace std;
//I used this program to solve a codeforces problem named boy or girl
int main()
{
    string s;
    cin>>s;
    int size=s.size();
    for(int i=0;i<s.size();i++)
    {
        for(int j=i+1;j<size;j++) //i+1 diye shuru korlam..noyto abar nijerei count kore bosbe
        {
            if(s[i]==s[j])
            {
                for(int k=j;k<size-1;k++)
                /*etai holo deleting process....jei duplicate re detect korlo..
                sedare tar porer ta diye replace korte thakum...
                size-1 dilam....karon jehetu delete korsi akta element so last er element e garbage value
                chole asbe*/

                {
                    s[k]=s[k+1];
                }
                size--;//size kome jabe tai
                j--;//j increment hobe na...increment hole next element diye comparison na kore tar porer tay chole jabe
            }
        }
    }
    for(int i=0;i<size;i++)
    {
        cout<<s[i];
    }
    return 0;
}
