// exercice 10
#include <iostream>
#include <string>

using namespace std;

class DateH {
private:
    string jour;
    string mois;
    string annee;
    string heure;
    string minute;

public:

    DateH(const string& chaine) {
        if (chaine.length() == 12) {
            jour = chaine.substr(0, 2);
            mois = chaine.substr(2, 2);
            annee = chaine.substr(4, 4);
            heure = chaine.substr(8, 2);
            minute = chaine.substr(10, 2);
        } else {
            cout << "Erreur : La chaîne doit contenir exactement 12 caractères (JJMMAAAAHHNN)." << endl;
        }
    }

    void afficher() const {
        cout << "Date : " << jour << "/" << mois << "/" << annee << endl;
        cout << "Heure : " << heure << "h" << minute << endl;
    }
};

int main() {
   
    string chaine = "010920091123";
    DateH DateH(chaine);
    DateH.afficher();

    return 0;

}