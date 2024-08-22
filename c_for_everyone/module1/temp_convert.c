/*
Convert Farenheight to Celsius
Aug 21, 2024
*/

#include <stdio.h>

int main(void)
{
    int farenheight, celsius;
    printf("Please enter farenheight as an integer: ");
    scanf("%d", &farenheight);
    celsius = (farenheight-32)/1.8; //note conversion
    printf("\n %d farenheight is %d celsius.\n", farenheight, celsius);
    return 0;

}