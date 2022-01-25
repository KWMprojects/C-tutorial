#include <stdio.h>
#include <stdlib.h>

int main (){

    char characterName[] = "Tom";
    int characterAge = 29;

    printf("There once was a man named %s.\n", characterName);
    printf("He was %d years old.\n", characterAge);

    characterAge = 30;

    printf("It's %s's birthday today.\n", characterName);
    printf("Now, he is %d.", characterAge);

    return 0;

}