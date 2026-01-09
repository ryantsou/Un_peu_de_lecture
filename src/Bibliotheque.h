#ifndef BIBLIOTHEQUE_HPP
#define BIBLIOTHEQUE_HPP

#include <vector>
#include <string>
#include "Livre.h"
#include "Lecteur.h"
#include "Emprunt.h"
#include "Auteur.h"

class Bibliotheque {
public:

    const std::vector<Livre>&   livres()   const {
        return livres_; 
    }
    const std::vector<Lecteur>& lecteurs() const { 
        return lecteurs_; 
    }
    const std::vector<Emprunt>& emprunts() const { 
        return emprunts_; 
    }
    const std::vector<Auteur>& auteurs() const { 
        return auteurs_; 
    }

    void ajouterLivre(const Livre& livre);
    void ajouterLecteur(const Lecteur& livre);
    void ajouterAuteur(const Auteur& livre);

    bool emprunterLivre(const std::string& idLecteur, const std::string& isbn, const Date& dateEmprunt);

    bool restituerLivre(const std::string& idLecteur, const std::string& isbn);

private:
    std::vector<Livre> livres_;
    std::vector<Lecteur> lecteurs_;
    std::vector<Auteur> auteurs_;
    std::vector<Emprunt> emprunts_;
};

#endif
