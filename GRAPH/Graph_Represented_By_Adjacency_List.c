//Implementation of graph by adjacency list
#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int info;
    struct node* link;
}Node1;
Node1* createNode(int);

typedef struct Graph {
    int numVertices;
    struct node** adjLists;
}Node2;

// Create a node
Node1* createNode(int value) {
    Node1 *newptr=NULL;
    newptr=(Node1*)malloc(sizeof(Node1));
    newptr->info=value;
    newptr->link=NULL;
    return newptr;
}

// Create a graph
Node2* createAGraph(int vertices) {
    Node2* graph;
    graph=(Node2*)malloc(sizeof(Node2));
    graph->numVertices = vertices;
    graph->adjLists = (Node1**)malloc(vertices * sizeof(Node1*));
    int i;
    for(i=0;i<vertices;i++){
      graph->adjLists[i]=NULL;
    }
    return graph;
}

// Add edge
void addEdge(Node2* graph, int s, int d) {
  // Add edge from s to d
    Node1* newNode = createNode(d);
    newNode->link = graph->adjLists[s];
    graph->adjLists[s] = newNode;

  // Add edge from d to s
    newNode = createNode(s);
    newNode->link = graph->adjLists[d];
    graph->adjLists[d] = newNode;
}

// Print the graph
void printGraph(struct Graph* graph) {
    int v;
    for (v = 0; v < graph->numVertices; v++) {
      struct node* temp = graph->adjLists[v];
      printf("\n Vertex %d:: ", v+1);
      while(temp) {
        printf("%d->", temp->info+1);
        temp = temp->link;
      }
      printf("NULL\n");
    }
}

int main() {
	int v,i,j;
	char choice;
	printf("Enter the no. of vertices: ");
	scanf("%d", &v);
    Node2* graph=createAGraph(v);
    for(i=0;i<v;i++){
        for(j=i;j<v;j++){
	        printf("Is there any edge between %d and %d ?",i+1,j+1);
	        scanf(" %c", &choice);
	        if(choice=='Y' || choice=='y'){
	            addEdge(graph, i, j);
	        }
	        else{
	            continue;
	        }
        }
    }
    printGraph(graph);

  return 0;
}
