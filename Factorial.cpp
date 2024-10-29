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


