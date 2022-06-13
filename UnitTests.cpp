//============================================================================
// Name        : main.cpp
// Author      : Daniel Torre
// Version     :
// Copyright   : Your copyright notice
// Description : Unit Tests
//============================================================================

#include <iostream>
#include <string>
#include <limits>
#include <math.h>

#include "Calculadora.h"

using namespace std;
void assert(bool condition, char *err_msg)
{
    if (!condition)
    {
        cerr << err_msg << endl;
    }
}

void test_print_device()
{
    Calculadora c = Calculadora();

    std::ostringstream oss;
    c.print_device(oss);
    assert(oss && oss.str() == "Calculadora COIN", "test print_device failed!");
    cerr << "Print_device tests done" <<endl;
}

void test_show_operations()
{
    Calculadora c = Calculadora();

    std::ostringstream oss;
    c.show_operations(oss);
    assert(oss && oss.str() == "Las funciones que soporta esta calculadora son:\n- Suma\n- Resta\n- Multiplicacion\n- Division\n- Modulo\n- Logaritmo neperiano\n- Raiz cuadrada\n- Potencia\n- Factorial", "test show_operations failed!");
    cerr << "Show_operations tests done" <<endl;

}

void test_log()
{
    double valor;
    Calculadora c = Calculadora();
    valor = c.logaritmoNeperiano(0.0);
    assert(valor == 0, "Test ln(0) failed!");

    valor = c.logaritmoNeperiano(1.0);
    assert(valor == 0, "Test ln(0) failed");

    valor = c.logaritmoNeperiano(M_E);
    assert(valor == 1, "test ln(e) failed");
    cerr << "Ln tests done" <<endl;
}

void test_pow()
{
    double valor;
    Calculadora c;
    valor = c.potencia(2, 0);
    assert(valor == 1, "test pow(2,0) failed");

    valor = c.potencia(5, 1);
    assert(valor == 5, "test pow(5,1) failed");

    valor = c.potencia(4, 4);
    assert(valor == 256, "test pow(4,4) failed");

    cerr << "pow tests done" <<endl;
}

void test_sqrt()
{
    double valor;
    Calculadora c;
    valor = c.raizCuadrada(1);
    assert(valor == 1, "test sqrt(1) failed");

    valor = c.raizCuadrada(36);
    assert(valor == 6, "test sqrt(36) failed");

    cerr << "sqrt tests done" <<endl;
}

void test_fact()
{
    int valor;
    Calculadora c;
    valor = c.factorial(0);
    assert(valor == 1, "Test factorial(0) failed");

    valor = c.factorial(1);
    assert(valor == 1, "Test factorial(1) failed");

    valor = c.factorial(5);
    assert(valor == 120, "Test factorial(5) failed");

    cerr << "factorial tests done" <<endl;
}


int main()
{
    cout << "Pruebas unitarias";
    test_print_device();
    test_show_operations();
    test_log();
    test_pow();
    test_sqrt();
    test_fact();
}
