#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - Deletes the node at index of a dlistint_t list.
 * @head: Double pointer to the head of the list.
 * @index: Index of the node that should be deleted.
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
    dlistint_t *saved_head, *tmp;
    unsigned int i = 0;

    if (head == NULL || *head == NULL)
        return (-1);

    saved_head = *head;

    if (index == 0)
    {
        *head = (*head)->next;
        free(saved_head);
        if (*head != NULL)
            (*head)->prev = NULL;
        return (1);
    }

    while (*head != NULL && i < index)
    {
        *head = (*head)->next;
        i++;
    }

    if (*head == NULL)
    {
        *head = saved_head;
        return (-1);
    }

    (*head)->prev->next = (*head)->next;
    if ((*head)->next != NULL)
        (*head)->next->prev = (*head)->prev;

    tmp = *head;
    *head = saved_head;
    free(tmp);

    return (1);
}
