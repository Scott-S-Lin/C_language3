#include <stdio.h>

int main()
{
    int n = 19;
    int i;
    int isPrime;
    
    for(n=2; n<=1000; n++)
    {
        isPrime = 1;
        for( i=2; i<n; i++ )
            if( n % i == 0 )
            {
                isPrime = 0;
                break;
            }
        
        if(isPrime==1)
            printf(" %d ", n);
    }
    
	return 0;
}

