#include "lists.h"

/**
 * 
 * @head: pointer to the listint_t list to be freed.
 *free_listint2 - funtion that frees a linked list
 *
 **/
void free_listint2(listint_t **head)
{
    listint_t *temp;
    
    if (head == NULL)
        return;
    
    while (*head)
        
    {
        temp = (*head)->next;
        free(*head);
        *head = temp;
    }
    
    *head = NULL;
}
