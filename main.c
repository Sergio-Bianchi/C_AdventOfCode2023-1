#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {
    // Variables declaration
    FILE * fp;



    fp = fopen("input.txt","r");
    for(int i=0; i<10; i++){
        char * string;
        int stringSize;
        fscanf(fp,"%s\n",string);
        printf("%s\n", string);
        stringSize = strlen(string);

        int arraySlot = 0;
        for(int j = 0; j<stringSize; j++){
            int numbersFound[10];
            printf("%c ", string[j]);
            if(string[j] >= 48 & string[j] <=57) {
                int intChar = 47;
                numbersFound[arraySlot] = intChar;
                printf("%d ",numbersFound[j]);
                arraySlot++;

            }

        }
        printf("\n");



    }


    return 0;
}
