# EXP-17-Linked-Lists


# Linked Lists in C++

## Aim
To study and implement **linked lists** in C++.

---

## Theory

### What is a Linked List?
In C++, a **linked list** is a linear data structure that allows storing data in **non-contiguous memory locations**.  
It consists of a collection of **nodes**, where each node contains:  
- **Data** → The actual value stored in the node.  
- **Next Pointer** → Stores the memory address of the next node (in singly linked list).  
- **Previous Pointer** → Stores the address of the previous node (only in doubly linked list).  

The **head** pointer points to the first node of the list. If the list is empty, `head = nullptr`.

---

### Types of Linked Lists
1. **Singly Linked List** → Each node points to the next node.  
2. **Doubly Linked List** → Each node points to both the next and previous node.  
3. **Circular Linked List** → Last node points back to the first node (singly or doubly).  

---

### Advantages of Linked Lists over Arrays
- Efficient insertion and deletion operations.  
- Useful for implementing **Queue** and **Deque**.  
- Can be **space-efficient** in certain scenarios.  
- Supports circular structures for continuous insertion/deletion.  

---

## Algorithms

### 1. Creating a Node
1. Define a class `Node` with:  
   - An integer `val` to store data.  
   - A pointer `next` initialized to `NULL`.  
2. In `main()`: Create a new node `n` with value `10`.  
3. Print the value of the node and its next pointer.  

---

### 2. Adding Nodes to a List
1. Define a class `Link` with:  
   - An integer `data`.  
   - A pointer `next` initialized to `NULL`.  
2. Define a function `insert_head(head, data)`:  
   - Create a new node with the given data.  
   - Set its `next` to point to the current head.  
   - Update `head` to point to the new node.  
3. Define a function `disp(head)`: Traverse the list from head to `NULL` and print each node's data.  
4. In `main()`: Initialize `head = NULL` and insert nodes with values `30, 32, 35`. Display the list after each insertion.  

---

### 3. Adding Nodes on the Left of a List
1. Define a class `Node` with an integer `val` and a pointer `next = NULL`.  
2. In `main()`:  
   - Create three nodes with values `10, 20, 30`.  
   - Link them manually: `n1 → n2 → n3 → NULL`.  
   - Traverse the list starting from `n1` and print each node's value until reaching `NULL`.  

---

## Conclusion
We learnt about **basic operations in linked lists**, including:  
- Node creation  
- Insertion at head  
- Manual linking of nodes  
- Traversal of the list  

Linked lists are fundamental data structures useful for **dynamic memory management** and flexible insertion/deletion operations.
