#include <stdio.h>

// exercise 1-8. Write a programm to count blanks, tabs and newlines

int main(){
    int c, nl = 0, blanks = 0, tabs = 0;

    while((c = getchar()) != EOF) {
    if (c == '\n')
        ++nl;
    if (c == '\t')
        ++tabs;
    if (c == ' ')
        ++blanks;  
    }
          

    printf("newlines == %d, blanks == %d, tabs == %d \n", nl, blanks, tabs);
    return 0;
}