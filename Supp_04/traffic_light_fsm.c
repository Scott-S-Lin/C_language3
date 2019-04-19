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

        switch(light)
        {
        case 0:
            printf("Red %d\n", timer);
            if(--timer==0){
                light = 1;
                timer = 7;
            }
            break;
        case 1:
            printf("Green %d\n", timer);
            if(--timer==0){
                light = 2;
                timer = 3;
            }
            break;
        case 2:
            printf("Yellow %d\n", timer);
            if(--timer==0){
                light = 0;
                timer = 10;
            }
            break;
        default:
            break;
        }
    }

    return 0;
}
