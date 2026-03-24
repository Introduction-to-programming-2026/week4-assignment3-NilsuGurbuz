/*
WEEK 1 — TASK 4 (Linear Search - Strings)

Goal:
Practice string comparison.

Task:
1. Create an array of strings (names).
2. Ask the user for a name.
3. Search the array.
4. Use strcmp() to compare strings.
5. Print:
Found
or
Not found

Rules:
- You must use strcmp().
- Do NOT use == for string comparison.
*/
#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    // 1. Define an array of strings (names)
    string names[] = {"Nilsu", "Ali", "Ayse", "Fatma", "Balkan"};

    // 2. Get user input for a name
    string name = get_string("Name: ");

    // 3. Search for the name in the array
    for (int i = 0; i < 5; i++)
    {
        // 4. Use strcmp() for string comparison
        // strcmp returns 0 if strings are identical
        if (strcmp(names[i], name) == 0)
        {
            printf("Found\n");
            return 0;
        }
    }

    // 5. If the loop ends without finding the name
    printf("Not found\n");
    return 1;
}