#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* For Use on strings, No Value given needs memory allocation */
char name[20];

printf("Enter your name: ");
/*fgets will include \n*/
fgets(name, 20, stdin);
printf("Your name is %s", name);

return 0;
/* For use of a single Char or Int

    Scanf fx will only grab chars up to a space EX. John Smith will return John

    int age;
    printf("Enter your age: ");
    scanf("d", &age);
    printf("You are %d years old", age);

 */
}