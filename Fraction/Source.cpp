#include "Fraction.h"

int main() {
    Fraction x(1, -2);
    Fraction y(1, 1);

    
    /*
    cout << "x.getNum(): " << x.getNum() << endl;
    cout << "x.getDen(): " << x.getDen() << endl;

    Fraction z;
    z.setNum();
    z.setDen();

    cout << "z: " << z << endl;

    */
    
    cout << "x: " << x << endl;
    cout << "y: " << y << endl;
    cout << "" << endl;
    
    cout << x << " + " << y << " = " << x + y << endl;
    cout << x << " - " << y << " = " << x - y << endl;
    cout << x << " * " << y << " = " << x * y << endl;
    cout << x << " / " << y << " = " << x / y << endl;

    if (x == y) {
        cout << "x==y is true" << endl;
    }
    else {
        cout << "x==y is false" << endl;
    }
    
    if (x != y) {
        cout << "x!=y is true" << endl;
    }
    else {
        cout << "x!=y is false" << endl;
    }

    if (x < y) {
        cout << "x is less than y" << endl;
    }
    else {
        cout << "x is not less than y" << endl;
    }

    if (x > y) {
        cout << "x is greater than y" << endl;
    }
    else {
        cout << "x is not greater than y" << endl;
    }

    if (x <= y) {
        cout << "x is less than or equal to y" << endl;
    }
    else {
        cout << "x is greater than y" << endl;
    }

    if (x >= y) {
        cout << "x is greater than or equal to y" << endl;
    }
    else {
        cout << "x is less than y" << endl;
    }



    return 0;
}

