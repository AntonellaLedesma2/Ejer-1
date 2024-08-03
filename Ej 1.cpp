#include <bits/stdc++.h>

using namespace std;

class CCuenta{
    private:
    double cantidad;
    string titular;
    double retiro;
    public:
    CCuenta(double _cantidad, string _titular, double _retiro);
    bool ingresar();
    void retirar();
};

CCuenta::CCuenta(double _cantidad,string _titular,double _retiro) {
    cantidad = _cantidad;
    titular = _titular;
    retiro = _retiro;
}

bool CCuenta::ingresar() {
    bool flag = true;
    if (cantidad < 0) {
        flag = false;
    }
    return flag;
} 

void CCuenta::retirar () {
    if (cantidad - retiro <= 0) {
        cout << "Con la diferencia del retiro, su cuenta da menos de 0" << endl;   
    } else {
        cout << cantidad - retiro << endl; 
    }    
    return;
}

int main(){
    double cantidad;
    double retiro;
    cin >> cantidad >> retiro;
    string titular;
    cin >> titular;
    CCuenta c1 = CCuenta(cantidad, titular, retiro);
    if (c1.ingresar()) {
        c1.retirar();
    } else {
        cout << "Debido que su cantidad es negativa, no se realiza ninguna operacion" << endl;
    }
    return 0;
}