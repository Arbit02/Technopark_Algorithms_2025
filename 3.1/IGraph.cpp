
#include "IGraph.h"

ostream &operator<<(ostream &os, const IGraph &graph) {
    os << "[";
    for (int from = 0; from < (int)graph.VerticesCount(); ++from) {
        for (int to : graph.GetNextVertices(from)) {
            os << from << " => " << to << ", ";
        }
    }
    if (graph.VerticesCount() > 0) {
        os << "\b\b";
    }
    os << "]";
    return os;
}