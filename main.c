#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "main.h"

int main()
{
    int sign_bits = 0;
    int exp_bits = 0;
    int mantissa_bits = 0;
    printf("Please input the # of sign bits exp bits mantissa bits:\n");
    scanf("%d %d %d", &sign_bits, &exp_bits, &mantissa_bits);
    printf("Sign\tExp\tMantissa\n");
    printf("%d\t%d\t%d\n", sign_bits, exp_bits, mantissa_bits);
    printf("Max exp: %d\nMin exp: %d\n", max_exponent(exp_bits), min_exponent(exp_bits));
    printf("Machine Epsilon: \n");
    machine_epsilon(mantissa_bits);
    printf("Unit Round Off: \n");
    unit_round(mantissa_bits);
}

int max_exponent(int bits)
{
    return pow(2, bits - 1) - 1;
}

int min_exponent(int bits)
{
    return -1 * (pow(2, bits - 1) - 2);
}

void machine_epsilon(int bits)
{
    printf("  1   \n");
    printf("----- \n");
    printf(" %-4d\n", bits);
    printf("2\n");
}

void unit_round(int bits)
{
    machine_epsilon(bits - 1);
}
