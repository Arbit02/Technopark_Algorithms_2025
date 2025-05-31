#include "SetGraph.h"

SetGraph::SetGraph(size_t verts) : st(verts) {}

SetGraph::SetGraph(const IGraph &graph) : st(graph.VerticesCount()) {
    for(int i = 0; i < st.size(); i++){
        for(auto j : graph.GetNextVertices(i)){
            st[i].insert(j);
        }
    }
}

void SetGraph::Add(int from, int to) {
    st[from].insert(to);
}

size_t SetGraph::VerticesCount() const {
    return st.size();
}

vector<int> SetGraph::GetNextVertices(int vert) const {
    vector<int>  nexts = vector<int> (st[vert].begin(), st[vert].end());
    return nexts;
}

vector<int> SetGraph::GetPrevVertices(int vert) const {
    vector<int> res;
    for(int i = 0; i < VerticesCount(); i++){
        if(st[i].find(vert) != st[i].end()){
            res.push_back(i);
        }
    }
    return res;
}