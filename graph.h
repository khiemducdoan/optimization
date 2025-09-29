#ifndef GRAPH_H
#define GRAPH_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct Node{
    int vertex;
    struct Node* next;
} Node;
typedef struct Graph{
    int numVertices;
    Node** adjList;
    bool isDirected;
} Graph;

Node* createNode(int v);
Graph* createGraph(int numVertices, bool isDirected);
void addEdge(Graph* graph, int src, int des);
void freeGraph(Graph* graph);
void printGraph(Graph* graph);


#endif
