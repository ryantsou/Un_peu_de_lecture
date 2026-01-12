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
/*
    std::cout << "Info Auteur : ";
    auteur.print();
    std::cout << std::endl;
    */
//---------------------------------------------------------------------------
// -------------------------------LIVRES---------------------------------
    Date pub(4, 5, 2021);
    Livre livre("The Hitchhiker's Guide to the Galaxy", auteur, "Anglais", "Science Fiction", pub, "0593359445");
    Date pub2(06, 11, 1943);
    Livre livre2("Le Petit Prince", auteur2, "Français", "Conte philosophique", pub2, "9780156013987");
    Date pub3(8, 6, 1949);
    Livre livre3("1984", auteur3, "Anglais", "Dystopie", pub3, "9780451524935");
    Date pub4(11, 7, 1960);
    Livre livre4("To Kill a Mockingbird", auteur4, "Anglais", "Roman", pub4, "9780061120084");  
    Date pub5(18, 10, 1851);
    Livre livre5("Moby Dick", auteur5, "Anglais", "Aventure", pub5, "9781503280786");
    Date pub6(14, 2, 1925);
    Livre livre6("The Great Gatsby", auteur6, "Anglais", "Roman", pub6, "9780743273565");
    Date pub7(1, 9, 1813);
    Livre livre7("Pride and Prejudice", auteur7, "Anglais", "Roman", pub7, "9781503290563");
    Date pub8(30, 1, 1818);
    Livre livre8("Frankenstein", auteur8, "Anglais", "Gothique", pub8, "9780486282114");
    Date pub9(16, 7, 1870);
    Livre livre9("War and Peace", auteur9, "Russe", "Historique", pub9, "9780199232765");
    bibliotheque.ajouterLivre(livre);
    bibliotheque.ajouterLivre(livre2);
    bibliotheque.ajouterLivre(livre3);
    bibliotheque.ajouterLivre(livre4);
    bibliotheque.ajouterLivre(livre5);
    bibliotheque.ajouterLivre(livre6);
    bibliotheque.ajouterLivre(livre7);
    bibliotheque.ajouterLivre(livre8);
    bibliotheque.ajouterLivre(livre9);
/*
    std::cout << "Info livre : ";
    livre.print();
    std::cout << std::endl;
*/

// --------------------------------------------------------------------------
// -------------------------------LECTEURS---------------------------------
    Lecteur lecteur("dginhac", "Ginhac", "Dominique");
    Lecteur lecteur2("esirem", "Chassel", "Quentin");
    Lecteur lecteur3("esirem2", "Meunier", "Charles");
    bibliotheque.ajouterLecteur(lecteur);
    bibliotheque.ajouterLecteur(lecteur2);
    bibliotheque.ajouterLecteur(lecteur3);
/*
    std::cout << "Info Lecteur : ";
    lecteur.print();
    std::cout << std::endl;
*/
// --------------------------------------------------------------------------
    
//emprunt



//emprunter livre
    Date dateDuJour(9, 1, 2025);
    Emprunt emprunt(dateDuJour, livre.isbn(), lecteur.id());    
    bool ok = bibliotheque.emprunterLivre("dginhac", "0593359445", dateDuJour);
    

    Emprunt emprunt2(dateDuJour, livre.isbn(), lecteur2.id());  
    bool ok2 = bibliotheque.emprunterLivre("esirem", "9780156013987", dateDuJour);

    Emprunt emprunt3(dateDuJour, livre.isbn(), lecteur3.id());
    bool ok3 = bibliotheque.emprunterLivre("esirem2", "9780451524935", dateDuJour);

    Emprunt emprunt4(dateDuJour, livre.isbn(), lecteur.id());
    bool ok4 = bibliotheque.emprunterLivre("dginhac", "9780743273565", dateDuJour);

    Emprunt emprunt5(dateDuJour, livre.isbn(), lecteur2.id());
    bool ok5 = bibliotheque.emprunterLivre("esirem", "9780199232765", dateDuJour);

    Emprunt emprunt6(dateDuJour, livre.isbn(), lecteur2.id());
    bool ok6 = bibliotheque.emprunterLivre("esirem", "9781503290563", dateDuJour);

//reemprunter le meme livre
    Emprunt empruntFail(dateDuJour, livre.isbn(), lecteur3.id());  
    bool okFail = bibliotheque.emprunterLivre("esirem2", "0593359445", dateDuJour);



    std::cout << "Info Emprunt 1 : " << std::endl;
        if (ok == true) {
            std::cout << "Emprunt effectue" << std::endl;
            emprunt.print(); 
        } else {
            std::cout << "ECHEC Emprunt" << std::endl;
            }   
    std::cout << std::endl;

    std::cout << "Info Emprunt 2 : " << std::endl;
        if (ok2 == true) {
            std::cout << "Emprunt effectue" << std::endl;
            emprunt2.print(); 
        } else {
            std::cout << "ECHEC Emprunt" << std::endl;
        }
    std::cout << std::endl;

    std::cout << "Info Emprunt 3 : " << std::endl;
        if (ok3 == true) {
            std::cout << "Emprunt effectue" << std::endl;
            emprunt3.print(); 
        } else {
            std::cout << "ECHEC Emprunt" << std::endl;
        }
    std::cout << std::endl;

    std::cout << "Info Emprunt 4 : " << std::endl;
        if (ok4 == true) {
            std::cout << "Emprunt effectue" << std::endl;
            emprunt4.print(); 
        } else {
            std::cout << "ECHEC Emprunt" << std::endl;
        }
    std::cout << std::endl;

    std::cout << "Info Emprunt 5 : " << std::endl;
        if (ok5 == true) {
            std::cout << "Emprunt effectue" << std::endl;
            emprunt5.print(); 
        } else {
            std::cout << "ECHEC Emprunt" << std::endl;
        }
    std::cout << std::endl;

    std::cout << "Info Emprunt 6 : " << std::endl;
        if (ok6 == true) {
            std::cout << "Emprunt effectue" << std::endl;
            emprunt6.print(); 
        } else {
            std::cout << "ECHEC Emprunt" << std::endl;
        }
    std::cout << std::endl;

    std::cout << "Info Emprunt Fail : " << std::endl;
        if (okFail == true) {
            std::cout << "Emprunt effectue" << std::endl;
            empruntFail.print(); 
        } else {
            std::cout << "ECHEC Emprunt" << std::endl;
        }
    std::cout << std::endl;



//---------------------------------------------------------------------------
/*
    std::cout << "Test Livre : ";
    livre.print();
    std::cout << std::endl;
*/


//recherche livre par auteur
/*
    std::cout << "Recherche livre par auteur Douglas Adams : " << std::endl;
    auto livresParAuteur = bibliotheque.rechercherLivresParAuteur("Douglas");
    for (const auto& l : livresParAuteur) {
        l.print();
        std::cout << std::endl;
    }
*/

//---------------------------------------------------------------------------
//livres empruntés et pourcentage

/*
    std::cout << "Liste des livres empruntes :" << std::endl;
    auto livresEmp = bibliotheque.getLivresEmpruntes();
    for (const auto& l : livresEmp) {
        l.print();
        std::cout << std::endl;
    }
    std::cout << "Pourcentage de livres empruntes : " << bibliotheque.getPourcentageLivresEmpruntes() << " %" << std::endl;
    return 0;
*/
    //---------------------------------------------------------------------------
//livres empruntés par un lecteur
/*
    std::cout << "Liste des livres empruntes dginhac :" << std::endl;
    std::vector<Livre> livresEmpParLecteur = bibliotheque.getLivresEmpruntesParLecteur("dginhac");
    for (const auto& livre : livresEmpParLecteur) {
        livre.print();
        std::cout << std::endl;
    }
*/
    //---------------------------------------------------------------------------
//classment des lecteurs par nombre d'emprunts

    std::cout << "Classement des lecteurs par nombre d'emprunts :" << std::endl;
    auto classement = bibliotheque.classementLecteursParEmprunts();
    for (const auto& user : classement) {
        const Lecteur& lecteur = user.first;
        int nb = user.second;
        std::cout << "- " << lecteur.id() << " : " << nb << " emprunt" << std::endl;
    }


    return 0;
}   
