#include "Lecteur.h"
#include <iostream>

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