#include <stdio.h>

// Exercise 1-9. Write a program to copy its input to its output, replacing each string of one or more blanks by a single blank

int main() {
    int c, previous = 0;

    while ((c = getchar()) != EOF) {
        if (!(previous == ' ' && c == ' ')) { 
            printf("%c", c);
        }
        previous = c; 
    }

    return 0;
}
