#include "Node.h"

struct Node*deleteionSimple(struct Node*head)
{
	struct Node*ptr = head;
	head = head->next;
	free(ptr);
	return head;
}