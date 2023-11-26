#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;
    ptr = malloc(5 * sizeof(int)); // Removed unnecessary type cast

    if (ptr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    ptr[0] = 3;
    ptr[1] = 2;
    ptr[2] = 8;
    ptr[3] = 6;
    ptr[4] = 5;

    for (int i = 0; i < 5; i++) {
        printf("%d\n", ptr[i]);
    }

    free(ptr);
    
    return 0;
}
