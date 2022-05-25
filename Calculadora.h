/*
 * Calculadora.h
 *
 *  Created on: 17 may. 2022
 *      Author: acasas
 */

#ifndef CALCULADORA_H_
#define CALCULADORA_H_

#include "Dispositivo.h"

class Calculadora: public Dispositivo {
public:
    Calculadora();
    virtual void print_device() override;
    void show_operations();
    double Suma(double value1,double value2);
    double Resta(double value1, double value2);
    double Multiplicacion(double value1,double value2);
    double Division(double value1, double value2);
    int Modulo(int value1, int value2);
    double logaritmoNeperiano(double value1);
    double raizCuadrada(double value);
    double potencia(double base, double exponente);
    int factorial(int value);
    virtual ~Calculadora();
};

#endif /* CALCULADORA_H_ */