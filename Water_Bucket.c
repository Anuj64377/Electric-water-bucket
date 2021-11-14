#include<stdio.h>
#include<stdlib.h>

int main()
{
    char ch, k;
    int tc, ta, temp1;
    int temp=100;
    printf("Select the Mode of Operation:\n 1.Manual \n 2.Automatic\n");
    printf("(Type 'm' for Manual or 'a' for Automatic)\n");
    printf("Your input : ");
    scanf("%c",&ch);

    if (ch=='m' || ch=='M')
    {
        printf("\nManual Mode is selected");
        printf("\nCurrent is change from 0 to 100\n");
        
        printf("For Clockwise, Type 'c'and type 'a' for anticlockwise : ");
        scanf("%c",&k);

        if (k=='c' || k=='C')
        {
            printf("Enter the Temperature : ");
            scanf("%d",&tc);
            printf("New Temperature : ");
            temp1=(temp+tc);
            printf("%d",temp1);
        }
        else if (k=='a' || k=='A')
        {
            printf("Enter the Temperature : ");
            scanf("%d",&ta);
            printf("New Temperature : ");
            temp1=(temp-tc);
            printf("%d",temp1);
        }
        else
        {
            exit(0);
        }

    }

    else if (ch=='a' || ch=='A')
    {
        printf("Automatic Mode is selected\n");
        printf("Temperature is automatically maintained");
    }

    else
    {
        printf("Wrong Input\n");
        printf("program is exit");
        exit(0);
    }

    return 0;
}