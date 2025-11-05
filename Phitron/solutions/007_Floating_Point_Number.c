/*
 * Author: Sourav Chowdhury
 * GitHub: https://github.com/souravxdev
 * Date: 2025-11-06
 * Problem: 007 - Floating Point Number (Phitron)
 * Description: Take a floating point number `x` and print `X` upto 3 decimal points.
 */

#include<stdio.h>

int main(){

    float x;
    scanf("%f", &x);
    printf("%.3f", x);
    return 0;
}