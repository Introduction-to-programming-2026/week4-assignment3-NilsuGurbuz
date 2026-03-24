/*
WEEK 1 — TASK 5 (Structs - Phonebook)

Goal:
Practice structs and arrays.

Task:
1. Create a struct Person with:
   - string name
   - string phone
2. Create an array of persons (size 5 or 10).
3. Ask the user for a name.
4. If found, print the phone number.
5. If not found, print "Not found".

Bonus (optional):
Allow the user to add a new contact.

Rules:
- You must use struct.
- Use strcmp() to compare names.
*/
#include <cs50.h>
#include <stdio.h>
#include <string.h>

// 1. Define a struct for a Person
typedef struct
{
    string name;
    string phone;
}
person;

int main(void)
{
    // 2. Create an array of persons (size 5)
    person people[5];

    people[0].name = "Nilsu";
    people[0].phone = "+389 789 17 750";

    people[1].name = "Ali";
    people[1].phone = "+90-532-000-0000";

    people[2].name = "Ayse";
    people[2].phone = "+1-617-495-1000";

    people[3].name = "Fatma";
    people[3].phone = "+44-20-7946-0000";

    people[4].name = "Balkan";
    people[4].phone = "+389 783 45 888";

    // 3. Get user input for a name
    string name = get_string("Name: ");

    // 4. Search the array for the name
    for (int i = 0; i < 5; i++)
    {
        // Use strcmp to compare the input name with the struct's name
        if (strcmp(people[i].name, name) == 0)
        {
            // If found, print the phone number and exit
            printf("Found %s\n", people[i].phone);
            return 0;
        }
    }

    // 5. If the loop ends without finding the name
    printf("Not found\n");
    return 1;
}