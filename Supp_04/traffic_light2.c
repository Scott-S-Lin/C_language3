#include <unistd.h> //sleep()
#include <stdio.h>

int main()
{
    int light;
    int timer;

    light = 0;
    timer = 10;

    while(1){
        sleep(1);

        printf("%s %d\n", (light==0)?"RED":(light==1?"Green":"Yellow"), timer);
        if(--timer==0){
            light = (light+1)%3;
            timer = (light==0)?10:(light==1?7:3);
        }
    }

    return 0;
}
