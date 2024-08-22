/* 
Read in 3 floats and print sum
Aug 21, 2024
*/

#include <stdio.h>
int main(void)
{
    float a, b, c, sum;
    printf("Input three floats: ");
    scanf("%f%f%f", &a, &b, &c);
    printf("a = %f,\nb = %f,\nc = %f\n", a, b, c);
    sum = a + b + c;
    printf("sum = %f\n\n", sum);
    return 0;
}