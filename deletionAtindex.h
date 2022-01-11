#include "Node.h"

struct Node*deletionAtindex(struct Node*head, int index)
{
	struct Node*ptr = head;
	struct Node*q = head->next;
	for (int i = 0; i<index - 1; i++)
	{
		ptr = ptr->next;
		q = q->next;
	}
	ptr->next = q->next;
	free(q);
	return head;
}