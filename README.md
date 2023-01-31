# Data Structures

A data structure is not only used for organizing the data. It is also used for processing, retrieving, and storing data. There are different basic and advanced types of data structures that are used in almost every program or software system that has been developed. So we must have good knowledge about data structures.
![205897043-e3883420-e4c2-426c-aac5-3932bd453e6f](https://user-images.githubusercontent.com/109382325/215787207-0f6771fe-7a53-4a85-8781-ae5230532aa6.png)


## Author

- [@ThisIs-Developer](https://github.com/ThisIs-Developer)

This repository contains C based examples of many popular algorithms and data structures.

## Data Structures

A data structure is a particular way of organizing and storing data in a computer so that it can
be accessed and modified efficiently. More precisely, a data structure is a collection of data
values, the relationships among them, and the functions or operations that can be applied to
the data.

- [Array](https://github.com/ThisIs-Developer/Data-Structure/tree/main/ARRAY)
- [Linked List](https://github.com/ThisIs-Developer/Data-Structure/tree/main/LINKED%20LIST)
- `A` [Singly Linklist](https://github.com/ThisIs-Developer/Data-Structure/blob/main/LINKED%20LIST/Implemention%20and%20deletion%20of%20singly%20linked%20list.c)
- `B` [Doubly Linked List](src/data-structures/doubly-linked-list)
- `C` [Circular Linklist](https://github.com/ThisIs-Developer/Data-Structure/tree/main/LINKED%20LIST)
- [Queue](https://github.com/ThisIs-Developer/Data-Structure/blob/main/LINKED%20LIST/Insert%20And%20Deletion%20Of%20Doubly%20Linked%20List.c)
- [Stack](https://github.com/ThisIs-Developer/Data-Structure/tree/main/STACK)
- [Queue](https://github.com/ThisIs-Developer/Data-Structure/tree/main/QUEUE)
- [Searches](https://github.com/ThisIs-Developer/Data-Structure/tree/main/SEARCHING%20TECHNIQUES)
- `A` [Binary Search](https://github.com/ThisIs-Developer/Data-Structure/blob/main/SEARCHING%20TECHNIQUES/Binary_Search.c)
- `B` [Linear Search/Sequential Search](https://github.com/ThisIs-Developer/Data-Structure/blob/main/SEARCHING%20TECHNIQUES/Linear_Search_Or_Sequential_Search.c)
- `C` [Interpolation Search](https://github.com/ThisIs-Developer/Data-Structure/blob/main/SEARCHING%20TECHNIQUES/Linear_Search_Or_Sequential_Search.c)
- [Sorting](https://github.com/ThisIs-Developer/Data-Structure/tree/main/SEARCHING%20TECHNIQUES)
- `A` [Bubble Sort](https://github.com/ThisIs-Developer/Data-Structure/tree/main/SORTING%20TECHNIQUES/BUBBLE%20SORT)
- `B` [Merge Sort](https://github.com/ThisIs-Developer/Data-Structure/tree/main/SORTING%20TECHNIQUES/MERGE%20SORT)
- `C` [Selection Sort](https://github.com/ThisIs-Developer/Data-Structure/tree/main/SORTING%20TECHNIQUES/SELECTION%20SORT)
- `D` [Insertion Sort](https://github.com/ThisIs-Developer/Data-Structure/tree/main/SORTING%20TECHNIQUES/INSERTION%20SORT)
- `E` [Quicksort](https://github.com/ThisIs-Developer/Data-Structure/tree/main/SORTING%20TECHNIQUES/QUICK%20SORT)
- [Graph](https://github.com/ThisIs-Developer/Data-Structure/tree/main/GRAPH)

## Algorithms

An algorithm is an unambiguous specification of how to solve a class of problems. It is a set of rules that precisely define a sequence of operations.

# Complexcity

### Big O Notation

_Big O notation_ is used to classify algorithms according to how their running time or space requirements grow as the input size grows.
On the chart below you may find most common orders of growth of algorithms specified in Big O notation.

![big-o-graph](https://user-images.githubusercontent.com/109382325/215787325-1a1cfc3d-d5f4-4888-b3ff-d5345aba2e6d.jpg)


Source: [Big O Cheat Sheet](http://bigocheatsheet.com/).

Below is the list of some of the most used Big O notations and their performance comparisons against different sizes of the input data.

| Big O Notation | Type        | Computations for 10 elements | Computations for 100 elements | Computations for 1000 elements |
| -------------- | ----------- | ---------------------------- | ----------------------------- | ------------------------------ |
| **O(1)**       | Constant    | 1                            | 1                             | 1                              |
| **O(log N)**   | Logarithmic | 3                            | 6                             | 9                              |
| **O(N)**       | Linear      | 10                           | 100                           | 1000                           |
| **O(N log N)** | n log(n)    | 30                           | 600                           | 9000                           |
| **O(N^2)**     | Quadratic   | 100                          | 10000                         | 1000000                        |
| **O(2^N)**     | Exponential | 1024                         | 1.26e+29                      | 1.07e+301                      |
| **O(N!)**      | Factorial   | 3628800                      | 9.3e+157                      | 4.02e+2567                     |

### Data Structure Operations Complexity

| Data Structure         | Access | Search | Insertion | Deletion | Comments                                             |
| ---------------------- | :----: | :----: | :-------: | :------: | :--------------------------------------------------- |
| **Array**              |   1    |   n    |     n     |    n     |                                                      |
| **Stack**              |   n    |   n    |     1     |    1     |                                                      |
| **Queue**              |   n    |   n    |     1     |    1     |                                                      |
| **Linked List**        |   n    |   n    |     1     |    n     |                                                      |
| **Hash Table**         |   -    |   n    |     n     |    n     | In case of perfect hash function costs would be O(1) |
| **Binary Search Tree** |   n    |   n    |     n     |    n     | In case of balanced tree costs would be O(log(n))    |
| **B-Tree**             | log(n) | log(n) |  log(n)   |  log(n)  |                                                      |
| **Red-Black Tree**     | log(n) | log(n) |  log(n)   |  log(n)  |                                                      |
| **AVL Tree**           | log(n) | log(n) |  log(n)   |  log(n)  |                                                      |
| **Bloom Filter**       |   -    |   1    |     1     |    -     | False positives are possible while searching         |

### Array Sorting Algorithms Complexity

| Name               |     Best      |         Average         |            Worst            | Memory | Stable | Comments                                                      |
| ------------------ | :-----------: | :---------------------: | :-------------------------: | :----: | :----: | :------------------------------------------------------------ |
| **Bubble sort**    |       n       |      n<sup>2</sup>      |        n<sup>2</sup>        |   1    |  Yes   |                                                               |
| **Insertion sort** |       n       |      n<sup>2</sup>      |        n<sup>2</sup>        |   1    |  Yes   |                                                               |
| **Selection sort** | n<sup>2</sup> |      n<sup>2</sup>      |        n<sup>2</sup>        |   1    |   No   |                                                               |
| **Heap sort**      | n&nbsp;log(n) |      n&nbsp;log(n)      |        n&nbsp;log(n)        |   1    |   No   |                                                               |
| **Merge sort**     | n&nbsp;log(n) |      n&nbsp;log(n)      |        n&nbsp;log(n)        |   n    |  Yes   |                                                               |
| **Quick sort**     | n&nbsp;log(n) |      n&nbsp;log(n)      |        n<sup>2</sup>        | log(n) |   No   | Quicksort is usually done in-place with O(log(n)) stack space |
| **Shell sort**     | n&nbsp;log(n) | depends on gap sequence | n&nbsp;(log(n))<sup>2</sup> |   1    |   No   |                                                               |
| **Counting sort**  |     n + r     |          n + r          |            n + r            | n + r  |  Yes   | r - biggest number in array                                   |
| **Radix sort**     |    n \* k     |         n \* k          |           n \* k            | n + k  |  Yes   | k - length of longest key                                     |
