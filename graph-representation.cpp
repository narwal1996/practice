#include<bits/stdc++.h>

using namespace std;

struct adjList_node
{
    int vertex_index;     //Index of adjacency list array.
    adjList_node *next;     //Pointer to the next node.
    adjList_node(int v)
    {
        vertex_index = v;
        next = NULL;
    }
};

// Adjacency List
struct adjList
{
    int num_members;    //Number of members in the list.
    adjList_node *head;     //Head of Adjacency Linked List.
};

/* Graph structure. A graph is an array of adjacency lists.
   Size of array will be number of vertices in graph
*/
struct graph
{
    int n_vertices;     //Number of vertices - 'V'
    adjList *adjListArray;  //Adjacency Lists' array
};

//Function to create a graph with 'n' vertices.
graph *createGraph(int n)
{
    graph *G = new graph();
    G->n_vertices = n;

    //Create array of adjacency lists.
    G->adjListArray = new adjList[n];

    for(int i = 0; i < n; i++)
    {
        G->adjListArray[i].num_members = 0;
        G->adjListArray[i].head = NULL;
    }

    return G;
}

void addEdge(graph *G, int src, int des)
{

    // Add an edge from source to destination. A new node is adjacency list of src.
    // Node is added at the beginning.
    adjList_node *newNode = new adjList_node(des);
    newNode->next = G->adjListArray[src].head;
    G->adjListArray[src].head = newNode;
    G->adjListArray[src].num_members++;

    // Since graph is undirected, add an edge from des to src also.
    newNode = new adjList_node(src);
    newNode->next = G->adjListArray[des].head;
    G->adjListArray[des].head = newNode;
    G->adjListArray[des].num_members++;

}

void displayGraph(graph *G)
{

    for(int i = 0; i < G->n_vertices; i++)
    {
        adjList_node *temp  = G->adjListArray[i].head;
        cout << "Vertex " << i << endl << "head";
        while(temp)
        {
            cout << "-> " << temp->vertex_index;
            temp = temp->next;
        }
        cout << endl;
    }

}

int main()
{
    int V = 5;
    graph *G = createGraph(V);
    addEdge(G, 0, 1);
    addEdge(G, 0, 4);
    addEdge(G, 1, 2);
    addEdge(G, 1, 3);
    addEdge(G, 1, 4);
    addEdge(G, 2, 3);
    addEdge(G, 3, 4);
    displayGraph(G);
}
