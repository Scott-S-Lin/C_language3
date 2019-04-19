#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int n, i;
    
    srand(time(0));
    
    i=0;
    while( i++ < 10 )
    {
        n = rand();
        printf(" %d", n);
    }
    
	return 0;
}

