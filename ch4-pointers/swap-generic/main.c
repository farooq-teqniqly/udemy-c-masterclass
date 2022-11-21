#include <stdio.h>
#include <stdlib.h>
#include <memory.h>

#define EXIT_SUCCESS 0

void swap(void *a, void *b, size_t size);

void swapInts(int a, int b);

void swapDoubles(double a, double b);

void swapStrings(char* a, char* b);


int main() {

    swapInts(100, 200);
    swapDoubles(1.3333, 0.0001233);
    swapStrings("Hello my name is", "Farooq Mahmud");

    exit(EXIT_SUCCESS);
}

void swapInts(int a, int b) {
    printf("Ints before swap: (%d, %d)\n", a, b);

    swap(&a, &b, sizeof(int));

    printf("Ints after swap: (%d, %d)\n", a, b);
}

void swapDoubles(double a, double b) {
    printf("Floats before swap: (%f, %f)\n", a, b);

    swap(&a, &b, sizeof(float));

    printf("Floats after swap: (%f, %f)\n", a, b);
}

void swapStrings(char* a, char* b) {
    printf("Strings before swap: (%s, %s)\n", a, b);

    swap(&a, &b, sizeof(char*));

    printf("Strings after swap: (%s, %s)\n", a, b);
}

void swap(void *a, void *b, size_t size) {
    void *tmp = malloc(size);
    memcpy(tmp, a, size);
    memcpy(a, b, size);
    memcpy(b, tmp, size);
    free(tmp);
}
