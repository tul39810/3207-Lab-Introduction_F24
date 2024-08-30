#include <stdio.h>
#include <stdlib.h>
#include "random.h"


char randchar() {

    
    char *alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int index = rand() % 26;
    return alphabet[index];
        
    
}
