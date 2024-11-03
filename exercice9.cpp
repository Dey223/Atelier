#include <iostream>
using namespace std;

struct Element {
    int valeur;
    Element* suivant;

 
    Element(int val) : valeur(val), suivant(nullptr) {}
};

class Liste {
private:
    Element* tete; 

public:
   
    Liste() : tete(nullptr) {}

   
    ~Liste() {
        while (tete != nullptr) {
            supprimerDebut();
        }
    }

    void ajouterDebut(int val) {
        Element* nouveau = new Element(val);
        nouveau->suivant = tete;
        tete = nouveau;
    }


    void supprimerDebut() {
        if (tete != nullptr) {
            Element* temp = tete;
            tete = tete->suivant;
            delete temp; 
        } else {
            cout << "La liste est déjà vide." << endl;
        }
    }

    
    void afficher() const {
        Element* actuel = tete;
        while (actuel != nullptr) {
            cout << actuel->valeur << " -> ";
            actuel = actuel->suivant;
        }
        cout << "null" << endl;
    }
};

int main() {
    Liste liste;

    
    liste.ajouterDebut(15);
    liste.ajouterDebut(12);
    liste.ajouterDebut(20);

    cout << "Liste après ajouts : ";
    liste.afficher();

   
    liste.supprimerDebut();
    cout << "Liste après suppression : ";
    liste.afficher();

    return 0;
}
