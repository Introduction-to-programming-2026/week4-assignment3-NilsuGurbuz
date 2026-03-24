/*
WEEK 1 — TASK 3 (Linear Search - Integers)

Goal:
Practice arrays and linear search.

Task:
1. Create an array of integers.
2. Ask the user for a number.
3. Search the array manually (no library search).
4. If found print:
Found
   Otherwise print:
Not found

Rules:
- You must use a loop.
- Do NOT use any built-in search function.
*/
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // 1. Define an array of integers
    int numbers[] = {20, 500, 10, 5, 100, 1, 50};

    // 2. Get user input
    int n = get_int("Number: ");

    // 3. Search for the number in the array (Linear Search)
    for (int i = 0; i < 7; i++)
    {
        if (numbers[i] == n)
        {
            // If the number is found, print "Found" and exit the program
            printf("Found\n");
            return 0;
        }
    }

    // 4. If the loop ends without finding the number, print "Not found"
    printf("Not found\n");
    return 1;
}