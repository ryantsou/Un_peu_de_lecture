#include "Emprunt.h"
#include <iostream>


Emprunt::Emprunt(const Date& dateEmprunt, const std::string& isbnLivre, const std::string& idLecteur)
        : dateEmprunt_(dateEmprunt), isbnLivre_(isbnLivre), idLecteur_(idLecteur) {}

const Date& Emprunt::dateEmprunt() const {
        return dateEmprunt_;
}

const std::string& Emprunt::isbnLivre() const {
        return isbnLivre_;
}

const std::string& Emprunt::idLecteur() const {
        return idLecteur_;
}

void Emprunt::print() const{
    std::cout << "Emprunt - date : ";
    dateEmprunt_.print();
    std::cout << "ISBN Livre : " << isbnLivre_ << std::endl;
    std::cout << "ID Lecteur : " << idLecteur_ << std::endl;
}
