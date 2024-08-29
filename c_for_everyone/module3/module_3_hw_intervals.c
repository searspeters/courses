/*
Homework Module 3
Aug 28, 2024
*/
#include<stdio.h>
#include<math.h> /* has  sin(), cos() */

int main(void){
    double interval = 0.05;
    
    printf("All values of sin(x), cos(x) with interval = %.2lf\n", interval);
    for(double i = 0; i<=1+interval; i+=interval){
        printf("x = %.2lf, sin(x) = %lf, cos(x) = %lf\n", i, sin(i), cos(i));
    }
    return 0;
}