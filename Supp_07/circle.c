#include <stdio.h>

int main()
{
    int x, y;
    
    for(y=0; y<24; y++)
        for(x=0; x<80; x++)
        {
            if( (x-39)*(x-39) + (y-11)*(y-11) <= 8*8 )
                printf("*");
            else
                printf(" ");
                
            //Sleep(1);
        }

	return 0;
}

