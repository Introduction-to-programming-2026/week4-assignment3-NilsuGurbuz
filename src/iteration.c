/*
WEEK 1 — TASK 1 (Iteration)

Goal:
Practice loops and input validation.

Task:
1. Ask the user for a positive integer n.
2. If n < 1, ask again until valid.
3. Print a half-pyramid using # symbols.

Example:
Input: 4

Output:
#
##
###
####

Rules:
- You must use loops (for or while).
- No recursion allowed.
- Output must match exactly.
*/
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;
    do
    {
        n = get_int("Input: ");
    }
    while (n < 1);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}