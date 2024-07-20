#pragma once

#include <iostream>

using namespace std ;

template <class T> class clsCalculator {

private :
    
    T _Number1 , _Number2 , _Result = 0 ;

public :

    clsCalculator(T Num1 = 0 , T Num2 = 0) {

        _Number1 = Num1 ;
        _Number2 = Num2 ;
    }

    T Number1() {

        return _Number1 ;
    }

    void SetNumber1(T Number1) {

        _Number1 = Number1 ;
    }

    T Number2() {

        return _Number2 ;
    }

    T Result() {

        return _Result ;
    }

    void SetNumber2(T Number2) {

        _Number1 = Number2 ;
    }

    static T Addition(T Number1 , T Number2) {

        return Number1 + Number2 ;
    }

    void Addition() {

        _Result = Addition(this->Number1() , this->Number2()) ;
    }

    static T Subtraction(T Number1 , T Number2) {

        return Number1 - Number2 ;
    }

    void Subtraction() {

        _Result = Subtraction(this->Number1() , this->Number2()) ;
    }

    static T Multiplication(T Number1 , T Number2) {

        return Number1 * Number2 ;
    }

    void Multiplication() {

        _Result = Multiplication(this->Number1() , this->Number2()) ;
    }

    static T Division(T Number1 , T Number2) {

        if (Number2 == 0)
            return 0 ;

        return Number1 / Number2 ;
    }

    bool Division() {

        if (this->Number2() == 0)
            return false ;
        
        _Result = Division(this->Number1() , this->Number2()) ;
        return true ;
    }

    void Addition(T Num) {

        _Result += Num ;
    }

    void Subtraction(T Num) {

        _Result -= Num ;
    }

    void Multiplication(T Num) {

        _Result *= Num ;
    }

    bool Division(T Num) {

        if (Num == 0)
            return false ;
        
        _Result /= Num ;
        return true ;
    }

    
} ;