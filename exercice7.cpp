//          Exerice 7//
#include <iostream>
#include <string>
#include <stack>
using namespace std;
class pile{
    private : 
   stack<int> nombre;
    public:
pile (){};
    void empiler(int valeur){
        cout<<"Veuiller saisir la valeur a empiler : " << valeur << endl;
        nombre.push(valeur);

    }
    void depiler(){
        if (!nombre.empty()){
            cout<<" L'liste depiler est : " nombre.top()<<endl;
             nombre.pop();
        }
       else{
        cout<<"La pile est vile il n'y a aucun liste a dépiler"<<endl;
       }
    }

};
int main(){
    pile p1 ;
    pile p2;
    p1.empiler(5);
    p2.empiler(10);
    p1.depiler();
    p2.depiler();

    return 0;
}
