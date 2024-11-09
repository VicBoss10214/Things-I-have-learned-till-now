#include <iostream>
using namespace std;
int main()
{
    int r;
    cin>>r;
    for(int i=1;i<=r;i++)
    {
        for(int j=r-1;j>=i;j--)
        {
            cout<<"  ";
        }
        for(int j=1;j<=i;j++)
        {
            cout<<char(64+j);
        }
        for(int j=2;j<=i;j++)
        {
           cout<<char(65+(i-j));
        }
        cout<<endl;
    }
     cout<<endl<<endl;

    for(int i=1;i<=r;i++)
    {
        if((i==1)||(i==r))
        {
            for(int j=i;j<=i+r-1;j++)
            {
                cout<<j;
            }
        }
        else
        {
            for(int j=i;j<=i+r-1;j++)
            {
                if((j==(i+r-1))||(j==i))
                {
                    cout<<j;
                }
                else
                {
                    cout<<" ";
                }
            }
        }
        cout<<endl;
    }
    cout<<endl<<endl;
    for(int i=1;i<=r;i++)
    {
        if((i==1)||(i==r))
        {
            for(int j=1;j<=r;j++)
            {
                cout<<"1 ";
            }
        }
        else
        {
            for(int j=1;j<=r;j++)
            {
                if((j==1)||(j==r))
                {
                    cout<<"1 ";
                }
                else
                {
                    cout<<"0 ";
                }
            }
        }
        cout<<endl;
    }
    cout<<endl<<endl;
    for(int i=r;i>=1;i--)
    {
        for(int j=1;j<=i;j++)
        {
            if(j==r)
                continue;
            cout<<char(64+j);
        }
        for(int j=2;j<=r-i+1;j++)
        {
            cout<<" ";
        }
        for(int j=3;j<=r-i+1;j++)
        {
            cout<<" ";
        }
        for(int j=1;j<=i;j++)
        {
            cout<<(char)(64+i-j+1);
        }
        cout<<endl;
    }


    return 0;
}
