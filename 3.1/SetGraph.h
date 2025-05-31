#ifndef ALGORITHMS_SETGRAPH_H
#define ALGORITHMS_SETGRAPH_H

#include "IGraph.h"
#include <unordered_set>

class SetGraph : public IGraph{
    vector<unordered_set<int>> st;

public:
    explicit SetGraph(size_t);
    explicit SetGraph(const IGraph &);
    void Add(int, int) override;
    size_t VerticesCount() const override;
    vector<int> GetNextVertices(int) const override;
    vector<int> GetPrevVertices(int) const override;
};

#endif //ALGORITHMS_SETGRAPH_H
