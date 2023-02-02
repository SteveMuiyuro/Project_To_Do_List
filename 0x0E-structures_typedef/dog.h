#ifndef DOG_H
#define DOG_H

/**
  *struct dog -struct of a dog
  *@age: age of the dog
  *@owner: pointer to the dog's owner
  *@name: pointer to the dog's name
  *Description - struct of a dog
  */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /*DOG_H*/
