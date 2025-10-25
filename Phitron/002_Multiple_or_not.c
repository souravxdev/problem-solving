/*
 * Author: Sourav Chowdhury
 * GitHub: https://github.com/souravxdev
 * Date: 2025-10-26
 * Problem: 002 - Multiple or not (Phitron)
 * Description: Determine whether one number is a multiple of the other and vice versa.
 */

#include <stdio.h>

int main(){
    int a, b;
    scanf("%d %d", &a, &b);

    if (a % b == 0 || b % a == 0){
        printf("Yes");
    } else{
        printf("No");
    }
    return 0;
}