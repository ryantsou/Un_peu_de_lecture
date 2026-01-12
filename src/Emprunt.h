#ifndef EMPRUNT_HPP
#define EMPRUNT_HPP    

#include <string>
#include "Date.h"

class Emprunt {
public:
    Emprunt() = default;
    Emprunt(const Date& dateEmprunt, const std::string& isbnLivre, const std::string& idLecteur)
        : dateEmprunt_(dateEmprunt), isbnLivre_(isbnLivre), idLecteur_(idLecteur) {}
    const Date& dateEmprunt() const {
        return dateEmprunt_;
    }
    const std::string& isbnLivre() const {
        return isbnLivre_;
    }
    const std::string& idLecteur() const {
        return idLecteur_;
    }

    void print() const;

private:
    Date dateEmprunt_;
    std::string isbnLivre_;
    std::string idLecteur_;
};  

#endif