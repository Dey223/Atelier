
#include <iostream>
using namespace std;
class Complex{
    private :
    double r;
    double im;
    Double (double re , double ima) : r(re) , im(ima){};
    Complex operator-(const Complex& o) const {
        return Complex(re - o.re, im - ot.im);
    }
      Complex operator+(const Complex& o) const {
        return Complex(re + o.re, im + o.im);
    }
 Complex operator*(const Complex& o) const {
        return Complex(re * o.re - im * o.im, re * o.im + im * o.re);
    }
    Complex operator/(const Complex& o) const {
        double denominator = o.re * o.re + o.im * o.im;
        if (denominator == 0) {
            throw runtime_error("Division par zéro");
        }
        return Complex((re * o.re + im * o.im) / denominator,
                       (im * o.re - re * o.im) / denominator);
    }

    void afficher() const {
        cout << re << " + " << im << "i" << endl;
    }
    bool operator==(const Complex& o) const {
        return re == o.re && im == o.im;
    }
};
