
// Exerxice 5//
#include <iostream>
using namespace std;
class T {
private :
static int nombre;
public :
void call(){
    nombre ++;
}
static void nombre_fois (){
    cout<<"La methode call () est appelé : "<<nombre " fois ." <<endl;
}
int T::nombre = 0;
};
int main () {
T t1, t2, t3, t4;
t1.call();
t2.call();
t3.call();
t4.call();
T :: nombre_fois();
    return 0;
}
