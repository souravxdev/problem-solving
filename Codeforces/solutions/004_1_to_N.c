/*
 * Author: Sourav Chowdhury
 * GitHub: https://github.com/souravxdev
 * Date: 2025-11-24
 * Problem: 004 - 1 to N (Codeforces)
 * Description: Print N lines where each line contains one integer from 1 to N.
 */

#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    for (int i = 1; i <= N; i++)
    {
        printf("%d\n", i);
    }

    return 0;
}