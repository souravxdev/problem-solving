/*
 * Author: Sourav Chowdhury
 * GitHub: https://github.com/souravxdev
 * Date: 2025-10-26
 * Problem: 004 - Divisible By 5 or Not (Phitron)
 * Description: Print numbers from `1` to `N`, and beside each number, print "Yes" if it is divisible by 5, or "No" otherwise.
 */

 #include<stdio.h>

int main(){
    int N;
    scanf("%d", &N);
    for (int i = 1; i <= N; i++){
        if(i % 5 == 0){
            printf("%d Yes\n", i);
        } else{
            printf("%d No\n", i);
        }
    }
    return 0;
}