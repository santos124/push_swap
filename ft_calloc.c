#include "push_swap.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*arr;

	arr = malloc(count * size);
	if (arr == NULL)
		return (arr);
	ft_bzero(arr, count * size);
	return (arr);
}
