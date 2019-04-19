#include <stdio.h>

int main()
{
    float a, b, c;
    char op;
    
    while(1)
    {    
        printf("Please select operator, 1.+, 2.-, 3.*, 4./ : ");
        scanf(" %c", &op);
        
        printf("\nPlease input two numbers: ");
        scanf("%f %f", &a, &b);
        
        //printf("\n op=%c, a=%f, b=%f \n", op, a, b);
            
        if(op=='+')
        {
            c = a + b;    
            printf(" %f + %f = %f \n", a, b, c);
        }
        else if(op=='-')
        {
        }
        else if(op=='*')
        {
        }
        else if(op=='/')
        {
        }
        else
        {
        }
    }
    
	return 0;
}

