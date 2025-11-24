/*
 * Author: Sourav Chowdhury
 * GitHub: https://github.com/souravxdev
 * Date: 2025-11-24
 * Problem: 007 - Multiplication table (Codeforces)
 * Description: Print the multiplication table of N from 1 to 12.
 */

#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    for (int i = 1; i <= 12; i++)
    {
        printf("%d * %d = %d\n", N, i, N * i);
    }
    
    return 0;
}