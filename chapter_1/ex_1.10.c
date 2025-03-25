#include <stdio.h>

/* ex 1-10. Write a program to copy its input to its output, replacing each tab by \t, each backspace by \b,
and each backslash by \\. This makes tabs and backspaces visible in an unambiguous way. */ 

int main(){
    int с;

    while((с = getchar()) != EOF){
        if (с == '\t'){
            printf("\\t");
        } else if (с == '\b'){
            printf("\\b");            
        } else if (с == '\\'){
            printf("\\\\");
        } else {
            putchar(с);
        }
    }

    return 0;
}