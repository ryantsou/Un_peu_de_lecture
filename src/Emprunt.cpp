#include "Emprunt.h"
#include <iostream>

void Emprunt::print() const{
    std::cout << "Emprunt - date : ";
    dateEmprunt_.print();
    std::cout << "ISBN Livre : " << isbnLivre_ << std::endl;
    std::cout << "ID Lecteur : " << idLecteur_ << std::endl;
}
