#ifndef Lecteur_HPP
#define Lecteur_HPP     

#include <string>
#include <vector>

class Lecteur {
public:
    //Lecteur() = default;

    Lecteur(const std::string& id, const std::string& nom, const std::string& prenom);

    const std::string& id() const;

    const std::string& nom() const;

    const std::string& prenom() const;

    void set_id(const std::string& id);

    void set_nom(const std::string& nom);

    void set_prenom(const std::string& prenom);

    void ajouterEmprunt(const std :: string& isbn);

    int nbEmprunts() const;

    void supprimerEmprunt(const std :: string& isbn);

    void print() const;  
private:
    std::string id_;
    std::string nom_;
    std::string prenom_;

    std::vector<std::string> emprunts_;


};
    
#endif

