// Exercice 4//
#include <iostream>
#include <cmath>
using namespace std;

class vecteur3d {
private:
    float x, y, z;

public:
    vecteur3d(float x = 0, float y = 0, float z = 0) : x(x), y(y), z(z) {}
    void afficher() const {
        cout << "(" << x << ", " << y << ", " << z << ")" << endl;
    }
    vecteur3d somme(const vecteur3d& v) const {
        return vecteur3d(x + v.x, y + v.y, z + v.z);
    }
    float produit_scalaire(const vecteur3d& v) const {
        return x * v.x + y * v.y + z * v.z;
    }
    bool coincide(const vecteur3d& v) const {
        return (x == v.x && y == v.y && z == v.z);
    }
    float norme() const {
        return sqrt(x * x + y * y + z * z);
    }
    vecteur3d normax_valeur(const vecteur3d& v) const {
        return (this->norme() > v.norme()) ? *this : v;
    }
    const vecteur3d* normax_adresse(const vecteur3d* v) const {
        return (this->norme() > v->norme()) ? this : v;
    }
    const vecteur3d& normax_reference(const vecteur3d& v) const {
        return (this->norme() > v.norme()) ? *this : v;
    }
};

int main() {
    vecteur3d v1(1.0, 2.0, 3.0);
    vecteur3d v2(4.0, 5.0, 6.0);
    cout << "Vecteur v1 : ";
    v1.afficher();

    cout << "Vecteur v2 : ";
    v2.afficher();
    vecteur3d somme = v1.somme(v2);
    cout << "Somme de v1 et v2 : ";
    somme.afficher()
    float produit = v1.produit_scalaire(v2);
    cout << "produit scalaire de v1 et v2 : " << produit << endl;
    cout << "v1 et v2 coïncident ? " << (v1.coincide(v2) ? "Oui" : "Non") << endl;
    cout << "Norme de v1 : " << v1.norme() << endl;
    cout << "Norme de v2 : " << v2.norme() << endl;
    cout << "Vecteur avec la plus grande norme (par valeur) : ";
    vecteur3d max_valeur = v1.normax_valeur(v2);
    max_valeur.afficher();
    cout << "Vecteur avec la plus grande norme (par adresse) : ";
    const vecteur3d* max_adresse = v1.normax_adresse(&v2);
    max_adresse->afficher();
    cout << "Vecteur avec la plus grande norme (par référence) : ";
    const vecteur3d& max_reference = v1.normax_reference(v2);
    max_reference.afficher();
    return 0;
}