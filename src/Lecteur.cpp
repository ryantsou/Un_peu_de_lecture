#include "Lecteur.h"
#include <iostream>

Lecteur::Lecteur(const std::string& id, const std::string& nom, const std::string& prenom)
        : id_(id), nom_(nom), prenom_(prenom) {}

    const std::string& Lecteur::id() const {
        return id_;
    }
    const std::string& Lecteur::nom() const {
        return nom_;
    }
    const std::string& Lecteur::prenom() const {
        return prenom_;
    }   
    void Lecteur::set_id(const std::string& id) {
        id_ = id;
    }
    void Lecteur::set_nom(const std::string& nom) {
        nom_ = nom;
    }
    void Lecteur::set_prenom(const std::string& prenom) {
        prenom_ = prenom;
    }   
    void Lecteur::ajouterEmprunt(const std :: string& isbn) {
        emprunts_.push_back(isbn);
    }   

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