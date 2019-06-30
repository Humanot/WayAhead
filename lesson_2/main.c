#include <stdio.h>

int main()
{
    int i = 56;
    switch(i)
    {
#include "h_1.h"
#include "h_2.h"
    }

#include "c_1.c"
    printf("%i\n", a);
    return 0;
    }
/*
#include <stdio.h>

#include "lib_1.h"
#include "lib_2.h"


#define MAX(a,b) a > b
#define MIN(a,b) a <= b

int main()
{
int v1=100;
int v2=10;
int res=0;

res=MAX(v1,v2);
res=MIN(v1,v2);

printf("%i\n", MAX(v1,v2));
printf("%i\n", MIN(v1,v2));

print_i(10);
summa_print(2,3);
return 0;
}
*/

/*
//#define OS_WINDOWS
//#define OS_LINUX
//#include <math.h>
#define MY_SETTINGS_2
#define HELLO_STR "Hello World!"
#define MAX_SIZE_STR 50
#define MAX_SIZE_INT_ARRAY 50
#ifndef MYSETTING_2
#define MYSETTING_2
#endif

int main()
{
    //M_PI;
//#ifdef OS_WINDOWS
   //printf("Windows\n");
//#endif

#ifdef MY_SETTINGS_1
    printf("Settings 1\n");
    //load file_settings_1
#endif

#undef MY_SETTINGS_2

#ifdef MY_SETTINGS_2
    printf("Settings 2\n");
    //load file_settings_2
#endif

    //char byffer[MAX_SIZE_STR];
   //printf("%s\n", HELLO_STR);
  //{
  //  char buffer[MAX_SIZE_STR];
  // }
    return 0;
}
*/
