#include<iostream>


using namespace std;


struct Node
{
	int data;
	struct Node*next;
	struct Node*head_ptr = NULL;
	//simple insertion


}; 
struct Node*head_ptr = NULL;
void linkListTraversal(struct Node *ptr);
// simple deletion
struct Node*deleteionSimple(struct Node*head);
//deletion at Given index
struct Node*deletionAtindex(struct Node*head, int index);
//insertion at Given index
struct Node*insertAtindex(struct Node*head, int index, int data);





