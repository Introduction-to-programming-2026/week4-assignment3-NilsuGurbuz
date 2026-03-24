/*
WEEK 1 — TASK 2 (Recursion)

Goal:
Practice recursion.

Task:
1. Ask the user for a positive integer n.
2. Use a recursive function to print:

#
##
###
####

Rules:
- You must create a recursive function.
- You cannot use a loop to print rows.
- Base case must be correct.
*/
#include <cs50.h>
#include <stdio.h>

void draw_hashes(int n);
void draw_pyramid(int n);

int main(void)
{
    int height = get_int("Input: ");
    draw_pyramid(height);
}

void draw_hashes(int n)
{
    if (n <= 0)
    {
        return;
    }
    printf("#");
    draw_hashes(n - 1); 
}


void draw_pyramid(int n)
{
    if (n <= 0)
    {
        return;
    }

    draw_pyramid(n - 1); 

    draw_hashes(n);
    printf("\n");   
}