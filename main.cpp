//============================================================================
// Name        : main.cpp
// Author      : Alvaro Casas
// Version     :
// Copyright   : Your copyright notice
// Description : test class Calculadora
//============================================================================

#include "Calculadora.h"

#include <iostream>
#include <string>
#include <limits>

using namespace std;



int main() {
    Calculadora c;
    c.show_operations();
    double a{0.0}, b{0.0};
    int a_int{0}, b_int{0};
    string operador;
    char k_exit{'n'};
    bool exit{false};

    while(!exit)
    {
        cout << "Ingrese la operacion que quieres hacer: ";
        cin >> operador;

        if (operador == "Suma" || operador == "suma")
        {
            cout << "Ingrese el primer numero: ";
            cin >> a;
            cout << "Ingrese el segundo numero: ";
            cin >> b;
            cout << a << " + " << b << " = " << c.Suma(a, b) << endl;
        }
        else if (operador == "Resta" || operador == "resta")
        {
            cout << "Ingrese el primer numero: ";
            cin >> a;
            cout << "Ingrese el segundo numero: ";
            cin >> b;
            cout << a << " - " << b << " = " << c.Resta(a, b) << endl;
        }
        else if (operador == "Multiplicacion" || operador == "multiplicacion")
        {
            cout << "Ingrese el primer numero: ";
            cin >> a;
            cout << "Ingrese el segundo numero: ";
            cin >> b;
            cout << a << " * " << b << " = " << c.Multiplicacion(a, b) << endl;
        }
        else if (operador == "Division" || operador == "division")
        {
            cout << "Ingrese el primer numero: ";
            cin >> a;
            cout << "Ingrese el segundo numero: ";
            cin >> b;
            cout << a << " / " << b << " = " << c.Division(a, b) << endl;
        }
        else if (operador == "Modulo" || operador == "modulo")
        {
            cout << "Ingrese el primer numero entero: ";
            cin >> a_int;
            cout << "Ingrese el segundo numero entero: ";
            cin >> b_int;
            cout << a << " % " << b << " = " << c.Modulo(a, b) << endl;
        }
        else if (operador == "Logaritmo neperiano" || operador == "logaritmo neperiano")
        {
            cout << "Ingrese el numero: ";
            cout <<" ln(" << a << ") = " << c.logaritmoNeperiano(a) << endl;
        }
        else if (operador == "Raiz cuadrada" || operador == "raiz cuadrada")
        {
            cout << "Ingrese el numero: ";
            cout <<" sqrt(" << a << ") = " << c.raizCuadrada(a) << endl;
        }
        else if (operador == "Potencia" || operador == "potencia")
        {
            cout << "Ingrese el primer numero: ";
            cin >> a;
            cout << "Ingrese el segundo numero: ";
            cin >> b;
            cout << a << " ^ " << b << " = " << c.potencia(a, b) << endl;
        }
        else if (operador == "Factorial" || operador == "factorial")
        {
            cout << "Ingrese el numero entero: ";
            cin >> a;
            cout << a << "!" <<" = " << c.factorial(a) << endl;
        }
        else{
            cout << "No existe esa operacion " << endl;
        }

        std::cout << "Ingrese Y si quieres salir de la calculadora u otra tecla para continuar" << std::endl;
        cin >> k_exit;
        if (k_exit == 'Y' || k_exit == 'y')
            exit = true;

    }


    return 0;
}