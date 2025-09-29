#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include "graph.h"

int main(){
    struct Graph* directedGraph = createGraph(3, 0);

    addEdge(undirectedGraph, 0, 1);
    addEdge(undirectedGraph, 0, 2);
    addEdge(undirectedGraph, 1, 2);

    printf("Adjacecncy List for Undirected Graph:\n");
    printGraph(undirectedGraph);

    struct Graph* directedGraph = createGraph(3, 1);

    addEdge(directedGraph, 1, 0);
    addEdge(directedGraph, 1, 2);
    addEdge(directedGraph, 2, 0);

    printf("\nAdjacecncy List for Directed Graph:\n");
    printGraph(directedGraph);

    return 0;
}