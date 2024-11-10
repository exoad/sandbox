# Trees

## Table of Contents

- [Trees](#trees)
   * [Overview ](#overview)
   * [Terminology](#terminology)
   * [Properties](#properties)
   * [Types of Trees](#types-of-trees)
   * [Relation to Graph Theory](#relation-to-graph-theory)
   * [References](#references)

## Overview 
Trees are the first type of non-linear data structure encountered often. In hindsight, they are a collection of nodes and edges. All of these are connected by a root node at the top of the tree:

<img src="https://upload.wikimedia.org/wikipedia/commons/thumb/5/5f/Tree_%28computer_science%29.svg/1200px-Tree_%28computer_science%29.svg.png" width=50% />

## Terminology

These words are very important to known in general when working with non-linear data structures like trees.

1. **Nodes**/Vertices
2. **Edges** - The connections between individual nodes
3. **Parent** - A node that is a immediate predecessor to another node
4. **Child** - A node that is a immediate descendent to another node (the parent)
5. **Root** - The topmost node of the Tree and does not have a parent node.
6. **Ancestor** - All nodes that precedes a node.  
7. **Depth/Level of a Node** - Refers to the number of edges from the root to that node; *level of the root node=0*
8. **Leaf** - Any nodes that do not have any children (also known as ***external nodes***)
9. **Branch/Path** - A path on the tree that spans from the root to a leaf
10. **Height** - The number of edges along the longest branch/path in the tree
11. **Subtree** - Any node that has its own descendants/children
12. **Height of a Node** - Refers to the number of edges from that node to the deepest leaf node
13. **Degree of a Node** - The amount of child nodes a node has.
14. **Internal Nodes** - All nodes that are not leaves (includes the root if the root is not a leaf itself)
15. **Empty Tree** - An empty tree is one without nodes (not even the root node).

## Properties

- Given a node with $N$ nodes, there will be $N-1$ edges
- All leaf nodes have a degree of $0$
- **[Tree Traversal](./Tree_Traversal.md)**

## Types of Trees

The trees family has multiple variations:

1. [Binary Trees](./Binary_Tree_DS.md)
2. Binary Search Trees (BST)
3. AVL Trees
4. k-d Trees
5. Segment Trees

## Relation to [Graph Theory](./Graph_Theory_P1.md)

In terms of graph theory, all trees are graphs, but not all graphs are trees.

## References

1. [https://sbme-tutorials.github.io/2020/data-structure-FALL/notes/week08.html](https://sbme-tutorials.github.io/2020/data-structure-FALL/notes/week08.html)
2. [https://adacomputerscience.org/concepts/struct_tree](https://adacomputerscience.org/concepts/struct_tree)
