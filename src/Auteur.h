#ifndef Auteur_HPP
#define Auteur_HPP     

#include <string>
#include <vector>

class Auteur {
public:
    Auteur() = default;

    Auteur(const std::string& id, const std::string& nom, const std::string& prenom)
        : id_(id), nom_(nom), prenom_(prenom) {}

    const std::string& id() const {
        return id_;
    }
    const std::string& nom() const {
        return nom_;
    }
    const std::string& prenom() const {
        return prenom_;
    }   
    void set_id(const std::string& id) {
        id_ = id;
    }
    void set_nom(const std::string& nom) {
        nom_ = nom;
    }
    void set_prenom(const std::string& prenom) {
        prenom_ = prenom;
    }   

    const std::string& getNom() const {
        return nom_;
    }

    const std::string& getPrenom() const {
        return prenom_;
    }



    void print() const;  
        private:
        std::string id_;
        std::string nom_;
        std::string prenom_;
    };
    
#endif