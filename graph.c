#include "graph.h"
struct Node* createNode(int v, int w){
    struct Node* newNode = malloc(sizeof(struct Graph));
    newNode->vertex = v;
    newNode->weight = w;
    newNode->next = NULL;
    return newNode;
}


struct Graph* createGraph(int numVertices, bool isDirected){
    struct Graph* graph = malloc(sizeof(struct Graph));
    graph->numVertices = numVertices;
    graph->isDirected = isDirected;
    
    graph->adjList = malloc(numVertices * sizeof(struct Node*));

    for(int i = 0;i < numVertices; i++){
        graph->adjList[i] = NULL;
    }

    return graph;
}


void addEdge(Graph* graph, int src, int des, int w){
    struct Node* newNode = createNode(des,w);
    newNode->next = graph->adjList[src];

    graph->adjList[src] = newNode;
    if(!graph->isDirected){
        newNode = createNode(src,w);
        newNode->next =  graph->adjList[des];
        graph->adjList[des] = newNode;
    }

}

void printGraph(Graph* graph){
    for(int v = 0; v < graph->numVertices; v++){
        struct Node* temp = graph->adjList[v];
        printf("Vertex: [%d]", v);
        while(temp){
            printf("-%d->[%d]", temp->weight, temp->vertex);
            temp = temp->next;
        }
        printf("\n");
        
    }
}