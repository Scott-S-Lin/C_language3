#include <stdio.h>

int main()
{
    unsigned int i;

    if( 0<=i && i<=9 )
        printf(" 1 digit number\n");
    else if( 10<=i && i<=99 )
        printf(" 2 digit number\n");
    else if( 100<=i && i<=999 )
        printf(" 3 digit number\n");


    if( 0<=i && i<10 )
        printf(" 1 digit number\n");
    else if( 9<i && i<100 )
        printf(" 2 digit number\n");
    else if( 99<i && i<1000 )
        printf(" 3 digit number\n");


    if( i<10 )
        printf(" 1 digit number\n");
    else if( i<100 )
        printf(" 2 digit number\n");
    else if( i<=999 )
        printf(" 3 digit number\n");


    if( i>=1000 )
        ;
    else if( i>=100 )
        printf(" 3 digit number\n");
    else if( i>=10 )
        printf(" 2 digit number\n");
    else
        printf(" 1 digit number\n");


    if(i<1000)
    {
        if(i<100)
        {
            if(i<10)
                printf(" 1 digit number\n");
            else
                printf(" 2 digit number\n");
        }
        else
            printf(" 3 digit number\n");
    }

    return 0;
}
