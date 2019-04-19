#include <unistd.h> //sleep()
#include <stdio.h>

int main()
{
    int i;

    while(1){
        for(i=10; i>0; i--){
            sleep(1);
            printf("Red %d\n", i);
        }

        for(i=7; i>0; i--){
            sleep(1);
            printf("Green %d\n", i);
        }

        for(i=3; i>0; i--){
            sleep(1);
            printf("Yellow %d\n", i);
        }
    }

    return 0;
}
