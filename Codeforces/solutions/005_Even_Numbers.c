/*
 * Author: Sourav Chowdhury
 * GitHub: https://github.com/souravxdev
 * Date: 2025-11-24
 * Problem: 005 - Even Numbers (Codeforces)
 * Description: Print all even numbers between 1 and N inclusive.
 */

#include <stdio.h>

int main()
{
    int N, noEvenFound = 0;
    scanf("%d", &N);

    for (int i = 1; i <= N; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d\n", i);
            noEvenFound = 1;
        }
    }
    if (noEvenFound == 0)
    {
        printf("-1");
    }

    return 0;
}