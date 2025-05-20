// minimalMorph.cpp - Uses mlpack Decision Tree
#include <mlpack/core.hpp>
#include <mlpack/methods/decision_tree/decision_tree.hpp>
#include <armadillo>
#include <iostream>

using namespace mlpack;
using namespace mlpack::tree;
using namespace arma;

int main() {
    mat dataset;
    data::Load("iris.csv", dataset, true);
    Row<size_t> labels = conv_to<Row<size_t>>::from(dataset.row(dataset.n_rows-1));
    dataset.shed_row(dataset.n_rows-1);
    DecisionTree<> dt(dataset, labels, 3);
    std::cout << "DecisionTree trained on Iris dataset" << std::endl;
    return 0;
}
