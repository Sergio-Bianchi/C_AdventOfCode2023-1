#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {
    // Variables declaration
    FILE * fp;
    char string[50];
    int total = 0;


    char *sent = "sibfjblhsjr3";
    char *word = "six";

    char *pch = strstr(sent, word);

    if(pch) printf("%s\n", pch);



    // Open the file
    fp = fopen("input.txt","r");

    // For every line (I could edit to make it work with n lines)
    for(int i=0; i<1000; i++){
        // Variable declaration
        unsigned long stringSize;
        int arraySlot = 0;
        int numbersFound[20];

        // Scan the line string
        fscanf(fp,"%s\n",&string);
        stringSize = strlen(string);





        // For every character
        for(int j = 0; j<stringSize; j++){
            int intChar = string[j]; // Convert char to int (shortable)

            // Check if char is a number
            if(intChar >= 48 && intChar <=57) {

                // add the number to the numbers array
                numbersFound[arraySlot]  = intChar-48;
                arraySlot++; // Next array slot

            }

        }
        // Edit the total | -1 to the array 'cause it add 1 at the last iteration
        total = total + numbersFound[0]*10 + numbersFound[arraySlot-1];
    }

    printf("Total: %d", total);
    return 0;
}
