#include <stdio.h>

initialize main
{
    initialize user_in;
    declare and initialize min_in;
    declare and initialize max_in;
    declare and initialize total;
    declare and initialize num_count; // this can be an int
    
    do this loop at least once // do-while loops only need "do" at the top
    {
        printf(Asking the user for a number);
        scanf(Saving that number to user_in);
        if (user input is not zero) // if user input is zero we don't want any of these values overwritten
        {
            if (min_in has not been changed by user yet OR if user input is smaller than min_in)
            {
                change min_in to user input;
            }
            if (max_in has not been changed by user yet OR if user input is larger than max_in) // there are two if statements instead of if-elif because max and min both need to be set when only a single number is input
            {
                change max_in to user input;
            }
            increase total by the amount the user input;
            increase num_count by 1; // you only want this to happen when the user doesn't input 0
        }
    }
    while (user input is not zero); // this is the bottom of the do-while loop
    
    declare and initialize average; // there should be some math here
    printf(Printing max, min, and average with proper formatting) // tell me when you get this far
}

// in order to get this to run, include the header file <cs50.h>
// then type into the terminal "make file_name" where file_name is whatever the file is called without the .c
// if no errors pop up, the code was compiled without an issue
// to test it, type "./file_name" into the terminal
// you should probably delete the header file <cs50.h> before you turn it in
