#include <stdio.h>
#include "dog.h" 

 /**
   */

void print_dog(struct dog *d)
{
	if (d == NULL)
	return ;

	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";
	
	printf("%s\n%f\n%s\n", d->name, d->age, d->owner);
}
