#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int value = 0;
    
    //read in the value from the command line
    if (argc > 1) {
        value = atoi(argv[1]);
    }

    //calculate the correct value with the offset of 1000 added
    //-tabnine next line-
    value += 1000;

    //print out the value
    printf("The correct value is %d\n", value);

    return 0;



}