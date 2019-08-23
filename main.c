include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

int main(int argc, char *argv[]) {
	// first get the head node, this acts as the list
	struct Node *list = addNode(NULL, 21);
	// we can add more nodes
	addNode(list, 10);
	addNode(list, 42);
	// we can display the list...
	printList(list);
	// ...and get value by index
	printf("[1] -> %d\n", getValue(list, 1));

	// important! list must be cleared from memory after use
	destroyList(list);

	return 0;
}
