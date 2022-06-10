/*
 * System: COIN RADIO - Git Demo Calculator
 *
 * Security Clasification: -
 *
 * Original Programmer: Erik Martin
 *
 * Creation Date: 24th May 2022
 ***************************************************
 *
 * Description of the Program:
 * Simple calculator used to demonstrate git functionality
 *
 ***************************************************
 * REVISION HISTORY:
 *
 *
 ***************************************************
 */

/***************************************************
 * Header files required by this file
 **************************************************/
#include "Calculadora.h"

#include "math.h"

#include <iostream>

/***************************************************
 * Define directives
 **************************************************/

//-NONE-

/***************************************************
 * Local Type declarations used in this file
 **************************************************/

//-NONE-

/***************************************************
 * Global variables
 **************************************************/
//-NONE-

/***************************************************
 * Methods for class Calculadora
 **************************************************/

/**
* METHOD NAME: Calculadora()
* DESCRIPTION: This method is the class constructor
*/
Calculadora::Calculadora() {
    std::cout << "Iniciando la calculadora..." << std::endl;
    std::cout << "Calculadora iniciada" << std::endl;
}

/**
* METHOD NAME: print_device()
* DESCRIPTION: This method displays the device name
*/
void Calculadora::print_device(){
    std::cout << "Calculadora COIN" << std::endl;
}

/**
* METHOD NAME: show_operations()
* DESCRIPTION: This method displays the set of functions that our calculator can support
*/

void Calculadora::show_operations(){
    std::cout << "Las funciones que soporta esta calculadora son: " << std::endl;
    std::cout << "- Suma" << std::endl;
    std::cout << "- Resta" << std::endl;
    std::cout << "- Multiplicacion" << std::endl;
    std::cout << "- Division " << std::endl;
    std::cout << "- Modulo " << std::endl;
    std::cout << "- Logaritmo neperiano " << std::endl;
    std::cout << "- Raiz cuadrada " << std::endl;
    std::cout << "- Potencia " << std::endl;
    std::cout << "- Factorial " << std::endl;
}


/***************************************************
 * Function protypes for local functions
 **************************************************/

/**
* METHOD NAME: Suma()
* DESCRIPTION: This method performs the addition of two values
*
* @param value1 first value for the operation
* @param value2 second value for the operation
* @return int result of the operation performed
*/
double Calculadora::Suma(double value1,double value2){
    double result;
    result=value1+value2;
    return result;
}

/**
* FUNTION NAME: Resta()
* DESCRIPTION: This method performs the substraction of two values
*
* @param value1 first value for the operation
* @param value2 second value (to be substracted from first value) for the operation
* @return int result of the operation performed
*/
double Calculadora::Resta(double value1, double value2){
    double result;
    result=value1-value2;
    return result;
}

/**
* FUNTION NAME: Multiplicacion()
* DESCRIPTION: This method performs the product of two values
*
* @param value1 first value for the operation
* @param value2 second value for the operation
* @return int result of the operation performed
*/
double Calculadora::Multiplicacion(double value1,double value2){
    double result;
    result=value1*value2;
    return result;
}

/**
* FUNTION NAME: Division()
* DESCRIPTION: This method performs the division of two values
*
* @param value1 first value for the operation (to be divided by the second value)
* @param value2 second value for the operation
* @return int result of the operation performed
*/
double Calculadora::Division(double value1, double value2){
    double result;
    result=value1/value2;
    return result;
}

/**
* FUNTION NAME: Modulo()
* DESCRIPTION: This method provides the rest of the division of two values
*
* @param value1 first value for the operation (to be divided by the second value)
* @param value2 second value for the operation
* @return int remaining amount after the int division of the first value by the second one
*/
int Calculadora::Modulo(int value1, int value2){
    int result;
    result=value1%value2;
    return result;
}

/**
 * This method calculates de logarithm in base e
 * @param value1 value to compute its log
 * @return float result
 */
double Calculadora::logaritmoNeperiano(double value1)
{
    return log(value1);
}

/**
 * This method calculates the square root of a number
 * @param value number to calculate its sqrt
 * @return float result
 */
double Calculadora::raizCuadrada(double value)
{
    return sqrt(value);
}

/**
 * This method calculates the power of a number as base ^ exponente
 * @param base base of the operation
 * @param exponente power to calculate
 * @return float result
 */
double Calculadora::potencia(double base, double exponente)
{
    return pow(base, exponente);
}

/**
 * This method calculates the factorial of a number
 * @param value factorial to compute
 * @return int result
 */
int Calculadora::factorial(int value)
{
    int i;
    int factorial = 1;
    for(i = 1; i <= value; i++)
    {
        factorial = factorial * i;
    }
    return factorial;
}

/**
* METHOD NAME: ~Calculadora()
* DESCRIPTION: This method is the class destructor
*/
Calculadora::~Calculadora() {
    std::cout << "Se cierra la calculadora" << std::endl;
}