// earthSense.cpp - Uses FastText
#include <fasttext/fasttext.h>
#include <iostream>
#include <vector>
#include <string>

int main() {
    fasttext::FastText model;
    model.loadModel("cc.en.300.bin");
    std::vector<std::pair<fasttext::real, std::string>> predictions;
    model.predict("Natural language processing with FastText", 5, predictions);
    for (auto &p : predictions) {
        std::cout << p.second << ": " << p.first << std::endl;
    }
    return 0;
}
