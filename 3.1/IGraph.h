#ifndef ALGORITHMS_IGRAPH_H
#define ALGORITHMS_IGRAPH_H

#pragma once

using namespace std;
#include <vector>
#include <iostream>

struct IGraph {
    virtual ~IGraph() {}

    virtual void Add(int from, int to) = 0;

    virtual size_t VerticesCount() const  = 0;

    virtual vector<int> GetNextVertices(int vertex) const = 0;
    virtual vector<int> GetPrevVertices(int vertex) const = 0;
    friend ostream& operator<<(ostream& os, const IGraph& graph);
};


#endif //ALGORITHMS_IGRAPH_H
