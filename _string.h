#include <stdio.h>

int _strlen(char *name);
void _strreverse(char *name);

void _strreverse(char *name)
{
    int a, i = 0;
    do
    {
        a = getchar();
        name[i] = a;
        i++;
    } while (a != '\n');
    name[i - 1] = '\0';
    int size = _strlen(name);
    char w = '\0';
    for (i = 0; i < size / 2; i++)
    {
        w = name[i];
        name[i] = name[size - i - 1];
        name[size - i - 1] = w;
    }
}

int _strlen(char *name)
{
    int i, a;
    for (i = 0; name[i] != '\0'; i++)
    {
    }
    return i;
}