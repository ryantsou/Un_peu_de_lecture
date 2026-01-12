#ifndef LIVRE_HPP
#define LIVRE_HPP


#include <string>
#include <vector>
#include "Date.h"
#include "Auteur.h"
//using namespace std;

class Livre {
public:
//    Livre() =default;

    Livre (const std::string& titre, Auteur& auteur, const std::string& langue, const std::string& genre, const Date& datePublication, const std::string& isbn);
    const std::string& titre() const;
    const Auteur& auteur() const;
    const std::string& langue() const;
    const std::string& genre() const;
    const Date& datePublication() const;
    const std::string& isbn() const;   

    const std::vector<std::string>& emprunteurs() const;


    void set_titre(const std::string& titre);
    void set_auteur(const Auteur& auteur);

    void set_langue(const std::string& langue);
    void set_genre(const std::string& genre);
    void set_datePublication(const Date& datePublication);
    void set_isbn(const std::string& isbn);

    void ajouterEmprunteur(std::string idEmprunteur);

    void print() const;


    bool estEmprunte() const;
    void setEmprunte(bool e);


private:
    std::string titre_;
    Auteur auteur_;
    std::string langue_;
    std::string genre_;
    Date datePublication_;
    std::string isbn_;
    std::vector<std::string> emprunteurs_;

    bool estEmprunte_{false};
};  


#endif 