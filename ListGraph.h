#ifndef ALGORITHMS_LISTGRAPH_H
#define ALGORITHMS_LISTGRAPH_H

#include "IGraph.h"

class ListGraph : public IGraph{
private:
    vector<vector<int>> verts;

public:
    explicit ListGraph(size_t);
    explicit ListGraph(const IGraph &);
    void Add(int, int) override;
    size_t VerticesCount() const override;
    vector<int> GetNextVertices(int) const override;
    vector<int> GetPrevVertices(int) const override;
};


#endif //ALGORITHMS_LISTGRAPH_H
