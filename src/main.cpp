#include "Livre.h"
#include "Date.h"
#include "Lecteur.h"
#include "Emprunt.h"
#include "Auteur.h"
#include "Bibliotheque.h"

#include <iostream>


/* int main() {
    Date pub(4, 5, 2021);
    Livre livre("The Hitchhiker's Guide to the Galaxy", "Douglas Adams", "Anglais", "Science Fiction", pub, "0593359445");
    Lecteur lecteur("dginhac", "Ginhac", "Dominique");
    lecteur.ajouterEmprunt(livre.isbn());
    livre.ajouterEmprunteur("dginhac");
    livre.ajouterEmprunteur("esirem");
    Emprunt emprunt(pub, livre.isbn(), lecteur.id());

    std::cout << "Informations sur le livre :" << std::endl;
    livre.print();
    std::cout << std::endl;
    std::cout << "Informations sur le lecteur :" << std::endl;
    lecteur.print();
    std::cout << std::endl;
    std::cout << "Informations sur l'emprunt :" << std::endl;
    emprunt.print();   
    return 0;
}
*/

    /*int main() {
    Date pub(5, 4, 2021); /

    Livre l("The Hitchhiker's Guide to the Galaxy",
            "Douglas Adams",
            "Anglais",
            "Science Fiction",
            pub,
            "0593359445");

    l.ajouterEmprunteur(101);
    l.ajouterEmprunteur(202);
    l.ajouterEmprunteur(303);

    std::cout << "Test Livre : ";
    l.print();
    std::cout << std::endl;

    return 0;
}*/




/*
int main() {
    Bibliotheque bibliotheque;
    Date pub(4, 5, 2021);
    Livre livre("The Hitchhiker's Guide to the Galaxy", "Douglas Adams", "Anglais", "Science Fiction", pub, "0593359445");

    bibliotheque.ajouterLivre(livre);


    Lecteur lecteur("dginhac", "Ginhac", "Dominique");
    bibliotheque.ajouterLecteur(lecteur);

    Auteur auteur("ID", "Be", "Teda");
    bibliotheque.ajouterAuteur(auteur);

    Date dEmp(10, 12, 2025);
    bool ok = bibliotheque.emprunterLivre("dginhac", "0593359445", dEmp);
    std::cout << "Emprunt reussi ? " << ok << std::endl;


    bool ok2 = bibliotheque.restituerLivre("dginhac", "0593359445");
    std::cout << "Restitution reussie ? " << ok2 << std::endl;

    return 0;
}
*/


int main(){

}