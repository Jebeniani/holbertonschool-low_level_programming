C - Singly linked lists

#When and why using linked lists vs arrays

=> Arrays allow random access and require less memory per element (do not need space for pointers) while lacking efficiency for insertion/deletion operations and memory allocation. On the contrary, linked lists are dynamic and have faster insertion/deletion time complexities.

#How to build and use linked lists

=>In C language, a linked list can be implemented using structure and pointers . struct LinkedList{ int data; struct LinkedList *next; }; The above definition is used to create every node in the list. The data field stores the element and the next is a pointer to store the address of the next node.

