#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - Prints a struct dog.
 * @d: The struct dog to be printed.
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\nAge: %f\nOwner: %s\n",
		(*d).name != NULL ? d->name : "(nil)",
		(*d).age,
		(*d).owner != NULL ? d->owner : "(nil)");
	}
}
