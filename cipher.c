#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>

int shift(char c);
int failure_message(string argument);

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        return failure_message(argv[0]);
    }
    for (int i = 0, n = strlen(argv[1]); i < n; i++)
    {
        if (!isalpha(argv[1][i]))
        {
            return failure_message(argv[0]);
        }
    }
    
    int key = shift(argv[1][0]);
    string plaintext = get_string("plaintext: ");
    
    for (int i = 0, n = strlen(plaintext); i < n; i++)
    {
        if (isupper(plaintext[i]))
        {
            plaintext[i] = (((plaintext[i] - 'A') + key) % 26) + 'A';
        }
        else if (islower(plaintext[i]))
        {
            plaintext[i] = (((plaintext[i] - 'a') + key) % 26) + 'a';
        }
    }
    
    printf("ciphertext: %s\n", plaintext);
    return 0;
}

int shift(char c)
{
    if isupper(c)
    {
        return c - 'A';
    }
    return c - 'a';
}

int failure_message(string argument)
{
    printf("Usage: %s key\n", argument);
    return 1;
}
