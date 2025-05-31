#include "MatrixGraph.h"

MatrixGraph ::MatrixGraph(size_t verts) : vert_cnt(verts), matrix(verts * verts)  {}

MatrixGraph::MatrixGraph(const IGraph &graph) : vert_cnt(graph.VerticesCount()), matrix(graph.VerticesCount() * graph.VerticesCount()) {
    for(int i = 0; i < vert_cnt; i++){
        for(auto j : graph.GetNextVertices(i)){
            matrix[i * vert_cnt + j] = true;
        }
    }
}

void MatrixGraph::Add(int from, int to) {
    matrix[from * VerticesCount() + to] = true;
}

size_t MatrixGraph::VerticesCount() const {
    return vert_cnt;
}

vector<int> MatrixGraph::GetNextVertices(int vert) const {
    vector<int> res;
    for(int i = 0; i < VerticesCount(); i++){
        if(matrix[vert * VerticesCount() + i]){
            res.push_back(i);
        }
    }
    return res;
}

vector<int> MatrixGraph::GetPrevVertices(int vert) const {
    vector<int> res;
    for (int i = 0; i < VerticesCount(); i++) {
        if (matrix[i * VerticesCount() + vert]) {
            res.push_back(i);
        }
    }
    return res;
}