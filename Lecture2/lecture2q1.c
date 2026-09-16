#include <stdio.h>
#include <string.h>
#include "lecture2.h"

int cntlower(char str[]){
    int i;
    int lowercnt = 0;

    while (str[i] != '\0')
    {
        if ((int)str[i] > 96 && ((int)str[i] < 123))
        {
            lowercnt++;
        }
        i++;
    }
    return lowercnt;
}