#ifndef LIVRE_HPP
#define LIVRE_HPP


#include <string>
#include <vector>
#include "Date.h"
//using namespace std;

class Livre {
public:
    Livre() =default;

    Livre (const std::string& titre, const std::string& auteur, const std::string& langue, const std::string& genre, const Date& datePublication, const std::string& isbn)
        :titre_(titre), auteur_(auteur), langue_(langue), genre_(genre), datePublication_(datePublication), isbn_(isbn) {}    

    const std::string& titre() const {
        return titre_;
    }
    const std::string& auteur() const {
        return auteur_;
    }
    const std::string& langue() const {
        return langue_;
    }
    const std::string& genre() const {
        return genre_;
    }
    const Date& datePublication() const {
        return datePublication_;
    }
    const std::string& isbn() const {
        return isbn_;
    }   

    const std::vector<std::string>& emprunteurs() const {
        return emprunteurs_;
    }


    void set_titre(const std::string& titre) {
        titre_ = titre;
    }
    void set_auteur(const std::string& auteur) {
        auteur_ = auteur;
    }
    void set_langue(const std::string& langue) {
        langue_ = langue;
    }
    void set_genre(const std::string& genre) {
        genre_ = genre;
    }   
    void set_datePublication(const Date& datePublication) {
        datePublication_ = datePublication;
    }
    void set_isbn(const std::string& isbn) {
        isbn_ = isbn;
    }   

    void ajouterEmprunteur(std::string idEmprunteur) {
        emprunteurs_.push_back(idEmprunteur);
    }

    void print() const;


    bool estEmprunte() const { return estEmprunte_; }
    void setEmprunte(bool e) { estEmprunte_ = e; }

private:
    std::string titre_;
    std::string auteur_;
    std::string langue_;
    std::string genre_;
    Date datePublication_;
    std::string isbn_;
    std::vector<std::string> emprunteurs_;

    bool estEmprunte_{false};
};  


#endif 