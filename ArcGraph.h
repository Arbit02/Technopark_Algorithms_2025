#ifndef ALGORITHMS_ARCGRAPH_H
#define ALGORITHMS_ARCGRAPH_H



#include "IGraph.h"


class ArcGraph : public IGraph{
private:
    vector<pair<int,int>> edges;
    size_t vert_cnt;

public:
    explicit ArcGraph(size_t);
    explicit ArcGraph(const IGraph &);
    void Add(int, int);
    size_t VerticesCount() const override;
    vector<int> GetNextVertices(int) const override;
    vector<int> GetPrevVertices(int) const override;

};


#endif //ALGORITHMS_ARCGRAPH_H