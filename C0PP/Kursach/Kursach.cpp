#include <iostream>
#include <iomanip>  
#include <Windows.h>

#include <algorithm>  
#include <numeric>  

#include <vector>
#include <map>  
#include <set>  

#define endl '\n'  

typedef long long ll;

using namespace std;

class AdjacencyMatrixGraph {
private:
    vector<vector<int>> matrix;
    int numVertices;

public:
    // Конструктор, инициализирующий граф с заданным количеством вершин
    AdjacencyMatrixGraph(int numVertices) : numVertices(numVertices) {
        matrix.resize(numVertices, vector<int>(numVertices, 0));
    }

    // Добавление ребра между вершинами v1 и v2 с весом weight
    void addEdge(int v1, int v2, int weight) {
        if (v1 >= 0 && v1 < numVertices && v2 >= 0 && v2 < numVertices) {
            matrix[v1][v2] = weight;
            matrix[v2][v1] = weight; // Для неориентированного графа
        }
        else {
            cerr << "Некорректные вершины!\n";
        }
    }

    // Удаление ребра между вершинами v1 и v2
    void removeEdge(int v1, int v2) {
        if (v1 >= 0 && v1 < numVertices && v2 >= 0 && v2 < numVertices) {
            matrix[v1][v2] = 0;
            matrix[v2][v1] = 0; // Для неориентированного графа
        }
        else {
            cerr << "Некорректные вершины!\n";
        }
    }

    // Получение веса ребра между вершинами v1 и v2
    int getWeight(int v1, int v2) const {
        if (v1 >= 0 && v1 < numVertices && v2 >= 0 && v2 < numVertices) {
            return matrix[v1][v2];
        }
        else {
            cerr << "Некорректные вершины!\n";
            return -1;
        }
    }

    // Вывод матрицы смежности на экран
    void printMatrix() const {
        for (int i = 0; i < numVertices; ++i) {
            for (int j = 0; j < numVertices; ++j) {
                cout << matrix[i][j] << " ";
            }
            cout << endl;
        }
    }
};


class IncidenceMatrixGraph {
private:
    vector<vector<int>> matrix;
    int numVertices;
    int numEdges;

public:
    // Конструктор, инициализирующий граф с заданным количеством вершин и ребер
    IncidenceMatrixGraph(int numVertices, int numEdges) : numVertices(numVertices), numEdges(numEdges) {
        matrix.resize(numVertices, vector<int>(numEdges, 0));
    }

    // Добавление ребра между вершинами v1 и v2 с номером edge
    void addEdge(int v1, int v2, int edge) {
        if (v1 >= 0 && v1 < numVertices && v2 >= 0 && v2 < numVertices && edge >= 0 && edge < numEdges) {
            matrix[v1][edge] = 1;
            matrix[v2][edge] = 1; // Для неориентированного графа
        }
        else {
            cerr << "Некорректные вершины, или ребро!\n";
        }
    }

    // Удаление ребра с номером edge
    void removeEdge(int edge) {
        if (edge >= 0 && edge < numEdges) {
            for (int i = 0; i < numVertices; ++i) {
                matrix[i][edge] = 0;
            }
        }
        else {
            cerr << "Некорректное ребро!\n";
        }
    }

    // Вывод матрицы инцидентности на экран
    void printMatrix() const {
        for (int i = 0; i < numVertices; ++i) {
            for (int j = 0; j < numEdges; ++j) {
                cout << matrix[i][j] << " ";
            }
            cout << endl;
        }
    }
};


void Solve() {

    AdjacencyMatrixGraph graph(5);
    
    graph.addEdge(0, 1, 1);
    graph.addEdge(0, 2, 1);
    graph.addEdge(1, 3, 1);
    graph.addEdge(2, 4, 1);
    graph.addEdge(3, 4, 1);

    cout << "Матрица смежности:\n";
    graph.printMatrix();
    IncidenceMatrixGraph graph2(5, 5);

    graph2.addEdge(0, 1, 1);
    graph2.addEdge(0, 2, 2);
    graph2.addEdge(1, 3, 3);
    graph2.addEdge(2, 4, 4);
    graph2.addEdge(3, 4, 5);

    cout << "Матрица инцидентности:\n";
    graph2.printMatrix();
    return;
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    ios_base::sync_with_stdio(0); cin.tie(0);
    cout << setprecision(20) << fixed;

    Solve();
    

}
