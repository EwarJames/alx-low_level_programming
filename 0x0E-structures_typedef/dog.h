#ifndef DOG_H
#define DOG_H

/**
 *struct dog - structure containing elements.
 *@name: First member.
 *@age: Second member.
 *@owner: Third member.
 *@d: structure pointer name.
 *
 *Description: Header file containing structure declarations.
 */

struct dog
{
char *name;
float age;
char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
