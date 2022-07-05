#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Structure for dogs
 * @name: name
 * @age: age
 * @owner: owner
 * dog_t - typedef for struct dog
 * Description: this stuct is for dog
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
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /*DOG_H*/

