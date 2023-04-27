#include "main.h"

/**
 * free_ptr - frees pointer
 * @ptr: specified pointer
 *
 * Return:1 if successful
 */
int free_ptr(void **ptr)
{
	if (ptr && *ptr)
	{
		free(*ptr);
		*ptr = NULL;
		return (1);
	}
	return (0);
}
