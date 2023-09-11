#ifndef DOG_H
#define DOG_H
/**
 *struct dog - This is the entry point of the code
 *@name: input 1
 *@age: input 2
 *@owner: input 3
 *Return:0 Success
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
