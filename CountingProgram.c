/*Create a counting program that prompts the user for 3 inputs (shown next) that determine how and what to count. 
Store the user’s answer in variables. 
Use the acquired data to build your counting program with a for loop and display the results to the user.

1. Beginning number to start counting from
2. Ending number to stop counting at
3. Increment Number

*/

#include <stdio.h>

int main (void) {

    int startNumber = 0;
    int endNumber = 0;
    int incrementNumber = 0;

    printf("Enter the starting number: \n");
    scanf("%d", &startNumber);

    printf("Enter the ending number: \n");
    scanf("%d", &endNumber);

    printf("Enter the increment number: \n");
    scanf("%d", &incrementNumber);

    printf("The starting number is %d\n", startNumber);
    printf("The ending number is %d\n", endNumber);
    printf("The increment number is %d\n", incrementNumber);
    printf("Counting program has initiated\n");

    if (startNumber > endNumber) {
    // For loop to iterate over the numbers
    for (int i = startNumber; i >= endNumber; i -= incrementNumber) {
        // Perform actions with the current number
        printf("%d\n", i);
    }
    }

    else if (startNumber < endNumber)
    {
    // For loop to iterate over the numbers
    for (int i = startNumber; i <= endNumber; i += incrementNumber) {
        // Perform actions with the current number
        printf("%d\n", i);
    }
    }

    else {
        printf("The starting number is equal to the ending number please try again\n");
    }

    return 0;
}