#include <stdio.h>

int summa (int, int);
void print_summa_result(int);

int main()
{
    int a=1;
    int b=-1;
    int res=summa(a,b);
    print_summa_result(res);



    /*if(res==-1)
    {
       printf("a and b are negative! Enter positive numbers!\n");}

    else
    {
    if(res==-2)
    {printf("a is negative! Enter a positive number!\n");}
    else
    {
        if(res==-3)
         printf("b is negative! Enter a positive number!\n");
        else

     printf("Summa=%i\n", res);
    }}*/

    return 0;
}

int summa (int a, int b)
{
    if (  (a<0)
       && (b<0))
        return -1;

    if (a<0)
        return -2;

    if (b<0)
        return -3;

    return a+b;
}

void print_summa_result(int value)
{
    if(value<0) {
        if (value==-1){
            printf("Both arguments are negative!\n");
            return;}

        if (value==-2)
            printf("The argument number 1 is negative!\n");

        if (value==-3)
            printf("The argument number 2 is negative!\n");

    }
    else
             printf("Summa=%i\n", value);
}

/*void func()// void func(void)
{

}

int main()
{
    //printf("Hello World!\n");

    func();
    func(1);
    func(2,3);
    func(4,5,6, "123123");

    return 0;
}*/

