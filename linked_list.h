/* 
	This header contains:
		struct Node { value, next }
		createNode()
		destroyList( head )
		addNode( head, value )
		getValue( head, index )
		printList( head )

*/


struct Node {
	int value; 
	struct Node *next; // pointer to the next Node
};

struct Node * createNode() {
	struct Node *node = malloc(sizeof(struct Node)); // allocate mem for new Node
	node->value = 0; 
	node->next = NULL;
	return node;
}

void destroyList(struct Node *head) { // free the allocated memory for all Nodes in list
	struct Node *c, *n;
	c = head;
	do {
		n = c->next;
		free(c);
		c = n;
	} while (c != NULL);
}

struct Node * addNode(struct Node *head, int value){
	struct Node *temp, *p;
    temp = createNode(); // get pointer to new Node
    temp->value = value;
    if (head == NULL) { // empty list
        head = temp;
    } else {
        p = head;
        while (p->next != NULL) {
            p = p->next;
        } // get to end of list
        p->next = temp;
    }
	return head;
}

int getValue(struct Node *head, int index) { // serach through array and return index value
	int i=0;
	struct Node *node = head;
	while (node->next != NULL) {
		if (i == index) { return node->value;}
		i++;
		node = node->next;
	}
	return -1; // index is too great
}

void printList(struct Node *head) {
	struct Node *node;
	node = head;
	printf("[ ");
	while (node->next != NULL) {
		printf("%d, ", node->value);
		node = node->next;
	}
	printf("%d ]\n", node->value);
}
