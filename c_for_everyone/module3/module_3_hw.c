/*
Homework Module 3 - User inputs a number between 0-1 and receives sine/cosine output
Aug 28, 2024
*/
#include<stdio.h>
#include<math.h> /* has  sin(), cos() */

int main(void){
    double n = -1;
    double interval = 0.1;
    printf("Please input a number between 0-1 (inclusive): ");
    scanf("%lf\n", &n);
    if ((n<=1) && (n>=0)){
        printf("sin(%lf) = %lf\n", n, sin(n));
        printf("cos(%lf) = %lf\n", n, cos(n));
    }
    else{
        printf("Invalid input. Please input a number between 0-1 (inclusive).\n");
    }
    


}