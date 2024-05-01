#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int x = get_int("x: ");
    int y = get_int("y: ");

    float z = (float) x / (float) y; // type casting: converting one type to another
    printf("%.5f\n", x / y); // %.5f means to round to 5 decimal places
}

// truncation: dividei int by int and if float, float gets thrown away
// floating point imprecision: can't represent all numbers when you have a finite number