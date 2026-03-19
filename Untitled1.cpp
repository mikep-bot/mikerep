#include <iostream>
#include <conio.h>
#include <stdlib.h>

int g_num1 = 10;

int adder(int n1, int n2)
{
    int tmp = 50;
    tmp = n1 + n2;
    return tmp;
} // end of adder


int main(void){

    int *ptr1 = (int *)malloc(sizeof(int) * 2);

    ptr1[0] = 5;
    ptr1[1] = 100;

    int a = 5, b = 100;

    int *ptr2 = (int *)malloc(sizeof(int) * 2);

    ptr2[0] = a;
    ptr2[1] = b;

    free(ptr1);

    adder(a, b);

    free(ptr2);

    getch();
}