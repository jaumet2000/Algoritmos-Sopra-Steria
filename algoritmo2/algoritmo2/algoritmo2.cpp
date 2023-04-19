//algoritmo realizado por Jaime Tena para el test básico de algorítmica de Sora Steria
//algoritmo nº2:

/*
Escriba un algoritmo que visualice una clasificación de 50 personas según edad y sexo. Deberá mostrar los siguientes resultados:
a.	Cantidad de personas mayores de edad (18 años o más).
b.	Cantidad de personas menores de edad.
c.	Cantidad de personas masculinas mayores de edad.
d.	Cantidad de personas femeninas menores de edad.
e.	Porcentaje que representan las personas mayores de edad respecto al total de personas.
f.	Porcentaje que representan las mujeres respecto al total de personas.

Utilice la instrucción LEER PERSONAS al inicio del programa para cargar los datos de las 50 personas en un variable, PERSONAS, que actúa como un vector de 50 posiciones.
Cada elemento de PERSONAS es de un tipo estructurado que dispone dos campos:
SEXO y EDAD.
*/


#include <iostream>


struct PERSONA 
{
    int edad;
    char sexo;
};
int main()
{
    

    PERSONA Lista_personas[50];//creamos lista con 50 huecos

    std::cout << "Rellene los datos de 50 personas:"<<std::endl;

    for (auto i = 0; i < 50; i++)//para cada persona
    {
        std::cout << "Persona " << i+1 << ": "<<std::endl;
        std::cout << "Edad: " ;//pedimos la edad
        std::cin >> Lista_personas[i].edad;
        std::cout << "Sexo: ";//pedimos el sexo que debe ser o f o m
        std::cin >> Lista_personas[i].sexo;
        std::cout << "" << std::endl;
    }

    int Personas_mayores=0;
    int Personas_menores=0;
    int Personas_masc_mayores=0;
    int Personas_fem_menores=0;
    int Cantidad_fem=0;


    for (auto i = 0; i < 50; i++)//recorremos todas las personas
    {
        if (Lista_personas[i].edad >= 18)//comprobamos la cantidad de +18
        {
            Personas_mayores++;

            if (Lista_personas[i].sexo == 'm')//y la cantidad de +18 masculina
            {
                Personas_masc_mayores++;
            }
        }
        else//cantidad de menores
        {
            Personas_menores++;

            if (Lista_personas[i].sexo == 'f')//cantidad de fem -18
            {
                Personas_fem_menores++;
            }
        }

        if (Lista_personas[i].sexo == 'f')//cantidad de chicas
        {
            Cantidad_fem++;
        }
    }

    std::cout << "Cantidad de personas mayores de edad (18 años o más): " << Personas_mayores << std::endl;
    std::cout << "Cantidad de personas menores de edad: " << Personas_menores << std::endl;
    std::cout << "Cantidad de personas masculinas mayores de edad: " << Personas_masc_mayores << std::endl;
    std::cout << "Cantidad de personas femeninas menores de edad: " << Personas_fem_menores << std::endl;

    float p_mayores = (float(Personas_mayores) / 50.f) * 100.f;
    float p_mujeres = (float(Cantidad_fem) / 50.f) * 100.f;

    std::cout << "Porcentaje que representan las personas mayores de edad respecto al total de personas: " << p_mayores << "%" << std::endl;
    std::cout << "Porcentaje que representan las mujeres respecto al total de personas: " << p_mujeres << "%" << std::endl;

}

