//VARIABLES 
//Pregunta 1.1 

#include <iostream>
using namespace std;

int main() {
   
    int numero1 = 10;
    int numero2 = 25;

    float decimal1 = 3.14f;
    float decimal2 = 2.71f;

    char letra = 'A';

    // Imprimir los valores en consola
    cout << "Valores de las variables:" << endl;
    cout << "Entero 1: " << numero1 << endl;
    cout << "Entero 2: " << numero2 << endl;
    cout << "Flotante 1: " << decimal1 << endl;
    cout << "Flotante 2: " << decimal2 << endl;
    cout << "Caracter: " << letra << endl;

    return 0;
}

//Pregunta 1.2 
//Los de datos como int, float y char nos ayudan a decirle a el computador qué tipo de información vamos a usar en un programa. Por ejemplo, si vamos a trabajar con números enteros, usamos int; si son decimales, usamos float, y si es una letra o símbolo, usamos char. Es importante saber esto para que el programa entienda bien lo que queremos hacer y no se confunda.

//OPERADORES 
//Pregunta 2.1 

#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Ingresa el primer número: ";
    cin >> a;

    cout << "Ingresa el segundo número: ";
    cin >> b;

    cout << "Suma: " << a + b << endl;
    cout << "Resta: " << a - b << endl;
    cout << "Multiplicación: " << a * b << endl;

    if (b != 0) {
        cout << "División: " << a / b << endl;
        cout << "Módulo: " << a % b << endl;
    } else {
        cout << "No se puede dividir ni calcular el módulo con cero." << endl;
    }

    return 0;
}
//PREGUNTA 2.2
//== significa es igual a
//!= significa es diferente de

//EJEMPLO
#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int b = 20;

    // Comparación de igualdad
    if (a == b) {
        cout << "a es igual a b" << endl;
    } else {
        cout << "a NO es igual a b" << endl;
    }

    // Comparación de desigualdad
    if (a != b) {
        cout << "a es diferente de b" << endl;
    } else {
        cout << "a NO es diferente de b" << endl;
    }

    return 0;
}

//PREGUNTA 2.3
//&& (AND) — Verdadero si ambas condiciones son verdaderas.
//|| (OR) — Verdadero si al menos una condición es verdadera.
//! (NOT) — Invierte el valor de verdad (verdadero a falso, y viceversa).

//EJEMPLO
#include <iostream>
using namespace std;

int main() {
    bool a = true;
    bool b = false;

    if (a && b) {
        cout << "a AND b es verdadero" << endl;
    } else {
        cout << "a AND b es falso" << endl;
    }

    if (a || b) {
        cout << "a OR b es verdadero" << endl;
    } else {
        cout << "a OR b es falso" << endl;
    }

    if (!b) {
        cout << "NOT b es verdadero" << endl;
    } else {
        cout << "NOT b es falso" << endl;
    }

    return 0;
}

//CONDICIONALES 
//PREGUNTA 3.1 

#include <iostream>
using namespace std;

int main() {
    int edad;

    cout << "Ingrese su edad: ";
    cin >> edad;

    if (edad >= 18) {
        cout << "Eres mayor de edad." << endl;
    } else {
        cout << "Eres menor de edad." << endl;
    }

    return 0;
}
//PREGUNTA 3.2
//la estructura else if se usa para probar múltiples condiciones de forma secuencia , Si la primera condición if es falsa se evalúa la siguiente condición else if y así sucesivamente hasta que alguna sea verdadera o se llegue al else final
//EJEMPLO:QuierO saber si un número es:
//Positivo
//Negativo
//O cero
//Usas
//if para saber si es positivo
//else if para saber si es negativo
//else para cuando es cero


//BUCLES 
//PREGUNTA 4.1
#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 10; i++) {
        cout << i << endl;
    }
    return 0;
}

//PREGUNTA 4.2
#include <iostream>
using namespace std;

int main() {
    int i = 10;
    while (i >= 1) {
        cout << i << endl;
        i--;
    }
    return 0;
}

//PREGUNTA 4.2
#include <iostream>
using namespace std;

int main() {
    int i = 2;  

    do {
        cout << i << endl;
        i += 2;  
    } while (i <= 20);

    return 0;
}

//ARRAYS :)
//PREGUNTA 5.1
#include <iostream>
using namespace std;

int main() {
    int numeros[5];  

    for (int i = 0; i < 5; i++) {
        cout << "Ingresa el valor para el elemento " << i << ": ";
        cin >> numeros[i];
    }

    cout << "Los valores ingresados son:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Elemento " << i << ": " << numeros[i] << endl;
    }

    return 0;
}
//PREGUNTA 5.2: Un array bidimensional es como una tabla con filas y columnas.
//Tiene dos índices para acceder a cada elemento: uno para la fila y otro para la columna.

//PREGUNTA 5.3 :(