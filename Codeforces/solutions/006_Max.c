/*
 * Author: Sourav Chowdhury
 * GitHub: https://github.com/souravxdev
 * Date: 2025-11-24
 * Problem: 006 - Max (Codeforces)
 * Description: Print the maximum number among the given inputs.
 */

#include <stdio.h>
#include <limits.h>

int main()
{
    int N, max = INT_MIN;
    scanf("%d", &N);

    for (int i = 1; i <= N; i++)
    {
        int X;
        scanf("%d", &X);
        if (X > max)
        {
            max = X;
        }
    }

    printf("%d", max);

    return 0;
}