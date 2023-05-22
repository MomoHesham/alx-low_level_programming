#ifndef HEADER_FILE
#define HEADER_FILE

/**
 * struct dog - structure
 * @name: first member
 * @age: second member
 * @owner: third member
 */

typedef struct dog
{

	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
