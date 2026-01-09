#include "Livre.h"
#include <iostream>
/*
void Livre::print() const {
    std::cout << "titre : " << titre_ << std::endl;
    std::cout << "auteur : " << auteur_.getNom() << std::endl;
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
    */


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
