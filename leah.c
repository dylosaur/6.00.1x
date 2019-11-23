#include <stdio.h> // necessary header file for basically everything
#include <cs50.h> // optional header file just for compiling in CS50 IDE
#include <string.h> // optional header file used here just for comparing results

int countChar(char *pointer); // Prototype countChar() so you can define it after main()

int main(void)
{
    char *string = "string test";

    /*

    This is one way to make a pointer to a string, the other being:

        char string[] = "string test";
        char *ptr = string;

    My version assigns space for all of the characters (and the null character
    at the end) and then allocates 4 more bytes for a pointer to that address

    The above version allocates space for all of the characters and then auto-
    sets the variable name to the address of the first character in the string

    The difference between the first and second is that the first has a pointer
    pointing to an address which can be reassigned to other addresses like this:

        char *string = "string test";
        string = "second string";

    Trying to do the same with the char array version would not work.  Check out
    overiq.com/c-programming-101/character-array-and-character-pointer-in-c/

    */

    int length = countChar(string); // Declaring an int and initializing that value as the return value from countChar

    printf("Length of string: %i\n", length
    printf("Length of string: %ld\n", strlen(string)); // To compare results, I used strlen(), which does this automatically

    return 0;
}

int countChar(char *pointer) // Function definition for countChar().  Takes one argument (one char *) which the function refers to as "pointer"
{
    int index; // Setting loop variable outside of loop so we can return it later, otherwise it would be thrown away when the loop is done
    for (index = 0; pointer[index] != '\0'; index++);

    /*

    Steps this loop takes:

        1. Sets index to 0
        2. Checks that pointer[index] doesn't equal '\0'.  This is indexing into the string and checking the individual character (remember that strings end with '\0')
        3. Increments pointer by 1

    This loop ends when it finally detects that pointer[index] does equal '\0', i.e. when it runs out of letters.

    */

    return index; // index should now hold the length of the string (the total number of characters in the string)
}
