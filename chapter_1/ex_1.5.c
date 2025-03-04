#include <stdio.h>

int main()
{
    float fahr, celsius;
    int final, start, step;

    start = 300;
    final = 0;
    step = 20;

    fahr = start;
    printf("Fahr  Celsius\n");
    while (fahr >= final) {
        celsius = (5.0/9.0) * (fahr - 32.0);
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr = fahr - step;
    }

    return 0;
}