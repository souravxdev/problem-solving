/*
 * Author: Sourav Chowdhury
 * GitHub: https://github.com/souravxdev
 * Date: 2025-11-24
 * Problem: 002 - Multiples (Codeforces)
 * Description: Print "Multiples" if A is a multiple of B or B is a multiple of A. Otherwise, print "No Multiples".
 */

#include <stdio.h>

int main()
{
    int A, B;
    scanf("%d %d", &A, &B);

    if (A % B == 0 || B % A == 0)
    {
        printf("Multiples");
    }
    else
    {
        printf("No Multiples");
    }
    
    return 0;
}