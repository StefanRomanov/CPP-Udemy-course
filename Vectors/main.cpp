#include <iostream>
#include <vector>

using std::vector;

void printIntMatrix(const vector<vector<int>>& matrix){
    for (const vector<int>& v : matrix) {
        for (int i : v) {
            std::cout << i << std::endl;
        }
    }
}

void printIntVector(const vector <int>& vector){
    for (int i : vector) {
        std::cout << i << std::endl;
    }
}

int main() {
    vector <int> vector1;
    vector <int> vector2;

    vector1.push_back(10);
    vector1.push_back(20);

    printIntVector(vector1);
    std::cout << vector1.size() << std::endl;

    vector2.push_back(100);
    vector2.push_back(200);

    printIntVector(vector2);
    std::cout << vector2.size() << std::endl;

    vector <vector<int>> vector_2d;

    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);

    printIntMatrix(vector_2d);

    vector1.at(0) = 1000;

    printIntMatrix(vector_2d);

    printIntVector(vector1);

    return 0;
}

