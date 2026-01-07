#include <stdlib.h>
#include "dog.h"

/**
 * _strcpy - copies src string into dest
 * @dest: destination buffer
 * @src: source string
 */
void _strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to new dog, NULL on failure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	int len_name = 0, len_owner = 0;

	if (name == NULL || owner == NULL)
		return (NULL);

	/* dog struct üçün yaddaş */
	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	/* name üçün uzunluq və yaddaş */
	while (name[len_name] != '\0')
		len_name++;
	d->name = malloc(len_name + 1);
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}
	_strcpy(d->name, name);

	/* owner üçün uzunluq və yaddaş */
	while (owner[len_owner] != '\0')
		len_owner++;
	d->owner = malloc(len_owner + 1);
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}
	_strcpy(d->owner, owner);

	d->age = age;

	return (d);
}
