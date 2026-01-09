#include "Bibliotheque.h"

void Bibliotheque::ajouterLivre(const Livre& livre) {
    livres_.push_back(livre);
}

void Bibliotheque::ajouterLecteur(const Lecteur& livre) {
    lecteurs_.push_back(livre);
}
void Bibliotheque::ajouterAuteur(const Auteur& livre) {
    auteurs_.push_back(livre);
}

bool Bibliotheque::emprunterLivre(const std::string& idLecteur, const std::string& isbn, const Date& dateEmprunt)
{
    Lecteur* lecteur = nullptr;
    for (auto& livre : lecteurs_) {
        if (livre.id() == idLecteur) {
            lecteur = &livre;
            break;
        }
    }
    if (!lecteur) return false;

    Livre* livre = nullptr;
    for (auto& lv : livres_) {
        if (lv.isbn() == isbn && !lv.estEmprunte()) {
            livre = &lv;
            break;
        }
    }
    if (!livre) return false;

    livre->setEmprunte(true);
    lecteur->ajouterEmprunt(isbn);
    emprunts_.emplace_back(dateEmprunt, isbn, idLecteur);
    return true;
}

bool Bibliotheque::restituerLivre(const std::string& idLecteur, const std::string& isbn){
    Lecteur* lecteur = nullptr;
    for (auto& livre : lecteurs_) {
        if (livre.id() == idLecteur) {
            lecteur = &livre;
            break;
        }
    }
    if (!lecteur) return false;

    Livre* livre = nullptr;
    for (auto& lv : livres_) {
        if (lv.isbn() == isbn) {
            livre = &lv;
            break;
        }
    }
    if (!livre || !livre->estEmprunte()) return false;
    livre->setEmprunte(false);
    return true;
}
