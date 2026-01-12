#ifndef EMPRUNT_HPP
#define EMPRUNT_HPP    

#include <string>
#include "Date.h"

class Emprunt {
public:
    Emprunt(const Date& dateEmprunt, const std::string& isbnLivre, const std::string& idLecteur);
    
    const Date& dateEmprunt() const ;
    
    const std::string& isbnLivre() const ;

    const std::string& idLecteur() const ;

    void print() const;

private:
    Date dateEmprunt_;
    std::string isbnLivre_;
    std::string idLecteur_;
};  

#endif