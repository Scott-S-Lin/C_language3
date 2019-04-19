#include <stdio.h>

int main()
{
    int age;
    int city;
    int residency;

    if( age>=20 && city==5 && residency>=120 )
        printf("Yes, you can vote.\n");
    else
        printf("No, you can not vote.\n")


    if( age>=20 )
    {
        if( city==5 && residency>=120 )
            printf("Yes, you can vote.\n");
        else
            printf("No, you can not vote.\n");
    }
    else
        printf("No, you can not vote.\n");


    if( age>=20 )
    {
        if( city==5 )
        {
            if( residency>=120 )
                printf("Yes, you can vote.\n");
            else
                printf("No, you can not vote.\n");
        }
        else
            printf("No, you can not vote.\n");
    }
    else
        printf("No, you can not vote.\n");


    if( age<20 || city!=5 || residency<120 )
        printf("No, you can not vote.\n");
    else
        printf("Yes, you can vote.\n");


    if( ! (age>=20 && city==5 && residency>=120) )
        printf("No, you can not vote.\n");
    else
        printf("Yes, you can vote.\n");


    if( age<20 )
        printf("No, you can not vote.\n");
    else
    {
        if( city!=5 || residency<120 )
            printf("No, you can not vote.\n");
        else
            printf("Yes, you can vote.\n");
    }

    return 0;
}
