#include "Node.h"

void linkListTraversal(struct Node *ptr)
{
	while (ptr != NULL)
	{
		cout << "\nElement : \n" << ptr->data;
		ptr = ptr->next;
	}
}