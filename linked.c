#include <stdio.h>
#include <stdlib.h>

struct Node {
	int value;
	struct Node *next;
};

struct Node * createNode() {
	struct Node *node = malloc(sizeof(struct Node));
	node->value = 0;
	node->next = NULL;
	return node;
}

void destroyList(struct Node *head) {
	struct Node *c, *n;
	do {
		n = c->next;
		free(c);
		c = n;
		} while (c != NULL);
}

struct Node * addNode(struct Node *head, int value){
	struct Node *temp, *p;
    temp = createNode();
    temp->value = value;
    if (head == NULL) {
        head = temp;
    } else {
        p = head;
        while (p->next != NULL) {
            p = p->next;
        }
        p->next = temp;
    }
	return head;
}

int getValueByIndex(struct Node *head, int index) {
	int i=0;
	struct Node *node = head;
	while (node->next != NULL) {
		if (i == index) { return node->value;}
		i++;
		node = node->next;
	}
	return -1; // Its not in there, oof
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

int main(int argc, char *argv[]) {
	struct Node *list = createNode();
	list->value = 0;
	for (int i=1; i<10; i++) { addNode(list, i*2); }

	printList(list);
	destroyList(list);
	return 0;
}
