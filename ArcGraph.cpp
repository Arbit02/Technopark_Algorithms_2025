#include "ArcGraph.h"

ArcGraph::ArcGraph(size_t verts_cnt) : vert_cnt(verts_cnt){}

ArcGraph::ArcGraph(const IGraph &graph) : vert_cnt(graph.VerticesCount()) {
    for(int i = 0; i < vert_cnt; i++){
        for(auto j : graph.GetNextVertices(i)){
            edges.emplace_back(i,j);
        }
    }
}

void ArcGraph::Add(int from, int to) {
    edges.emplace_back(from,to);
}

size_t ArcGraph::VerticesCount() const {
    return vert_cnt;
}

vector<int> ArcGraph::GetNextVertices(int vertex) const {
    vector<int> res;
    for(const pair<int,int> &edge : edges){
        if(edge.first == vertex){
            res.push_back(edge.second);
        }
    }
    return res;
}


vector<int> ArcGraph::GetPrevVertices(int vertex) const {
    vector<int> res;
    for(const pair<int,int> &edge : edges){
        if(edge.second == vertex){
            res.push_back(edge.first);
        }
    }
    return res;
}


