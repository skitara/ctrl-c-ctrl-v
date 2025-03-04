#include <stdio.h>

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
