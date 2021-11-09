# Red-Black Tree

> This project was made in order to help me in the rebuild of some containers (map, set) on my [ft_containers](https://github.com/tsannie/ft_containers) project.

![screen](https://i.imgur.com/sJURtb1.png)

## Properties

A red-black tree is a data structure. It respects some well defined rules so that all branches are balanced.

A red-black tree must respect the following rules:

1. Each node is either red or black.
2. All NULL nodes are considered black.
3. A red node does not have a red child.
4. Every path from a given node to any of its descendant NIL nodes goes through the same number of black nodes.

## Member functions

Methods    | Complexity    | Notes 
-----------|----------------|----------
insertNode | **O(log n)**   | Add a new node. The first parameter is the key and the second is the value to stock. 
deleteNode | **O(log n)**   | Delete a node. The parameter is the key to find to delete. 
printTree  |   **O(n)**     | Print all node (*key, color, parent, left, right, value*).

## Sources

- https://en.wikipedia.org/wiki/Red%E2%80%93black_tree (docs)
- http://ion.uwinnipeg.ca/~ychen2/advancedAD/Red-black%20Tree.pdf (algo)
- https://www.cs.usfca.edu/~galles/visualization/RedBlack.html (visualization)

## Author

* [@tsannie](https://github.com/tsannie)

[![forthebadge](https://forthebadge.com/images/badges/made-with-c-plus-plus.svg)](https://forthebadge.com)
