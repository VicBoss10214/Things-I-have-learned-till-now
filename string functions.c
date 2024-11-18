#include <stdio.h>
#include <string.h>
//Shifa is an imaginary character
int main()
{
    char s[100]="I love Shifa";
    //This string consists of 12 characters....lets see if its true
    int str_size=strlen(s);
    printf("%d\n",str_size);
    //It returns 12...bingo
    //use strcpy(target string,copied string);
    char s1[100]="I hate";
    strcpy(s,s1);
    printf("%s\n",s);
    //it prints only I hate because this  printing stops when it sees null character
    //lets print using a loop
    for(int i=0;i<12;i++)
    {
        printf("%c",s[i]);
    }
    printf("\n");
    //No man ...I  don't hate Shifa....I love her so much, I want to marry her
    //so lets print something like that
    char s2[100]="I love Shifa";
    char s3[100]=",I will marry her someday.";
    strcat(s2,s3);
    for(int i=0;i<strlen(s2);i++)
    {
        printf("%c",s2[i]);
    }
    return 0;
}
