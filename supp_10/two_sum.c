#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 20

int main()
{
    int price[SIZE];
    int i, k;
    
    srand( time(NULL) );
    
    for(i=0; i<SIZE; i++)
    {
        price[i] = rand();
        printf(" %d ", price[i]);
    }
    printf("\n");
    
    
    for(i=0; i<SIZE; i++)
        for(k=i+1; k<SIZE; k++)
            printf(" %d + %d = %d \n", price[i], price[k], price[i]+price[k]);
    
    
	return 0;
}

