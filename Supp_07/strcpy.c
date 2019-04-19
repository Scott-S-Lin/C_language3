#include <stdio.h>
#include <string.h>

/*void my_strcpy(char *to, char *from)
{
    int i;
    
    for(i=0; from[i]!='\0'; i++)
    {
        to[i] = from[i];
    }
        
    to[i] = '\0';
}*/

void my_strcpy(char *to, char *from)
{    
    for( ; (*to = *from); to++, from++)
        ;        
}

int main()
{
    char msg[100] = "This is a string.";
    char copy[100];
    
    //strcpy(copy, msg);    
    my_strcpy(copy, msg);    
       
    printf("%s\n", copy);
    
	return 0;
}

