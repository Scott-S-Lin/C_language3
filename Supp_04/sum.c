#include <stdio.h>

int main()
{
    int sum=0;
    int i;
    
    /*sum += 1;
    sum += 2;
    sum += 3;
    sum += 4;
    
    sum += 100;  */ 
    
    i=1;
    while ( i <= 10000 )
    {
        sum += i; 
        i++;
    }

    printf("sum = %d \n", sum);    
    
	return 0;
}

