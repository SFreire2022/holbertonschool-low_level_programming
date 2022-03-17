#ifndef _LISTS_
#define _LISTS_

/* Standard libraries */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Custom lib definitions */

/**
 * struct list_s - singly linked list
 * Description: singly linked list node structure
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

/* func prot for task 0 */
size_t print_list(const list_t *h);
/* func prot for task 1 */
size_t list_len(const list_t *h);
/* func prot for task 2 */
list_t *add_node(list_t **head, const char *str);
/*func prot for task 3*/
list_t *add_node_end(list_t **head, const char *str);
/* func prot for task 4 */
void free_list(list_t *head);

#endif
