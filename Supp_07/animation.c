#include <stdio.h>

char screen[24][80];

void print_screen()
{
    int y, x;
    
    system("cls");
    
    for(y=0; y<24; y++)
        for(x=0; x<80; x++)
            printf("%c", screen[y][x]);
}

void circle(int h, int k, int r)
{
    int x, y;
    
    for(y=0; y<24; y++)
        for(x=0; x<80; x++)
        {
            if( (x-h)*(x-h) + (y-k)*(y-k) <= r*r )
                screen[y][x] = '*';
            else
                screen[y][x] = ' ';
        }
}

int main()
{
    int x;
    
    for(x=20; x<60; x++)
    {
        circle(x, 11, 4);    
        print_screen();
    }

	return 0;
}

