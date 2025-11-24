/*
 * Author: Sourav Chowdhury
 * GitHub: https://github.com/souravxdev
 * Date: 2025-11-24
 * Problem: 008 - Divisor (Codeforces)
 * Description: Print all positive divisors of N, each on a new line.
 */

#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    for (int i = 1; i <= N; i++)
    {
        if (N % i == 0)
        {
            printf("%d\n", i);
        }
    }
    
    return 0;
}