#include <stdio.h>
int main()
{
    int a[]={1,2,3,4,5};
    int b[]={5,4,3,2,1};
    int size=sizeof(a)/sizeof(a[0]);
    int c[size];
    for(int i=0;i<size;i++)
    {
        c[i]=a[i]+b[i];
        printf("%d",c[i]);
    }
    return 0;
}
