#include "Livre.h"
#include <iostream>

void Livre::print() const {
    std::cout << "titre : " << titre_ << std::endl;
    std::cout << "auteur : " << auteur_ <<  std::endl;
    std::cout << "langue : " << langue_ <<  std::endl;
    std::cout << "genre : " << genre_ <<  std::endl;
    std::cout << "datePublication : ";
    datePublication_.print();
    std::cout << "isbn : " << isbn_ <<  std::endl;
    std::cout << "liste d'emprunteurs : [";
    for (std::size_t i = 0; i < emprunteurs_.size(); ++i) {
        std::cout << emprunteurs_[i];
        if (i != emprunteurs_.size() - 1) {
            std::cout << ", ";
        }
    }
    std::cout << "]" << std::endl;
}