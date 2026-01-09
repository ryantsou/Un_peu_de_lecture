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
    Date pub(5, 4, 2021); 

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
    Bibliotheque bibliotheque;
// -------------------------------AUTEURS---------------------------------
    Auteur auteur("XX1", "Douglas", "Adams");
    bibliotheque.ajouterAuteur(auteur);
    Auteur auteur2("XX2", "Antoine", "de Saint-Exupéry");
    bibliotheque.ajouterAuteur(auteur2);
    Auteur auteur3("XX3", "George", "Orwell");
    bibliotheque.ajouterAuteur(auteur3);
    Auteur auteur4("XX4", "Harper", "Lee");
    bibliotheque.ajouterAuteur(auteur4);
    Auteur auteur5("XX5", "Herman", "Melville");
    bibliotheque.ajouterAuteur(auteur5);
    Auteur auteur6("XX6", "F. Scott", "Fitzgerald");
    bibliotheque.ajouterAuteur(auteur6);
    Auteur auteur7("XX7", "Jane", "Austen");
    bibliotheque.ajouterAuteur(auteur7);
    Auteur auteur8("XX8", "Mary", "Shelley");
    bibliotheque.ajouterAuteur(auteur8);
    Auteur auteur9("XX9", "Leo", "Tolstoy");
    bibliotheque.ajouterAuteur(auteur9);

    std::cout << "Info Auteur : ";
    auteur.print();
    std::cout << std::endl;
//---------------------------------------------------------------------------
// -------------------------------LIVRES---------------------------------
    Date pub(4, 5, 2021);
    Livre livre("The Hitchhiker's Guide to the Galaxy", auteur, "Anglais", "Science Fiction", pub, "0593359445");
    Date pub2(06, 11, 1943);
    Livre livre2("Le Petit Prince", auteur2, "Français", "Conte philosophique", pub, "9780156013987");
    Date pub3(8, 6, 1949);
    Livre livre3("1984", auteur3, "Anglais", "Dystopie", pub, "9780451524935");
    Date pub4(11, 7, 1960);
    Livre livre4("To Kill a Mockingbird", auteur4, "Anglais", "Roman", pub, "9780061120084");  
    Date pub5(18, 10, 1851);
    Livre livre5("Moby Dick", auteur5, "Anglais", "Aventure", pub, "9781503280786");
    Date pub6(14, 2, 1925);
    Livre livre6("The Great Gatsby", auteur6, "Anglais", "Roman", pub, "9780743273565");
    Date pub7(1, 9, 1813);
    Livre livre7("Pride and Prejudice", auteur7, "Anglais", "Roman", pub, "9781503290563");
    Date pub8(30, 1, 1818);
    Livre livre8("Frankenstein", auteur8, "Anglais", "Gothique", pub, "9780486282114");
    Date pub9(16, 7, 1870);
    Livre livre9("War and Peace", auteur9, "Russe", "Historique", pub, "9780199232765");
    bibliotheque.ajouterLivre(livre);
    bibliotheque.ajouterLivre(livre2);
    bibliotheque.ajouterLivre(livre3);
    bibliotheque.ajouterLivre(livre4);
    bibliotheque.ajouterLivre(livre5);
    bibliotheque.ajouterLivre(livre6);
    bibliotheque.ajouterLivre(livre7);
    bibliotheque.ajouterLivre(livre8);
    bibliotheque.ajouterLivre(livre9);

    std::cout << "Info livre : ";
    livre.print();
    std::cout << std::endl;


// --------------------------------------------------------------------------
// -------------------------------LECTEURS---------------------------------
    Lecteur lecteur("dginhac", "Ginhac", "Dominique");
    Lecteur lecteur2("esirem", "Chassel", "Quentin");
    Lecteur lecteur3("esirem2", "Meunier", "Charles");
    bibliotheque.ajouterLecteur(lecteur);
    bibliotheque.ajouterLecteur(lecteur2);
    bibliotheque.ajouterLecteur(lecteur3);

    std::cout << "Info Lecteur : ";
    lecteur.print();
    std::cout << std::endl;
// --------------------------------------------------------------------------
    
//emprunt



//emprunter livre
Date dateDuJour(9, 1, 2025);
Emprunt emprunt(dateDuJour, livre.isbn(), lecteur.id());    
bool ok = bibliotheque.emprunterLivre("dginhac", "0593359445", dateDuJour);


//reemprunter le meme livre
Emprunt emprunt2(dateDuJour, livre.isbn(), lecteur2.id());  
bool ok2 = bibliotheque.emprunterLivre("esirem", "0593359445", dateDuJour);


std::cout << "Info Emprunt 1 : ";
if (ok == true) {
    emprunt.print(); 
} else {
    std::cout << "emprunt succes" << std::endl;
}

std::cout << "Info Emprunt 2 : ";
if (ok2 == true) {
    emprunt2.print(); 
} else {
    std::cout << "ECHEC" << std::endl;
}
/*
    std::cout << "Test Livre : ";
    livre.print();
    std::cout << std::endl;
*/







    return 0;
}