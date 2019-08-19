# Linked List in C
I challenged myself to make a [Singly Linked List](https://en.wikipedia.org/wiki/Linked_list#Singly_linked_list "Wikipedia") in C.
## Code
The main object is the `Node`. It contains an integer value and a pointer to the next `Node`.
```c
struct Node {
	int value;
	struct Node *next;
};
```
The `createNode()` function allocates space in memory for a new `Node` and returns a pointer to it.
```c
struct Node *myNode = createNode();
// myNode->value = 0
// myNode->next = NULL
```
The `addNode(head, value)` function can be used to get a `*Node` and give set its value. Then, as the name implies, it can add more Nodes to the list.
```c
struct Node *myList = addNode(NULL, 42);
addNode(myList, 14);
addNode(myList, 67);
// [42, 14, 67]
```
When done with the list, call `destroyList(head)` to free the memory allocated for the whole list.
```c
destroyList(myList);
```

