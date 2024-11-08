# Graph Theory: Part I "Basics"

## Overview

Graphs are a data structure defined by nodes/vertices and edges (ordered-pair) that connects two vertices $u$ and $v$.

![https://mathworld.wolfram.com/images/eps-svg/GraphNodesEdges_1000.png](https://mathworld.wolfram.com/images/eps-svg/GraphNodesEdges_1000.png)

## Terminology

### Adjacent Node/Neighbors

A node $u$ is considered *adjacent* to node $v$ if there exists an edge between $u$ and $v$.

#### Degree of a Node

Refers to how many connected adjacent nodes it has.

### Paths

This is the edges and nodes required to get from node $u$ to node $v$. 

#### Length

The length of a path is the number of edges covered.

#### Cycle

A path is considered a cycle if the starting node is also the ending node.

#### Simple Path

A path is considered simple if each node covered appears at most once in the path.

### Connectivity

#### Connected Graph

A graph is connected if there is a path between any two nodes.

#### Components

This refers to all parts of the graph that are connected.

### Directions

#### Undirected Graph

An undirected graph consists of edges **without** direction. Meaning given two nodes $u$ and $v$, you can go from $u\leftrightarrow v$.

![https://miro.medium.com/v2/resize:fit:722/1*sPE_2IKd6NhXZM2Qve5KKw.png](https://miro.medium.com/v2/resize:fit:722/1*sPE_2IKd6NhXZM2Qve5KKw.png)

#### Directed Graph

In contrast to an [undirected graph](#undirected-graph), edges are defined with direction. This means traversal along this path can only happen along **one** direction. This direction visually is represented with arrows on the edge.

<img src="https://www.researchgate.net/publication/258717783/figure/fig1/AS:669980123222022@1536747117225/A-simple-directed-graph.png" width=60% />

### Weighted Graph

#### Edge Weights

Usually marked above an edge that is often interpreted as a "cost" or "length" of that particular edge. Graphs with this characteristics are known as **weighted graphs.**

- This also redefines the length of a path as the sum of weights along a path
  - The shortest path will be the path with the smallest weights

### Regular Graph

If the degree of every node in the graph is constant.

### Complete Graph

If the degree of every node in the graph is ($number\ of\ nodes\ -1$)

> CPH: "...ie the graph contains all possible edges between the nodes."
