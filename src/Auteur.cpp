#include "Auteur.h"
#include <iostream>

    Auteur::Auteur(const std::string& id, const std::string& nom, const std::string& prenom)
        : id_(id), nom_(nom), prenom_(prenom) {}

    const std::string& Auteur::id() const {
        return id_;
    }

    const std::string& Auteur::nom() const {
        return nom_;
    }

    const std::string& Auteur::prenom() const {
        return prenom_;
    }

    void Auteur::set_id(const std::string& id) {
        id_ = id;
    }

    void Auteur::set_nom(const std::string& nom) {
        nom_ = nom;
    }

    void Auteur::set_prenom(const std::string& prenom) {
        prenom_ = prenom;
    }

    const std::string& Auteur::getNom() const {
        return nom_;
    }
    const std::string& Auteur::getPrenom() const {
        return prenom_;
    }

    void Auteur::print() const {
        std::cout << "Auteur : " << prenom_ << " " << nom_ << " (ID: " << id_ << ")" << std::endl;
    }