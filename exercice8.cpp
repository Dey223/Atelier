// Exercice 8//
#include<iostream>
using namespace std;
class Fichier {
     private :
   int longeur ;
   char*p;
    public:
    Fichier(): p(nullptr),longeur(0){};
    void creation ( int taille){
    longeur = taille ;
    p= new char[longeur];
    cout<<" Espace de : " <<longeur << "octets alloué "<<endl;
    }
   void remplir (int taile){
    if(p!=nullptr){
        for (int i = 0; i < longueur; ++i) {
                p[i] = 'A' + (i % 26); 
            }
            cout << "Espace mémoire rempli avec des valeurs arbitraires." << endl;
        } else {
            cout << "Aucune mémoire allouée. Appeler 'Creation' d'abord." << endl;
        }
    }
        }
   void affiche (){
    if (P != nullptr) {
            cout << "Contenu de la mémoire : ";
            for (int i = 0; i < longueur; ++i) {
                cout << P[i] << ' ';
            }
            cout << endl;
        } else {
            cout << "Aucune mémoire allouée pour afficher." << endl;
        }
    }
  
~Fichier() {
        delete[] P; 
        cout << "Mémoire libérée par le destructeur." << endl;
    }
};

int main() {
    Fichier* fichier = new Fichier();


    fichier->Creation(10); 
    fichier->Remplit();   
    fichier->Affiche();    

    delete fichier; 

    return 0;
}