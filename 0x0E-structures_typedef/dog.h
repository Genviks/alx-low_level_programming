#ifndef DOG_H
#define DOG_H

/**
 * struct dog - the dog's basic info
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Description: This structure represents a dog, and contains its name, age
 * and owner's name.
 */

typedef struct dog

{
	char *name;
	float age;
	char *owner;

} dog_t;


void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif
