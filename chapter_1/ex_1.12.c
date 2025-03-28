#include <stdio.h>

// ex 1-12. 

#define IN 1  /* inside a word */
#define OUT 0 /* outside a word */

int main(){
    int c, state;
    state = OUT;

    while ((c = getchar()) != EOF){
        if (c == ' ' || c == '\n' || c == '\t'){
            if (state == IN){
                putchar('\n'); 
                state = OUT;
            } 
        } else {
            putchar(c);
            state = IN;
        }
    }
    return 0;
}