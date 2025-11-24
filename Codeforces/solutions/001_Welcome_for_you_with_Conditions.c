/*
 * Author: Sourav Chowdhury
 * GitHub: https://github.com/souravxdev
 * Date: 2025-11-24
 * Problem: 001 - Welcome for you with Conditions (Codeforces)
 * Description: Print "Yes" if A is greater than or equal to B. Otherwise, print "No".
 */

#include <stdio.h>

int main()
{
    int A, B;
    scanf("%d %d", &A, &B);

    if (A >= B)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
    
    return 0;
}