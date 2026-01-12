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

    const std::vector<Livre>& livres() const;
    
    const std::vector<Lecteur>& lecteurs() const;
    
    const std::vector<Emprunt>& emprunts() const;

    const std::vector<Auteur>& auteurs() const;

    void ajouterLivre(const Livre& livre);
    
    void ajouterLecteur(const Lecteur& livre);
    
    void ajouterAuteur(const Auteur& livre);

    bool emprunterLivre(const std::string& idLecteur, const std::string& isbn, const Date& dateEmprunt);

    bool restituerLivre(const std::string& idLecteur, const std::string& isbn);

 //recherche livre par auteur
    std::vector<Livre> rechercherLivresParAuteur(const std::string& nomAuteur) const;

//livre emprunté et calcul pourcentage par rapport au total
    std::vector<Livre> getLivresEmpruntes() const;
    double getPourcentageLivresEmpruntes() const;

//livre enprunter par un lecteur
    std::vector<Livre> getLivresEmpruntesParLecteur(const std::string& idLecteur) const;

//classement des lecteurs
    std::vector<std::pair<Lecteur,int>> classementLecteursParEmprunts() const;

private:
    std::vector<Livre> livres_;
    std::vector<Lecteur> lecteurs_;
    std::vector<Auteur> auteurs_;
    std::vector<Emprunt> emprunts_;
    
   

};

#endif
