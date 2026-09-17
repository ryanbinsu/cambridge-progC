#include <stdio.h>
#include <string.h>
#include "lecture2.h"

int main(void) {
    // Question 1:
    // char s[] = "Count me";
    // printf("%d\n", cntlower(s));
    // return 0;

    int arr[] = { 12, 11, 13, 5, 6, 7 };
    int arr_size = sizeof(arr) / sizeof(arr[0]);

    mergeSort(arr, 0, arr_size - 1);

    printf("%d\n", arr[1]);
    return 0;
}