#include <iostream>
#include "clsCalculator.h"

using namespace std ;

int main() {

    system("cls") ;

    cout << "First Use : (With Object)" << endl ;

    clsCalculator <float> C(21 , 7) ;
    C.Addition() ;

    cout << C.Number1() << " + " << C.Number2() << " = " << C.Result() << endl ;
    
    C.Subtraction() ;

    cout << C.Number1() << " - " << C.Number2() << " = " << C.Result() << endl ;
    
    C.Multiplication() ;

    cout << C.Number1() << " * " << C.Number2() << " = " << C.Result() << endl ;
    
    C.Division() ;

    cout << C.Number1() << " / " << C.Number2() << " = " << C.Result() << endl ;
    
    cout << "\nSecond Use : (Without Object)" << endl ;

    float R = clsCalculator <float> ::Addition(21 , 7) ;

    cout << "21 + 7 = " <<  R << endl ;

    R = clsCalculator <float> ::Subtraction(21 , 7) ;

    cout << "21 - 7 = " <<  R << endl ;

    R = clsCalculator <float> ::Multiplication(21 , 7) ;

    cout << "21 * 7 = " <<  R << endl ;

    R = clsCalculator <float> ::Division(21 , 7) ;

    cout << "21 / 7 = " <<  R << endl ;

    return 0 ;
}