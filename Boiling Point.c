#include<stdio.h>
int main()
{
    int x;
    printf("Enter boiling point in %c");
    scanf("%d",&x);


    if(x==100)
    {
        printf("The Substance is Water",x);

    }

    else if(x==357)
    {
        printf("The Substance is Mercury",x);

    }

    else if(x==1187)
    {
        printf("The Substance is Copper",x);

    }

    else if(x==2193)
    {
    printf("The Substance is Silver",x);

    }

    else if(x== 2660)
    {
    printf("The Substance is Gold",x);
    }

    else
    {
    printf("Substance Unknown");

    }
return 0;
}
