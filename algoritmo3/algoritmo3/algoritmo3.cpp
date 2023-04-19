//algoritmo realizado por Jaime Tena para el test básico de algorítmica de Sora Steria
//algoritmo nº3:

/*
Desarrolle un algoritmo para el cálculo del salario de un trabajador. 
El importe liquidado (sueldo) depende de una tarifa o precio por hora establecida 
y de un condicionante sobre las horas trabajadas: si la cantidad de horas trabajadas 
es mayor a 40 horas, la tarifa se incrementa en un 50% para las horas extras. 
Calcular el sueldo recibido por el trabajador en base las horas trabajadas y la tarifa. 
Utilice las instrucciones LEER HORASTRABAJADAS y LEER TARIFA al inicio del programa para cargar los valores en las variables HORASTRABAJADAS y TARIFA.
*/

#include <iostream>

int main()
{
    float horas_trabajadas;
    float tarifa;

    float sueldo;

    std::cout << "Horas trabajadas: ";
    std::cin >> horas_trabajadas;//pedimos por consola el número
    std::cout << "precio por hora: ";
    std::cin >> tarifa;//pedimos por consola el número

    float horas_extra=0;
    float sueldo_extra=0;

    if (horas_trabajadas <= 40) //comprobamos si ha hecho horas extra
    {
        sueldo = horas_trabajadas * tarifa;
    }
    else 
    {
        horas_extra = horas_trabajadas - 40;
        sueldo_extra = tarifa * 1.5;
        sueldo = 40 * tarifa + horas_extra * sueldo_extra;
    }

    std::cout << "El trabajador ha realizado " << horas_trabajadas << " horas de las cuales " << horas_extra << " son horas extra y ha cobrado: " << sueldo << " de los cuales " << sueldo_extra*horas_extra << " son por horas extra";;
}
