#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

int main(int argc, char *argv[]) {
    // Example:
    //      The user enters an arbitrary number of values for elements in the 
    //      list. The resultant list is then displayed. This demonstrates the
    //      usefulness of dynamic list extension. (I think)
    struct Node *list = createList();
    printf("Enter elements for array; enter -1 to finish.\n");
    int input;
    while (1) {
        printf("> ");
        scanf("%d", &input);
        if (input == -1) 
            break;
        addNode(list, input);
    }
    printList(list);
    clearList(list); // Never forget to free memory!
	return 0;
}
