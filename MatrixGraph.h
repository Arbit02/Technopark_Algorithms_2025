#ifndef ALGORITHMS_MATRIXGRAPH_H
#define ALGORITHMS_MATRIXGRAPH_H

#include "IGraph.h"

class MatrixGraph : public IGraph{
private:
    vector<bool> matrix;
    size_t vert_cnt;

public:
    explicit MatrixGraph(size_t);
    explicit MatrixGraph(const IGraph &);
    void Add(int, int) override;
    size_t VerticesCount() const override;
    vector<int> GetNextVertices(int) const override;
    vector<int> GetPrevVertices(int) const override;
};

#endif //ALGORITHMS_MATRIXGRAPH_H
