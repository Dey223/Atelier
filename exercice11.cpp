//        E3XERCICE 11//
#include <iostream>
#include <vector>
#include <algorithm> // Pour std::sort

using namespace std;

class Traitement {
private:
    vector<int> valeurs;

public:
    void Initialise() {
        int nombre;
        while (valeurs.size() < 15) {
            cout << "Veuillez saisir un entier pair non nul : ";
            cin >> nombre;
            if (cin.fail() || nombre % 2 != 0 || nombre == 0) {
                cout << "Erreur : Veuillez saisir un entier pair non nul." << endl;
                cin.clear(); // Effacer l'état d'erreur
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Ignorer les caractères restants
            } else {
                valeurs.push_back(nombre);
            }
        }
    }
    void show(int index = 0) const {
        if (index < valeurs.size()) {
            cout << valeurs[index] << " ";
            show(index + 1);
        } else if (index == 0) {
            cout << "Le vecteur est vide." << endl;
        }
    }
    friend double moyenne(const Traitement& t);
    friend double mediane(Traitement t);
};
double moyenne(const Traitement& t) {
    int somme = 0;
    for (int val : t.valeurs) {
        somme += val;
    }
    return static_cast<double>(somme) / t.valeurs.size();
}
double mediane(Traitement t) {
    sort(t.valeurs.begin(), t.valeurs.end());
    size_t n = t.valeurs.size();
    if (n % 2 == 0) {
        return (t.valeurs[n / 2 - 1] + t.valeurs[n / 2]) / 2.0;
    } else {
        return t.valeurs[n / 2];
    }
}

int main() {
    Traitement t;
    t.Initialise();

    cout << "Les éléments du vecteur sont : ";
    t.show();
    cout << endl;

    cout << "Moyenne des éléments du vecteur : " << moyenne(t) << endl;
    cout << "Médiane des éléments du vecteur : " << mediane(t) << endl;

    return 0;
}
