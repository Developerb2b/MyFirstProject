#include <stdio.h>
#include <stdlib.h>
#include "_string.h"

int main()
{
    char *name = (char *)malloc(200 * sizeof(char));

    printf("What's your string?\n");
    _strreverse(name);

    printf("Length of name is : %d\n", _strlen(name));

    printf("reverse name is : %s\n", name);
    
    return 0;
}