// forestBrain.cpp - Uses mlpack Random Forest
#include <mlpack/core.hpp>
#include <mlpack/methods/random_forest/random_forest.hpp>
#include <armadillo>
#include <iostream>

using namespace mlpack;
using namespace mlpack::ensemble;
using namespace arma;

int main() {
    mat data;
    data::Load("wine.csv", data, true);
    Row<size_t> labels = conv_to<Row<size_t>>::from(data.row(data.n_rows-1));
    data.shed_row(data.n_rows-1);
    RandomForest<> rf(data, labels, 3, 10);
    std::cout << "RandomForest trained on Wine dataset" << std::endl;
    return 0;
}
