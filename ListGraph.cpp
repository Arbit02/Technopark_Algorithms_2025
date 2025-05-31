#include "ListGraph.h"

ListGraph ::ListGraph(size_t verts_cnt) : verts(verts_cnt)  {}

ListGraph::ListGraph(const IGraph &graph) : verts(graph.VerticesCount()){
    for(int i = 0; i < verts.size(); i++){
        verts[i] = graph.GetNextVertices(i);
    }
}

void ListGraph::Add(int from, int to) {
    verts[from].push_back(to);
}

size_t ListGraph::VerticesCount() const {
    return verts.size();
}

vector<int> ListGraph::GetNextVertices(int vert) const {
    return verts[vert];
}

vector<int> ListGraph::GetPrevVertices(int vert) const {
    vector<int> res;
    for(int i = 0; i < VerticesCount(); i++){
        for(auto j : verts[i]){
            if( j == vert){
                res.push_back(i);
            }
        }
    }
    return res;
}


