#include <stdio.h>
#include <stdlib.h>


int main() 
{
    /* Cannot handle a name like Cher */
    char color[20];
    char pluralNoun[20];
    char celebrityF[20];
    char celebrityL[20];

    printf("Enter a color: ");
    scanf("%s", color);
    printf("Enter a plural nour: ");
    scanf("%s", pluralNoun);
    printf("Enter a celbrity: ");
    scanf("%s%s", celebrityF, celebrityL);

    printf("Roses are %s\n", color);
    printf("%s are blue\n", pluralNoun);
    printf("I love %s %s", celebrityF, celebrityL);

    return 0;
}