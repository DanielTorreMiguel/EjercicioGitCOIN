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
#include "math.h"

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
 * Function protypes for local functions
 **************************************************/

/**
* FUNTION NAME: Suma()
* DESCRIPTION: This function performs the addition of two values
*
* @param value1 first value for the operation
* @param value2 second value for the operation
* @return int result of the operation performed
*/
int Suma(int value1,int value2){
    int result;
    result=value1+value2;
    return result;
}

/**
* FUNTION NAME: Resta()
* DESCRIPTION: This function performs the substraction of two values
*
* @param value1 first value for the operation
* @param value2 second value (to be substracted from first value) for the operation
* @return int result of the operation performed
*/
int Resta(int value1, int value2){
    int result;
    result=value1-value2;
    return result;
}

/**
* FUNTION NAME: Multiplicacion()
* DESCRIPTION: This function performs the product of two values
*
* @param value1 first value for the operation
* @param value2 second value for the operation
* @return int result of the operation performed
*/
int Multiplicacion(int value1,int value2){
    int result;
    result=value1*value2;
    return result;
}

/**
* FUNTION NAME: Division()
* DESCRIPTION: This function performs the division of two values
*
* @param value1 first value for the operation (to be divided by the second value)
* @param value2 second value for the operation
* @return int result of the operation performed
*/
int Division(int value1, int value2){
    int result;
    result=value1/value2;
    return result;
}

/**
* FUNTION NAME: Modulo()
* DESCRIPTION: This function provides the rest of the division of two values
*
* @param value1 first value for the operation (to be divided by the second value)
* @param value2 second value for the operation
* @return int remaining amount after the int division of the first value by the second one
*/
int Modulo(int value1, int value2){
    int result;
    result=value1%value2;
    return result;
}

/**
 * This function calculates de logarithm in base e
 * @param value1 value to compute its log
 * @return float result
 */
float logaritmoNeperiano(float value1)
{
    return log(value1);
}

/**
 * This function calculates the square root of a number
 * @param value number to calculate its sqrt
 * @return float result
 */
float raizCuadrada(float value)
{
    return sqrt(value);
}

/**
 * This function calculates the power of a number as base ^ exponente
 * @param base base of the operation
 * @param exponente power to calculate 
 * @return float result
 */
float potencia(float base, float exponente)
{
    return pow(base, exponente);
}

/**
 * This function calculates the factorial of a number
 * @param value factorial to compute
 * @return int result
 */
int factorial(int value)
{
    int i;
    int factorial = 1;
    for(i = 1; i<=value; i++)
    {
        factorial = factorial * i;
    }
    return factorial;
}