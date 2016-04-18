#include <iostream>
#include "IGraph.h"
#include "CMatrixGraph.h"
#include "CListGraph.h"
#include "CArcGraph.h"
#include "CSetGraph.h"

using namespace std;

void make_transport_graph(CMatrixGraph* graph, CMatrixGraph*& graph_tr) {
    graph_tr = new CMatrixGraph(graph);
    for (int i = 0; i < graph->_vertex_count; ++i) {
        for (int j = graph->_vertex_count - 1; j > i; --j) {
            swap(graph_tr->_adjency_matrix[i][j], graph_tr->_adjency_matrix[j][i]);
        }
    }
}

int main() {
    int v, e;
    cin >> v >> e;
    CMatrixGraph* gr = new CMatrixGraph(v);
    int from, to;
    for (int i = 0; i < e; ++i) {
        cin >> from >> to;
        gr->AddEdge(from, to);
    }
    CMatrixGraph* gr_tr;
    make_transport_graph(gr, gr_tr);
    return 0;
}