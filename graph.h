#ifndef GRAPH_H
#define GRAPH_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
typedef struct Edge{

} Edge;


typedef struct Node{
    int vertex;
    int weight; //define as weight of the edge next to it
    struct Node* next;
} Node;
typedef struct Graph{
    int numVertices;
    Node** adjList;
    bool isDirected;
} Graph;

Node* createNode(int v, int w);
Graph* createGraph(int numVertices, bool isDirected);
void addEdge(Graph* graph, int src, int des, int weight);
void freeGraph(Graph* graph);
void printGraph(Graph* graph);


#endif
