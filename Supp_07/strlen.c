#include <stdio.h>
#include <string.h>

/*int my_strlen(char *str)
{
    int i;
    
    for(i=0; str[i]!='\0'; i++)
        ;
    
    return i;
}*/

int my_strlen(char *str)
{
    int i;
    
    for( i=0; *str!='\0'; str++, i++)
        ;
    
    return i;
}

int main()
{
    char msg[100] = "This is a string.";
    int ret;
    
    //ret = strlen(msg);    
    ret = my_strlen(msg);
    
    printf(" %d ", ret);
    
	return 0;
}

