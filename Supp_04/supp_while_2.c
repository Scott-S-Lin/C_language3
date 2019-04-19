#include <stdio.h>

int main()
{
    int i, k;

    /*i=0;
    while( i++ < 5 )
        printf("*****\n");*/


    /*i=0;
    while( i++ < 5 )
    {
        k=0;
        while( k++ < 10 )
		{
            printf("*");
    	}
        printf("\n");
    }*/


    /*i=0;
    while( i < 5 )
    {
        k=0;
        while( k < 5 )
        {
            printf("*");
            k++;
        }
        printf("\n");
        i++;
    }*/


    /*i=5;
    while( i-- > 0 )
    {
        k=100;
        while( k++ < 105 )
            printf("*");
        printf("\n");
    }*/


    i=0;
    while( i++ < 5 )
    {
        k=0;
        while( k++ < i ){
            printf("*");
        }
        printf("\n");
    }


    return 0;
}
