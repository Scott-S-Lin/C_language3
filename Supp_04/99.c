#include <stdio.h>

int main()
{
    int i, n;
    
    for( n=2; n<=9; n++ )
    {
        for( i=1; i<=9; i++ )
            printf(" %d * %d = %d \n", n, i, n*i);
            
        printf("\n");
    }
        
	return 0;
}

