
#include <iostream>
using namespace std;
class personne {
    private :
    string nom;
    string prenom ;
    int date_naissance;
    public :
    virtual void afficher(){
        cout<<"Nom : "<< nom << " , prénom : " << prenom << ", Date De naaisance : "<< date_naissance <<endl;
    };
    personne (string n ,string p, int date): nom(s),prenom(p) date_naissance(date);

};
class Employe : public personne {
    private :
int salaire ;
public :
Employe (string n , string p, int date_naissance ,int salai): personne (n , p , date ) ,Salaire (salai){};
void afficher (){
    personne :: afficher();
    cout<< "Salaire : "<< salai << "Dirhams "<<endl;
}

};
class Chef : public Employe {
string service;
public :
Chef (string n , string p, int date_naissance ,int salai, string serv): Employe (n , p , date, salai ) , Service (serv){};
void afficher (){
    personne :: afficher();
    cout<< "Servcice : "<< serv <<endl;
}

};
class Directeur : public class Chef  {
    private :
    string societe ;
    string propriete;
public :
Directeur (string n , string p, int date_naissance ,int salai, string serv string sct): Chef (n , p , date , salai , serv) Societe (scte){};
void afficher (){
    personne :: afficher();
    cout<< "Sociéte : "<< scte <<endl;
}
