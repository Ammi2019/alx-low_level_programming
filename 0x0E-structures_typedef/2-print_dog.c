#include <stdio.h>
#include "dog.h" 

 /**
   */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
	return ;
	}
	if (d->name && d->owner == ("nil"))
	{
		return ;
	}
	printf("%s\n%f\n%s\n", d->name, d->age, d->owner);
}
