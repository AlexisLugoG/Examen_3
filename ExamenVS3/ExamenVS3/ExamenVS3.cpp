#include <iostream>
#include <conio.h>
#include <stdlib.h>

int main()
{
#include <iostream>

    

    int numero = 5;
    std::cout << "El factorial de " << numero << " es " << factorial(numero) << std::endl;
    return 0;


}

// Función recursiva para calcular el factorial
unsigned long long factorial(int n) {
    if (n <= 1) // Caso base: el factorial de 0 y 1 es 1
        return 1;
    else
        return n * factorial(n - 1); // Caso recursivo
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
