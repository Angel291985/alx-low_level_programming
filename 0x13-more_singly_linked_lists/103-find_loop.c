#include "lists.h"
/**
 * find_listint_loop - Finds the loop contained in
 * a listint_t linked list.
 * @head: A pointer to the head of the listint_t list.
 * Return: If there is no loop - NULL.
 * Otherwise - the address of the node where the loop starts.
 */
listint_t *find_listint_loop(listint_t *head)
{
listint_t *lion, *bear;
if (head == NULL || head->next == NULL)
return (NULL);
lion = head->next;
bear = (head->next)->next;
while (bear)
{
if (lion == bear)
{
lion = head;
while (lion != bear)
{
lion = lion->next;
bear = bear->next;
}
return (lion);
}
lion = lion->next;
bear = (bear->next)->next;
}
return (NULL);
}
