#include <stdio.h>
#include <stdlib.h>
#include "_string.h"




int main()
{
    char *name = (char *)malloc(200 * sizeof(char));
    printf("What's your string?\n");
    int size = _strlen(name);
    _strreverse(name);
    printf("Length of name is %d\n", size);

    printf("reverse name is %s\n", name);
    return 0;
}

