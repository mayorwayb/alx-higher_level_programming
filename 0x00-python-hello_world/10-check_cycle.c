#include "lists.h"

/**
 * check_cycle - check for loop in LL
 * @list: head of linked list
 *
 * Description - check for loops in LL
 * Return: 1 if cycled, 0 if not
 */

int check_cycle(listint_t *list)
{
	listint_t *red, *green;

	if (!list)
	{
		return (0);
	}
	red = list;
	green = list->next;
	while (green && red && green->next)
	{
		if (red == green)
		{
			return (1);
		}
		red = red->next;
		green = green->next->next;
	}
	return (0);
}
