#include <stdlib.h>

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
char ** fizzBuzz(int n, int* returnSize){
    char** arr = (char**)malloc(n * sizeof(char*));
    if(arr == NULL) {
        printf("error");
        exit(1);
    }
    int i;
    for(i = 1; i <= n; i++) {
        char str[9];
        if(i % 3 == 0 && i % 5 == 0)
            sprintf(str, "%s", "FizzBuzz");
        else if(i % 3 == 0)
            sprintf(str, "%s", "Fizz");
        else if(i % 5 == 0)
            sprintf(str, "%s", "Buzz");
        else
            sprintf(str, "%d", i);
        arr[i-1] = strdup(str);
    }
    *returnSize = n;
    
    return arr;
}