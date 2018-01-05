#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    struct carta
    {
        int valore;
        char seme[15];
    };
    struct carta luca={2,"picche"};
    printf("Hai pescato %i di %c", luca.valore, luca.seme);
    return 0;
}
