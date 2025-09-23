#include <iostream>
#include <algorithm>
using namespace std;

/* Ejercicio 1: Mediana de un array */
int main_ej1() {
    int n;
    cout << "Ingrese el tamaño del arreglo: ";
    cin >> n;
    int arr[n];

    cout << "Ingrese los elementos:\n";
    for(int i=0; i<n; i++) cin >> arr[i];

    sort(arr, arr+n); // Ordenar

    double mediana;
    if(n % 2 == 0) 
        mediana = (arr[n/2 - 1] + arr[n/2]) / 2.0;
    else 
        mediana = arr[n/2];

    cout << "La mediana es: " << mediana << endl;
    return 0;
}

/* Ejercicio 2: Búsqueda binaria en un array ordenado */
int main_ej2() {
    int n, x;
    cout << "Ingrese tamaño del arreglo: ";
    cin >> n;
    int arr[n];

    cout << "Ingrese los elementos ordenados:\n";
    for(int i=0; i<n; i++) cin >> arr[i];

    cout << "Número a buscar: ";
    cin >> x;

    int ini=0, fin=n-1, mid;
    bool encontrado=false;

    while(ini <= fin){
        mid = (ini+fin)/2;
        if(arr[mid] == x){
            encontrado = true;
            break;
        }
        else if(arr[mid] < x) ini = mid+1;
        else fin = mid-1;
    }

    if(encontrado) cout << "Encontrado en la posición " << mid << endl;
    else cout << "No se encontró el número.\n";

    return 0;
}

/* Ejercicio 3: Transpuesta de una matriz */
int main_ej3() {
    int filas, cols;
    cout << "Ingrese filas y columnas: ";
    cin >> filas >> cols;

    int mat[50][50];
    cout << "Ingrese la matriz:\n";
    for(int i=0;i<filas;i++)
        for(int j=0;j<cols;j++)
            cin >> mat[i][j];

    cout << "Transpuesta:\n";
    for(int j=0;j<cols;j++){
        for(int i=0;i<filas;i++)
            cout << mat[i][j] << " ";
        cout << endl;
    }
    return 0;
}

/* Ejercicio 4: Sistema de inventario simple con arrays */
int main_ej4() {
    string productos[5];
    int stock[5];
    
    for(int i=0;i<5;i++){
        cout << "Producto " << i+1 << ": ";
        cin >> productos[i];
        cout << "Cantidad: ";
        cin >> stock[i];
    }

    cout << "\n=== Inventario ===\n";
    for(int i=0;i<5;i++){
        cout << productos[i] << " -> " << stock[i] << " unidades\n";
    }
    return 0;
}

/* Ejercicio 5: Ordenamiento por selección */
int main_ej5() {
    int n;
    cout << "Ingrese tamaño del arreglo: ";
    cin >> n;
    int arr[n];

    cout << "Ingrese elementos:\n";
    for(int i=0; i<n; i++) cin >> arr[i];

    for(int i=0; i<n-1; i++){
        int minIdx = i;
        for(int j=i+1;j<n;j++)
            if(arr[j] < arr[minIdx])
                minIdx = j;
        swap(arr[i], arr[minIdx]);
    }

    cout << "Ordenado: ";
    for(int i=0;i<n;i++) cout << arr[i] << " ";
    cout << endl;
    return 0;
}

/* Ejercicio 6: Encontrar elementos duplicados */
int main_ej6() {
    int n;
    cout << "Ingrese tamaño del arreglo: ";
    cin >> n;
    int arr[n];
    cout << "Ingrese elementos:\n";
    for(int i=0;i<n;i++) cin >> arr[i];

    cout << "Duplicados: ";
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i] == arr[j]){
                cout << arr[i] << " ";
                break;
            }
        }
    }
    cout << endl;
    return 0;
}

/* Ejercicio 7: Tres en raya usando arrays bidimensionales */
int main_ej7() {
    char t[3][3] = { {' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '} };
    int fila, col;
    char turno = 'X';

    for(int mov=0; mov<9; mov++){
        cout << "\nTurno de " << turno << " (fila y columna 0-2): ";
        cin >> fila >> col;

        if(fila>=0 && fila<3 && col>=0 && col<3 && t[fila][col] == ' '){
            t[fila][col] = turno;
            turno = (turno == 'X') ? 'O' : 'X';
        } else {
            cout << "Casilla ocupada o inválida!\n";
            mov--;
        }

        // Mostrar tablero
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++) cout << t[i][j] << " | ";
            cout << endl;
        }
    }
    return 0;
}
