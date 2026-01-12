#ifndef Auteur_HPP
#define Auteur_HPP     

#include <string>
#include <vector>

class Auteur {
public:
//    Auteur() = default;

    Auteur(const std::string& id, const std::string& nom, const std::string& prenom);

    const std::string& id() const;

    const std::string& nom() const;

    const std::string& prenom() const;

    void set_id(const std::string& id);

    void set_nom(const std::string& nom);

    void set_prenom(const std::string& prenom);

    const std::string& getNom() const;

    const std::string& getPrenom() const;



    void print() const;  
private:
        std::string id_;
        std::string nom_;
        std::string prenom_;
    };
    
#endif