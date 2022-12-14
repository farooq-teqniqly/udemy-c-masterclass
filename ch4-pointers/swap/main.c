#include <stdio.h>
#include <stdlib.h>

#define EXIT_ERROR (-1)
#define EXIT_SUCCESS 0

int parseArg(char *arg, int *dest);

void swap(int *n1, int *n2);


int main(int argc, char **argv) {
    if (argc != 3) {
        fprintf(stderr, "USAGE: %s [number 1] [number 2]", argv[0]);
        exit(EXIT_ERROR);
    }

    int n1, n2;


    if (parseArg(argv[1], &n1) != 0) {
        fprintf(stderr, "Arguments must be numbers.");
        exit(EXIT_ERROR);
    }

    if (parseArg(argv[2], &n2) != 0) {
        fprintf(stderr, "Arguments must be numbers.");
        exit(EXIT_ERROR);
    }

    printf("Numbers before swap: (%d, %d)\n", n1, n2);

    swap(&n1, &n2);

    printf("Numbers after swap: (%d, %d)\n", n1, n2);

    exit(EXIT_SUCCESS);
}

int parseArg(char *arg, int *dest) {
    char *err;
    *dest = strtol(arg, &err, 10);

    if (*err) {
        return -1;
    }

    return 0;
}

void swap(int *n1, int *n2) {
    int tmp = *n1;
    *n1 = *n2;
    *n2 = tmp;
}
