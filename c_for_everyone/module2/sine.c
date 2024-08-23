/*
Using the math.h library's sin() function find the sine of
a user-provided input between 0 and 1 (non-inclusive)
Date: Aug 22, 2024
*/

#include <stdio.h>
#include <math.h> // using math.h library briefly mentioned in the lecture

int main(void){
    double val = 0.0;

    printf("Please input a decimal number from 0-1 (non-inclusive): ");
    scanf("%lf", &val); // read in value
    printf("\nsin(%lf)=%lf\n\n", val, sin(val)); // print the original value and the sine of that value
    return 0;

}
