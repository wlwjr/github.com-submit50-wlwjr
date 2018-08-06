// William L Wheeler Jr
// pset1/mario/less
// August 5, 2018
// Implement a program that prints out a half-pyramid of a height specified by user

#include <stdio.h>
#include <cs50.h>

int main(void)
{

    int height;
    int spaces;
    int hashes;
// Prompt and validate user input
    do
    {
       printf("To build a half-pyramid for Mario, provide a integer >0 and <=23\n");
       height = get_int("Height: ");
    }

    while (height < 0 || height > 23);

// Draw the half pyramid

    for (int row = 1; row <= height; row++)
    {
        // Print spaces
        for (spaces = height - row; spaces > 0; spaces--)
        {
            printf(" ");
        }
        // Print hashes
        for (hashes = 1; hashes <= row + 1; hashes++)
        {
            printf("#");
        }
        // Print new line
        printf("\n");
    }
}
