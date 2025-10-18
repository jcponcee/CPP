/Juan Camilo Ponce 
/SECCION A
//1. B
//2. B
//3. B
//4. C
//5. B
//6. C
//7. A
//8. B
//9. B
//10. A

/SECCION B
//1. 11
//2. 012
//3. PAR
//4. 321
//5. 2200

/SECCION C
//C1
#include <iostream>
#include <string>

int max3(int a, int b, int c) {
    if (a >= b && a >= c) return a;
    else if (b >= a && b >= c) return b;
    else return c;
}

//C2
#include <iostream>
#include <string>

int sumaRango(int a, int b) {
    int suma = 0;
    for (int i = a; i <= b; ++i) {
        suma += i;
    }
    return suma;
}

//C3
#include <iostream>
#include <string>

bool contieneDigito(int n, int d) {
    if (n == 0) return (d == 0);
    while (n > 0) {
        if (n % 10 == d) return true;
        n /= 10;
    }
    return false;
}

//C4
#include <iostream>
#include <string>

void tablaMultiplicar(int n) {
    for (int i = 1; i <= 10; ++i) {
        std::cout << n << " x " << i << " = " << (n * i) << std::endl;
    }
}
