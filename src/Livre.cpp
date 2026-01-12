#include "Livre.h"
#include <iostream>

void Livre::print() const {
    std::cout << "Titre : " << titre_ << std::endl;
    std::cout << "Auteur : " << auteur_.getPrenom() << " " << auteur_.getNom() << std::endl;
    std::cout << "Langue : " << langue_ << std::endl;
    std::cout << "Genre : " << genre_ << std::endl;
    std::cout << "Date de Publication : ";
    datePublication_.print();
    std::cout << "ISBN : " << isbn_ << std::endl;   
    if (emprunteurs_.empty()) {
        std::cout << " Aucun emprunteur " << std::endl;
    } else {
        std::cout << " Emprunteurs : " << std::endl;
        for (const auto& id : emprunteurs_) {
            std::cout << " - " << id << std::endl;
        }
    }
}
