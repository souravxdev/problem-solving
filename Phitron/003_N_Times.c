/*
 * Author: Sourav Chowdhury
 * GitHub: https://github.com/souravxdev
 * Date: 2025-10-26
 * Problem: 003 - N Times (Phitron)
 * Description: Beed to print **"I Love Practice"** exactly `N` times.
 */

#include <stdio.h>

int main(){
    int N;
    scanf("%d", &N);
    for (int i = 1; i <= N; i++){
        printf("I Love Practice\n");
    }
    return 0;
}