#ifndef FRACTION_H
#define FRACTION_H

#include <iostream>
#include <cmath>
using namespace std;

int gcd(int m, int n) {
    while (m % n != 0) {
        int oldm = m;
        int oldn = n;

        m = oldn;
        n = oldm % oldn;
    }
    return n;
}

class Fraction {

private:
int num, den; 

public:
    /*
    Fraction(int top, int bottom);
    Fraction(int top);
    Fraction();
    */
    Fraction(int top, int bottom) {
        num = top;
        den = bottom;
    }
    Fraction(int top) {
        num = top;
        den = 1;
    }
    Fraction() {
        num = 1;
        den = 1;
    }

    int getNum() { return num; }
    int getDen() { return den; }
    
    void setNum(int num1 = 0) { num = num1; }
    void setDen(int den1 = 1) { den = den1; }
    //Overloading: +,-, *, /, ==, !=, >, <, display (<<)

    /*
    Fraction operator +(Fraction otherFrac);
    Fraction operator -(Fraction otherFrac);
    Fraction operator *(Fraction otherFrac);
    Fraction operator /(Fraction otherFrac);
    bool operator ==(Fraction& otherFrac);
    bool operator !=(Fraction& otherFrac);
    bool operator <(Fraction& otherFrac);
    bool operator <=(Fraction& otherFrac);
    bool operator >(Fraction& otherFrac);
    bool operator >=(Fraction& otherFrac);
    */
    friend ostream& operator<<(ostream& stream, const Fraction& fraction);

    Fraction operator +(Fraction otherFrac) {
        int newnum = num * otherFrac.den + den * otherFrac.num;
        int newden = den * otherFrac.den;
        int common = gcd(newnum, newden);

        return Fraction(newnum / common, newden / common);
    }

    Fraction operator -(Fraction otherFrac) {
        int newnum = num * otherFrac.den - den * otherFrac.num;
        int newden = den * otherFrac.den;
        int common = gcd(newnum, newden);

        return Fraction(newnum / common, newden / common);
    }

    Fraction operator *(Fraction otherFrac) {
        int newnum = num * otherFrac.num;
        int newden = den * otherFrac.den;
        int common = gcd(newnum, newden);

        return Fraction(newnum / common, newden / common);
    }

    Fraction operator /(Fraction otherFrac) {
        int newnum = num * otherFrac.den;
        int newden = den * otherFrac.num;
        int common = gcd(newnum, newden);

        return Fraction(newnum / common, newden / common);
    }

    bool operator ==(Fraction& otherFrac) {
        int firstnum = num * otherFrac.den;
        int secondnum = otherFrac.num * den;

        return firstnum == secondnum;
    }

    bool operator !=(Fraction& otherFrac) {
        int firstnum = num * otherFrac.den;
        int secondnum = otherFrac.num * den;

        return !(firstnum == secondnum);
    }

    bool operator <(Fraction& otherFrac) {
        double firstnum = (double)num / den;
        double secondnum = (double)otherFrac.num / otherFrac.den;

        return firstnum < secondnum;
    }

    bool operator <=(Fraction& otherFrac) {
        double firstnum = (double)num / den;
        double secondnum = (double)otherFrac.num / otherFrac.den;

        return firstnum <= secondnum;
    }

    bool operator >(Fraction& otherFrac) {
        double firstnum = (double)num / den;
        double secondnum = (double)otherFrac.num / otherFrac.den;

        return firstnum > secondnum;
    }

    bool operator >=(Fraction& otherFrac) {
        double firstnum = (double)num / den;
        double secondnum = (double)otherFrac.num / otherFrac.den;

        return firstnum >= secondnum;
    }

};

ostream& operator << (ostream& stream, const Fraction& frac) {
    if (frac.den < 0)
    {
        if (frac.den < 0 && frac.num < 0)
        {
            stream << -frac.num << "/" << -frac.den;
            
        }

        else
        {
            stream << -frac.num << "/" << -frac.den;
        }
        
    }

    else if (frac.num == 0)
    {
        stream << 0;
    }

    else if (frac.num == frac.den)
    {
        stream << 1;
    }
    else
    {
        stream << frac.num << "/" << frac.den;
    }
    
    return stream;
};

#endif