#ifndef GRAPH_H_ADDED
#define GRAPH_H_ADDED

#include <vector>

#include "heap.h"

using namespace std;

typedef struct node {
    int id;
    int flag;

    int num_edges;
    struct node *edges; //dest nodes
    double *weights; //respective weights
} node;

node* make_sample_graph(int sz);
node make_new_node(int id, int flag, int sz);
void make_new_edge(vector<node> *all_nodes, int i, int j, double weight);
double* shortest_paths(vector<node> *all_nodes, int source, int sz);
void destroy_graph(vector<node> *gw);

#endif
