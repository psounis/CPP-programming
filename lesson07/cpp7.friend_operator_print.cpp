/*cpp7.friend_operator_print.cpp Υπερφόρτωση του << με φιλική συνάρτηση */

#include <iostream>
using namespace std; 


class complex {
  public:  
    complex(); 
    complex(double in_real, double in_imag);
    void set_real(double in_real);
    void set_imag(double in_imag);
    double get_real() const; 
    double get_imag() const; 
    complex operator+ (const complex &right);
    complex operator- (const complex &right);
    complex operator++(int right);
    complex &operator++();
    complex &operator= (const complex &right);
    friend complex operator+(int left, complex &right);
    friend ostream &operator<<(ostream &left, const complex &right);
  private:
    double real;
    double imag; 
};

ostream &operator<<(ostream &left, const complex &right);
complex operator+(int left, complex &right);

int main()
{
    complex a(1.0,1.0);
    
    cout<<a;    
    
    return 0; 
}

complex::complex()
{
    real = 0.0;
    imag = 0.0; 
}

complex::complex(double in_real, double in_imag)
{
    real = in_real;
    imag = in_imag; 
}

void complex::set_real(double in_real)
{
    real = in_real;
}

void complex::set_imag(double in_imag)
{
    imag = in_imag;
}

double complex::get_real() const
{
    return real;
}

double complex::get_imag() const
{
    return imag;
}

complex complex::operator+ (const complex &right)
{
    complex result; 
    
    result.set_real(real+right.get_real()); 
    result.set_imag(imag+right.get_imag()); 
    
    return result;
}

complex complex::operator- (const complex &right)
{
    complex result; 
    
    result.set_real(real-right.get_real()); 
    result.set_imag(imag-right.get_imag()); 
    
    return result;
}

complex complex::operator++(int right)
{
    complex result=*this; 
    
    real++; 
    imag++; 
    
    return result; 
}

complex &complex::operator++()
{
    real++; 
    imag++;
    
    return *this; 
}

complex &complex::operator= (const complex &right)
{
    if (this==&right) return *this; 
    
    real=right.get_real(); 
    imag=right.get_imag();
    
    return *this;
}

complex operator+(int left, complex &right)
{
    complex result;

    result.real = left+right.real; 
    result.imag = left+right.imag; 
    return result;
}

ostream &operator<<(ostream &left, const complex &right)
{
    left<<"("<<right.real<<", "<<right.imag<<")"; 

    return left;
}
