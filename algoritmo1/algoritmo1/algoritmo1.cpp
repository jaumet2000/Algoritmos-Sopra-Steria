//algoritmo realizado por Jaime Tena para el test básico de algorítmica de Sora Steria
//algoritmo nº1:

/*
Escriba un algoritmo que lea un número entero y determine si es par o impar. 
Si es par, que escriba todos los pares de manera descendiente desde sí mismo y hasta el cero. 
Si es impar, que escriba todos los impares de manera descendiente desde si sí mismo hasta el uno. 
Utilice la instrucción LEER NUMERO al inicio del programa para cargar un número en la variable NUMERO.
*/

#include <iostream>

int main()
{
    int x;
    std::cout << "Introduce un número entero: ";
    std::cin >> x;//pedir en cosola el número

    if (x % 2 == 0) //número par
    {
        std::cout << "Estos son los números pares descendentes desde " << x << " hasta 0:" << std::endl;

        for (auto i = x; i >= 0; i = i - 2)
        {

            std::cout << i << std::endl;
        }
    }
    else  //número impar
    {
        std::cout << "Estos son los números impares descendentes desde " << x << " hasta 1:" << std::endl;

        for (auto i = x; i >= 1; i = i - 2)
        {

            std::cout << i << std::endl;
        }
    }

}