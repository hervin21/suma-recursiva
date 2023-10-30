#include <iostream>

int sumarecursiva(int n) {
    if (n <= 9) {
        return n;
    }
    else {
        return sumarecursiva(n / 10) + n % 10;
    }
}

int main() {
    int n;
    std::cout << "Ingresa un numero entero: ";
    std::cin >> n;

    int resultado = sumarecursiva(n);
    std::cout << "La suma de los digitos de " << n << " es: " << resultado << std::endl;

    return 0;
}