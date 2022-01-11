#include "Node.h"
struct Node*insertAtindex(struct Node*head, int index, int data)
{
	struct Node*ptr = new Node;
	struct Node*q = head;
	int i = 0;
	while (i != index - 1)
	{
		q = q->next;
		i++;
	}
	ptr->data = data;
	ptr->next = q->next;
	q->next = ptr;
	return head;
}
