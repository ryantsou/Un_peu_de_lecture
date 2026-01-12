#include "Livre.h"
#include <iostream>


   Livre::Livre (const std::string& titre, Auteur& auteur, const std::string& langue, const std::string& genre, const Date& datePublication, const std::string& isbn)
        :titre_(titre), auteur_(auteur), langue_(langue), genre_(genre), datePublication_(datePublication), isbn_(isbn) {}    

    const std::string& Livre::titre() const {
        return titre_;
    }
    const Auteur& Livre::auteur() const {
        return auteur_;
    }
    const std::string& Livre::langue() const {
        return langue_;
    }
    const std::string& Livre::genre() const {
        return genre_;
    }
    const Date& Livre::datePublication() const {
        return datePublication_;
    }
    const std::string& Livre::isbn() const {
        return isbn_;
    }   

    const std::vector<std::string>& Livre::emprunteurs() const {
        return emprunteurs_;
    }


    void Livre::set_titre(const std::string& titre) {
        titre_ = titre;
    }
    void Livre::set_auteur(const Auteur& auteur) {
        auteur_ = auteur;
    }

    void Livre::set_langue(const std::string& langue) {
        langue_ = langue;
    }
    void Livre::set_genre(const std::string& genre) {
        genre_ = genre;
    }   
    void Livre::set_datePublication(const Date& datePublication) {
        datePublication_ = datePublication;
    }
    void Livre::set_isbn(const std::string& isbn) {
        isbn_ = isbn;
    }   

    void Livre::ajouterEmprunteur(std::string idEmprunteur) {
        emprunteurs_.push_back(idEmprunteur);
    }

    bool Livre::estEmprunte() const { 
        return estEmprunte_; 
    }
    void Livre::setEmprunte(bool e) { 
        estEmprunte_ = e; 
    }


void Livre::print() const {
    std::cout << "Titre : " << titre_ << std::endl;
    std::cout << "Auteur : " << auteur_.getPrenom() << " " << auteur_.getNom() << std::endl;
    std::cout << "Langue : " << langue_ << std::endl;
    std::cout << "Genre : " << genre_ << std::endl;
    std::cout << "Date de Publication : ";
    datePublication_.print();
    std::cout << "ISBN : " << isbn_ << std::endl;   
    if (emprunteurs_.empty()) {
        std::cout << " Aucun emprunteur " << std::endl;
    } else {
        std::cout << " Emprunteurs : " << std::endl;
        for (const auto& id : emprunteurs_) {
            std::cout << " - " << id << std::endl;
        }
    }
}
