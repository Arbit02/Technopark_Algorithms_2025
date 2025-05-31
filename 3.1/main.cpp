#include <iostream>
#include "ArcGraph.h"
#include "ListGraph.h"
#include "MatrixGraph.h"
#include "SetGraph.h"

int main() {
    ListGraph list_graph(5);
    list_graph.Add(0, 1);
    list_graph.Add(1, 2);
    list_graph.Add(1, 3);
    list_graph.Add(3, 4);
    list_graph.Add(2, 4);
    cout << "List Graph: ";
    std::cout << list_graph << "\n";

    cout << "Arc Graph: ";
    ArcGraph arc_graph(list_graph);
    std::cout << arc_graph << "\n";

    cout << "Matrix Graph: ";
    MatrixGraph matrix_graph(arc_graph);
    std::cout << matrix_graph << "\n";

    cout << "Set Graph: ";
    SetGraph set_graph(matrix_graph);
    std::cout << set_graph << "\n";
    return 0;
}