#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

int main(int argc, char *argv[]) {
	// first get the head node, this acts as the array
	struct Node *array = addNode(NULL, 21);
	// we can add more nodes
	addNode(array, 10);
	addNode(array, 42);
	// we can display the array...
	printArray(array);
	// ...and get value by index
	printf("[1] -> %d\n", getValue(array, 1));

	// important! array must be cleared from memory after use
	destroyArray(array);

	return 0;
}
