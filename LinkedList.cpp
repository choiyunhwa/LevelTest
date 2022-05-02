#include <iostream>

/*typedef struct NODE
{
	int data;
	struct NODE *next;
}node;

int main()
{
	node *head = (node *)malloc(sizeof(node));

	head->next = NULL;

	node *node1 = (node *)malloc(sizeof(node));
	node1->data = 2;
	node1->next = head->next;
	head->next = node1;

	node *node2 = (node *)malloc(sizeof(node));
	node2->data = 3;
	node2->next = head->next;
	head->next = node2;

	node *curr = head->next;
	while (curr != NULL)
	{
		std::cout << curr->data << std::endl;
		curr = curr->next;
	}

	free(head);
	free(node1);
	free(node2);

}*/