#include <stdio.h>

int main()
{
    int sum=0;
    int i;
    
    /*i=1;
    while ( i <= 100 )
    {
        if( i%5 == 0 )
            sum += i; 
        
        i++;
    }*/
    
    i=5;
    while ( i <= 100 )
    {
        sum += i; 
        i += 5;
    }

    printf("sum = %d \n", sum);    
    
	return 0;
}

