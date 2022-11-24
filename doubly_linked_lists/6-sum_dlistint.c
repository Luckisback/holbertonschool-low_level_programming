#include "lists.h"
/**
 * sum_dlistint - a function that returns the sum
 * @head: the lists head
 * Return: the sum of all data in a list
 **/
int sum_dlistint(dlistint_t *head)
{
	int Sum;

	Sum = 0;

	if (head == NULL)
		return (0);
	while (head)
	{
		if (head == NULL)
			return (0);

		Sum = Sum + head->n;
		head = head->next;
	}
	return (Sum);
}
