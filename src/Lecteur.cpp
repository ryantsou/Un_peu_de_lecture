#include "Lecteur.h"
#include <iostream>

/*
void Lecteur::print() const {
    std::cout << "ID : " << id_ << std::endl;
    std::cout << "Nom : " << nom_ << std::endl;
    std::cout << "Prénom : " << prenom_ << std::endl;
    std::cout << "Emprunts : [";
    for (std::size_t i = 0; i < emprunts_.size(); ++i) {
        std::cout << emprunts_[i];
        if (i != emprunts_.size() - 1) {
            std::cout << ", ";
        }
    }
    std::cout << "]" << std::endl;
}
*/

void Lecteur::print() const {

    std::cout << "Lecteur : " << prenom_ << " " << nom_ 
              << " (ID: " << id_ << ")" << std::endl;


    if (emprunts_.empty()) {
        std::cout << " Aucun livre emprunté " << std::endl;
    } else {
        std::cout << " Livres empruntés : " << std::endl;
        for (const auto& isbn : emprunts_) {
            std::cout << " - " << isbn << std::endl;
        }
    }
}