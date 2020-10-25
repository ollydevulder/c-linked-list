# Linked List in C
[Linked list](https://en.wikipedia.org/wiki/Linked_list#Singly_linked_list "Wikipedia") implementation in C.

## Implementation
The only object used is `Node`. This represents an element of a list and provides a link to the next element.
Thus, it has 2 attributes: `value` and `next`.

When a new element is going to be appended to a list, the required space in
memory is allocated and the inital tail element's `next` points to the new
element. (This then becomes the new tail.)

## Setup
Literally just, 
```shell
gcc ./main.c -o main
```
and you are good to go!
