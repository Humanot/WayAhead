#include <stdio.h>
#include "do_while.h"

void do_while_example()
{
    printf("%s:", __FUNCTION__);
    int i=0;
    do
    {
        if (i<9)//bool maybe
        printf("%i,", i);
        else
        printf("%i", i);

        i++;

    }while(i<10);
    printf("\n");

    //printf("line = %i, file = %s, function = %s\n",__LINE__,__FILE__,__FUNCTION__);

}
