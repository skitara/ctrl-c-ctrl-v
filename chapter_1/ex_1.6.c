#include <stdio.h>

// ex-1.6. Verify that the expression getchar() != EOF is 0 or 1

int main(){
    int c;

    while((c = getchar()) != EOF)
        printf("gcc ex_1.6.c -o ex.exe === %d\n", c = getchar() != EOF);
    return 0;
}