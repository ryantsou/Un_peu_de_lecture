#include "Auteur.h"
#include <iostream>

void Auteur::print() const {
    std::cout << "ID : " << id_ << std::endl;
    std::cout << "Nom : " << nom_ << std::endl;
    std::cout << "Prénom : " << prenom_ << std::endl;
}