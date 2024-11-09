#include <stdio.h>

int main()
{
    printf("Enter date (mm/dd/yy):");
    int dd,mm,yy;
    scanf("%d %d %d",&dd,&mm,&yy);
    printf("Dated this %d",dd);
    switch(dd)
    {
        case 1:
            printf("st");
            break;
        case 2:
            printf("nd");
            break;
        case 3:
            printf("rd");
            break;
        case 4: case 5: case 6: case 7: case 8: case 9: case 10: case 11: case 12: case 13: case 14: case 15: case 16: case 17: case 18: case 19: case 20:
            printf("th");
            break;
        case 21:
            printf("st");
            break;
        case 22:
            printf("nd");
            break;
        case 23:
            printf("rd");
            break;
        case 24: case 25: case 26: case 27: case 28: case 29: case 30:
            printf("th");
            break;
        case 31:
            printf("st");
            break;
        default:
            printf("Invalid Input");
            break;
    }

    return 0;
}
