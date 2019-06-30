#include <stdio.h>
#include "next_line.h"
#include "frame.h"

int next_line (int *j, int i, int *s)
{


    if (i>=16){

        if(*j==8)
        {
        frame_around(1,1,0);
        printf("\n");
        frame_around(1,1,0);


         *j=0;}

        if(*s==4)
        {
            printf("\t");
        }


        if(*s==8)
        {
         *s=0;
        (*s)++;
        }


        return (*j)++ && (*s)++;

    }



    else
    {
        if(*j==8){
            printf("\n");
            *j=0;}


            if(*s==4)
            {
                printf("\t");

            }

            if(*s==8)
            {
               *s=0;
               (*s)++;
            }

   return (*j)++ && (*s)++;
}

}
