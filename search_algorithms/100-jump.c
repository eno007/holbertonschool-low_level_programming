#include "search_algos.h"
/**
 * jump_search - function that does jump search
 * @array: array to be searched 
 * @size: size of the array
 * @value: Value that we want to find
 * Return: index of the array if founded or -1 if not founded
 */
int jump_search(int *array, size_t size, int value)
{
	size_t next;
	size_t position;

	if (array == NULL || size == 0)
		return (-1);

	next = sqrt(size);
	position = 0;
	while (position < size + next)
	{
		if (array[position] >= value || position > size)
		{
			printf("Value found between indexes [%d] and [%d]\n",
			       (int)(position - next), (int)position);
			position = position - next;
			break;
		}
		else
		{
			printf("Value checked array[%d] = [%d]\n",
			       (int)position, array[position]);
			position = position + next;
		}
	}

	for (; position < size; position++)
	{
		printf("Value checked array[%d] = [%d]\n",
		       (int)position, array[position]);
		if (array[position] == value)
			return (position);
	}
	return (-1);
}
