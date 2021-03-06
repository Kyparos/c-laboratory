//
// Created by nam62 on 03.02.2020.
//
#include <stdio.h>
#include <math.h>
#include "../helpers/Helpers.h"

void CalculatePrismArea() {
    double area;

    double a = DoubleInputWithValidating("Input a:", Positive),
            b = DoubleInputWithValidating("Input b:", Positive),
            h = DoubleInputWithValidating("Input h:", Positive);

    area = a * b + ((a + b + sqrt(a*a + b*b)) * h);
    printf("Result:\n%.2f\n", area);
}

void CalculateParallelogramArea() {
    double a = DoubleInputWithValidating("Input a:", Positive),
            h = DoubleInputWithValidating("Input h:", Positive);
    printf("Result:\n%.2f\n", a * h);
}