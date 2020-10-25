struct Node {
    int value;
    struct Node *next;
};


struct Node * createList()
{
    struct Node *node = malloc(sizeof(struct Node));
    node->value = -1;
    node->next = NULL;
    return node;
}

struct Node * getTail(struct Node *head)
{
    struct Node *node = head;
    while (node->next)
        node = node->next;
    return node;
}

struct Node * addNode(struct Node *head, int value)
{
    if (head && head->value == -1 && head->next==NULL)
    {
        head->value = value;
    } else {
        struct Node *node = createList();
        node->value = value;
        if (head)
            getTail(head)->next = node;
    }
    return head;
}

struct Node * getNode(struct Node *head, int index)
{
    int i;
    struct Node *node = head;
    for (i = 0; i < index && node!=NULL; i++)
        node = node->next;
    return node;
}

void clearList(struct Node *head)
{
    struct Node *node, *temp;
    node = head;
    while (node!=NULL)
    {
        temp = node->next;
        free(node);
        node = temp;
    }
}

void printList(struct Node *head)
{
    int i;
    struct Node *temp;
    printf("[");
    for (i = 0; getNode(head, i)!=NULL; i++)
    {
        temp = getNode(head, i);
        printf("%d", temp->value);
        if (temp->next)
            printf(", ");
    }
    printf("]\n");
}

