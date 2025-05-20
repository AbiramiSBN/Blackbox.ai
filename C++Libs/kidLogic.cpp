// kidLogic.cpp - Uses MITIE
#include <mitie/nlp.h>
#include <iostream>

int main() {
    mitie::ner ner("MITIE-models/english/ner_model.dat");
    std::string sentence = "MITIE is a C++ NLP library.";
    mitie::named_entity_detection::raw_text rawText;
    rawText.set_text(sentence);
    auto entities = ner.extract_entities(rawText);
    std::cout << "Entities found: " << entities.size() << std::endl;
    return 0;
}
