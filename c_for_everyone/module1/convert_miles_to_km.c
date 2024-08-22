/*
Convert miles to km
Aug 21, 2024
*/

#include <stdio.h>

int main(void)
{
    int miles, yards;
    double kilometers;
    printf("Please input miles followed by yards as integers.\n");
    scanf("%d%d", &miles, &yards);
    kilometers = 1.609 * (miles + yards / 1760.0);
    printf("\n%d miles and %d yards equals %lf kilometers.\n\n", miles, yards, kilometers);
    return 0;
}