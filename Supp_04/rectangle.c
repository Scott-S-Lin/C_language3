#include <stdio.h>

int main()
{
    int i, k;
    
    /*while( 1 )
    {
        printf("*");
        //Sleep(50);
    }*/
    
    /*i=0;
    while( i++ < 10 )
    {
        k=0;
        while( k++ < 70 )
		{
            printf("*");
    	}
        printf("\n");
    }*/

    for(i=0; i<5; i++)
        printf("\n");
    
    for(i=0; i<10; i++)
    {
        for(k=0; k<10; k++)
            printf(" ");
        
        for(k=0; k<40; k++)
        {
            printf("*");
        }
            
        printf("\n");
    }

	return 0;
}

