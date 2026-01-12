#include "Auteur.h"
#include <iostream>


void Auteur::print() const {
    std::cout << "Auteur : " << prenom_ << " " << nom_ << " (ID: " << id_ << ")" << std::endl;
}