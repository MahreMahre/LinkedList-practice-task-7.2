#include "Node.h"
#include "deleteionSimple.h"
#include "deletionAtindex.h"
#include "insertAtindex.h"
#include "linkedlisttraversal.h"


int main()
{
	struct Node*head = new Node;
	struct Node*second = new Node;
	struct Node*third = new Node;
	struct Node*last = new Node;
	head->data = 10;
	head->next = second;
	second->data = 12;
	second->next = third;
	third->data = 13;
	third->next = last;
	last->data = 14;
	last->next = head_ptr;
	head_ptr = head;
	cout << "Brefore the insertion:\n";
	linkListTraversal(head);
	cout << "After the Deletion:  \n";
	//head=deleteionSimple(head);
	//head=deletionAtindex(head,2);
	head = insertAtindex(head, 2, 15);
	linkListTraversal(head);
	return 0;
}