#include <iostream>
using namespace std;
class Animal {
    private :
    int age ;
    string nom;
    public:
    void set_value( string &n int a){
        nom = n ;
        age = a;
    };
    void afficher (){
        cout<< "Nom : "<<nom " , Age : " <<age " ans" << endl;
    }
};
class Zebra pulbic : class animal {
    private :
string lieu_origine ;
public :
void set_lieu_origine(const string &lieu){
    lieu_origine= lieu;
}
void afficher () const{
    Animal ::afficher ();
    cout<<" Lieu d'origine : " << lieu << endl;
}
};
class Dolphin public : class animal {
 string lieu_origine;   
public :
void afficher () const{
    Animal ::afficher ();
    cout<<" Lieu d'origine : " << lieu << endl;
}
int main{
    Zebra z;
    z.set_value( "Zizi " , 5);
    z.set_lieu_origine ("Mali");
cout<<"Les informations sur le zebre : " <<endl;
    Dolphin d ;
    d.set_value("Doudou ", 10);
    d.set_lieu_origine("Ocean pacifique");
cout<<"Les informations sur le Dolphin : " <<endl;
    d.afficher();
    retun 0;

};