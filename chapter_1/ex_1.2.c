#include <stdio.h>

// Exercise 1-2. Experiment to find out what happens when printf's argument string contains \c, where c is some character not listed above.

int main(){
    printf("hello world\y");

    return 0;
}

/* ex_1.2.c:4:12: warning: unknown escape sequence: '\y' */