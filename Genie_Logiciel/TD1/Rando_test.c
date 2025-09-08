#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <time.h>

int main(void) {
    // Test stdio.h
    printf("Testing stdio.h: Success!\n");

    // Test stdlib.h
    int *arr = malloc(5 * sizeof(int));
    if (arr) {
        printf("Testing stdlib.h (malloc): Success!\n");
        free(arr);
    } else {
        printf("Testing stdlib.h (malloc): Failed!\n");
    }

    // Test string.h
    char src[] = "Hello";
    char dest[10];
    strcpy(dest, src);
    if (strcmp(src, dest) == 0) {
        printf("Testing string.h: Success!\n");
    } else {
        printf("Testing string.h: Failed!\n");
    }

    // Test math.h
    double val = sqrt(16.0);
    if (val == 4.0) {
        printf("Testing math.h: Success!\n");
    } else {
        printf("Testing math.h: Failed!\n");
    }

    // Test ctype.h
    if (isalpha('A') && isdigit('1')) {
        printf("Testing ctype.h: Success!\n");
    } else {
        printf("Testing ctype.h: Failed!\n");
    }

    // Test time.h
    time_t now = time(NULL);
    if (now != (time_t)-1) {
        printf("Testing time.h: Success!\n");
    } else {
        printf("Testing time.h: Failed!\n");
    }

    return 0;
}