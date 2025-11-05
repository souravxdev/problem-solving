/*
 * Author: Sourav Chowdhury
 * GitHub: https://github.com/souravxdev
 * Date: 2025-10-26
 * Problem: 001 - Zero or Non Zero (Phitron)
 * Description: Print "Zero" if the number equals `0`, and "Non Zero" otherwise.
 */

#include <stdio.h>

int main(){
    int N;
    scanf("%d", &N);
    if (N == 0){
        printf("Zero");
    } else{
        printf("Non Zero");
    }
    return 0;
}