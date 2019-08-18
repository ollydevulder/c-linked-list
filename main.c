#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

int main(int argc, char *argv[]) {
	struct Node *list = createNode(); // create head Node
	list->value = 0; // set the value of [0] to 0

	for (int i=1; i<11; i++) {
		addNode(list, i*2); // add 10 more Nodes
	}

	printList(list); // print the array

	destroyList(list); // clear memory

	return 0;
}
