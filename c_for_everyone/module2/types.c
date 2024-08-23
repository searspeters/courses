/*
Learning about sizeof()
Aug 22, 2024
*/

#include <stdio.h>

int main(void)
{
    int a = 5, b = 7; // declare and initialize
    double average = 0.0; // good practice
    char ch = 'e';

    printf("on my system\n");
    printf("int is %lu bytes.\n", sizeof(int));
    printf("long int is %lu bytes.\n", sizeof(long int));
    printf("char is %lu bytes.\n", sizeof(char));
    printf("float is %lu bytes.\n", sizeof(float));
    printf("double is %lu bytes.\n", sizeof(double));
    printf("long double is %lu bytes.\n", sizeof(long double));

    char c = 'A';
    printf("c in ASCII is %d \n",c);
    printf("c the character is %c\n", c);
    printf("Three consecutive chars are : %c%c%c\n", c, c+1, c+2);
    printf("Three bell ring chars are : %c%c%c\n", '\a', '\a', '\a');

    printf("on my system\n");
    printf("int is %lu bytes.\n", sizeof(int));
    printf("short int is %lu bytes.\n", sizeof(short int));
    printf("long int is %lu bytes.\n", sizeof(long int));

}