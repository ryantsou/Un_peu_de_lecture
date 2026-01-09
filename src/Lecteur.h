#ifndef Lecteur_HPP
#define Lecteur_HPP     

#include <string>
#include <vector>

class Lecteur {
public:
    Lecteur() = default;

    Lecteur(const std::string& id, const std::string& nom, const std::string& prenom)
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
    void ajouterEmprunt(const std :: string& isbn) {
        emprunts_.push_back(isbn);
    }

    void print() const;  
    private:
    std::string id_;
    std::string nom_;
    std::string prenom_;
    std::vector<std::string> emprunts_;
};
    
#endif