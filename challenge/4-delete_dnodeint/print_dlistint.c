#include "lists.h"

/**
 * print_dlistint - prints all elements of a dlistint_t list
 * @h: pointer to the head of the list
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
    const dlistint_t *current;
    unsigned int n;

    current = h;
    n = 0;
    while (current != NULL)
    {
        printf("%d\n", current->n);
        current = current->next;
        n++;
    }
    return (n);
}
