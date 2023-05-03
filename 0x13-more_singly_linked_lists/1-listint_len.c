#include "lists.h"

/**
 * listint_len - returns the number of elements in a given linked lists
 * @h: linked list of type listint_t to get over.
 *
 * Return: number of nodes in our program
 **/
size_t listint_len(const listint_t *h)
{
    size_t num = 0;
    
    while (h)
        {
            num++;
            h = h->next;
        }
        
        return (num);
}
