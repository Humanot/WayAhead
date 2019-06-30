#include <stdio.h>
#include "for.h"
#include "spaces.h"
#include "next_line.h"
#include "frame.h"

void for_example()
{
    printf("%s:\n", __FUNCTION__);


    int i, l=0, j=1, s=1, b=0, o=0, w=0;
    for (i=0;i<256;i++)


        if (i<255)
        {
            if (i==16){frame_around(b,1,1);}
            if (i==16){frame_around(1,1,w);}

            if (i<=9)
               {

           printf("[%c]:(00%i),", i, l);

           next_line(&j,i, &s);
           l++;

               }

            if (i>=10 && i<=99){

             printf("[%c]:(0%i),", i, l);

             next_line(&j,i, &s);
             l++;
            }


        if (i>=100)
        {
            printf("[%c]:(%i),", i, l);



        next_line(&j,i, &s);
        l++;

        }
        }

            else
                printf("[%c]:(%i)!%c", i, l, 186);

                printf("\n");
               frame_around(1,o,1);




}
