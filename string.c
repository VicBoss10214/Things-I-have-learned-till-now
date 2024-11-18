#include <stdio.h>
int main()
{
    char ch[100]="I love Shifa";
    printf("%s\n",ch);
    //It prints I love Shifa fine....but
    scanf("%s",&ch);
    printf("%s\n",ch);
    //when I do this it doesn't
    //the solution is using fgets(string name,size,stdin)
    //comment the previous lines t see the result properly
    char chn[100];
    fgets(chn,100,stdin);
    printf("%s\n",chn);
    return 0;
}
