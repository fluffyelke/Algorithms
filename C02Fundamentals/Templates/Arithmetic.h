

/* 
 * File:   Arithmetic.h
 * Author: default
 *
 * Created on January 3, 2024, 3:46 PM
 */

#ifndef ARITHMETIC_H
#define ARITHMETIC_H

namespace myTemplates {
    
    template<class T>
    class Arithmetic {
    public:
        Arithmetic(T la, T lb);
        ~Arithmetic();
        
        T add();
        T sub();
    private:
        T a;
        T b;
    };

    template<class T>
    Arithmetic<T>::Arithmetic(T la, T lb) {
        a = la;
        b = lb;
    }

    template<class T>
    Arithmetic<T>::~Arithmetic() {
    }
    
    template<class T>
    T Arithmetic<T>::add() {
        return a + b;
    }
    
    template<class T>
    T Arithmetic<T>::sub() {
        return a - b;
    }
}
#endif /* ARITHMETIC_H */

