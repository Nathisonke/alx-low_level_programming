#include "lists.h"

/**
 * 
 * @head: first node in the linked list
 *sum_listint - is the func that calculates the sum of all the data in a listint_t list.
 *
 * Return: resulting sum
 **/
int sum_listint(listint_t *head)
{
    int sum = 0;
    listint_t *temp = head;
    
    while (temp)
        {
            sum += temp->n;
            temp = temp->next;
        }
    return (sum);
}
