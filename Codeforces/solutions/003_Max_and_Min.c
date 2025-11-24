/*
 * Author: Sourav Chowdhury
 * GitHub: https://github.com/souravxdev
 * Date: 2025-11-24
 * Problem: 003 - Max and Min (Codeforces)
 * Description: Print the minimum and the maximum among the given numbers.
 */

#include<stdio.h>

int main(){

    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);

    int minimum = A;
    int maximum = A;

    if( B < minimum ){
        minimum = B;
    }
    if( C < minimum ){
       minimum = C;
    }

    if( B > maximum ){
        maximum = B;
    }
    if( C > maximum ){
        maximum = C;
    }

    printf("%d %d", minimum, maximum);

    return 0;
}