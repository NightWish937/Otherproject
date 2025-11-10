//
// Ricardo Peña Hernández A01798798
//

#include <iostream>
using namespace std;

// Pide 20 números y cuenta cuántos son positivos, negativos o ceros
void cuenta20() {
    int positivos = 0, negativos = 0, ceros = 0;
    int num;

    for (int i = 1; i <= 20; i++) {
        cout << "Ingresa un numero: " << i << ":" << endl;
        cin >> num;

        if (num > 0)
            positivos++;
        else if (num < 0)
            negativos++;
        else
            ceros++;
    }
    cout << "Numeros positivos: " << positivos << endl;
    cout << "Numeros negativos: " << negativos << endl;
    cout << "Cantidad de ceros: " << ceros << endl;
}

// Muestra la tabla de multiplicar del número ingresado
void tablamultiplicar(int num) {
    cout << "Tabla de multiplicar del " << num << ":" << endl;
    for (int i = 1; i <= 10; i++) {
        cout << num << " x " << i << " = " << num * i << endl;
    }
}

// Pide varios números y muestra cuál es el menor
void menor(int numDatos) {
    int menor;
    int numero;

    cout << "Ingresa un numero: ";
    cin >> menor;

    for (int i = 2; i <= numDatos; i++) {
        cout << "Ingresa un numero: ";
        cin >> numero;

        if (numero < menor) {
            menor = numero;
        }
    }

    cout << "El numero mas chico es: " << menor << endl;
}

// Suma todos los múltiplos de 3 o 5 menores a 1000
void multiplos3o5() {
    int total = 0;
    for (int i = 1; i <= 999; i++) {
        if (i % 3 == 0 || i % 5 == 0)
            total += i;
    }
    cout << "El total de los multiplos de 3 o 5 menores a 1000 es: " << total << endl;
}

// Muestra el último número primo encontrado hasta el número ingresado
void primosNum() {
    int primototal = 0;
    int total = 0;
    cout << "Ingresa un numero: ";
    cin >> primototal;

    for (int i = 2; i <= primototal; i++) {
        bool esPrimo = true;
        for (int j = 2; j < i; j++) {
            if (i % j == 0) {
                esPrimo = false;
                break;
            }
        }
        if (esPrimo)
            total = i;
    }
    cout << "El numero primo final de " << primototal << " es: " << total << endl;
}

// Dibuja un rectángulo sólido con asteriscos
void cuadro1() {
    int ancho = 0;
    int alto = 0;

    cout << "Ingresa una altura: ";
    cin >> alto;
    cout << "Ingresa un ancho: ";
    cin >> ancho;

    for (int i = 0; i < ancho; i++) {
        for (int j = 0; j < alto; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

// Dibuja un rectángulo hueco con asteriscos y espacios
void cuadro2() {
    int alto = 0;
    int ancho = 0;
    cout << "Ingresa una altura: ";
    cin >> alto;
    cout << "Ingresa un ancho: ";
    cin >> ancho;

    for (int i = 0; i < alto; i++) {
        for (int j = 0; j < ancho; j++) {
            if (i == 0 || i == alto - 1 || j == 0 || j == ancho - 1)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }
}

// Dibuja varios rectángulos huecos separados por una línea vacía
void cuadro3() {
    int alto = 0;
    int ancho = 0;
    int numero = 0;

    cout << "Ingresa una altura: ";
    cin >> alto;
    cout << "Ingresa un ancho: ";
    cin >> ancho;
    cout << "Ingresa cuadrados a dibujar: ";
    cin >> numero;

    for (int y = 0; y < numero; y++) {
        for (int i = 0; i < alto; i++) {
            for (int j = 0; j < ancho; j++) {
                if (i == 0 || i == alto - 1 || j == 0 || j == ancho - 1)
                    cout << "* ";
                else
                    cout << "  ";
            }
            cout << endl;
        }
        cout << endl; // separación entre rectángulos
    }
}

// Dibuja varios rectángulos huecos pegados verticalmente
void cuadro4() {
    int alto = 0;
    int ancho = 0;
    int numero = 0;

    cout << "Ingresa una altura: ";
    cin >> alto;
    cout << "Ingresa un ancho: ";
    cin >> ancho;
    cout << "Ingresa cuadrados a dibujar: ";
    cin >> numero;

    for (int y = 0; y < numero; y++) {
        int inicio = (y == 0) ? 0 : 1; // evita repetir el borde superior

        for (int i = inicio; i < alto; i++) {
            for (int j = 0; j < ancho; j++) {
                if (i == 0 || i == alto - 1 || j == 0 || j == ancho - 1)
                    cout << "* ";
                else
                    cout << "  ";
            }
            cout << endl;
        }
    }
}

// Menú principal para seleccionar y ejecutar cada función
int main() {
    int opcion = 0;

    do {
        cout << "1. Numeros positivos, negativos y ceros" << endl;
        cout << "2. Suma de dos numeros" << endl;
        cout << "3. Menor de varios numeros" << endl;
        cout << "4. Multiplos de 3 o 5" << endl;
        cout << "5. Ultimo numero primo" << endl;
        cout << "6. Rectangulo de asteriscos" << endl;
        cout << "7. Rectangulo hueco" << endl;
        cout << "8. Varios rectangulos separados" << endl;
        cout << "9. Varios rectangulos pegados" << endl;
        cout << "Selecciona una opcion: ";
        cin >> opcion;
        cout << endl;

        switch (opcion) {
            case 1:
                cuenta20();
                break;
            case 2: {
                int n;
                cout << "Tabla del ?: ";
                cin >> n;
                tablamultiplicar(n);
                break;
            }
            case 3: {
                int n;
                cout << "Cuantos numeros vas a ingresar?: ";
                cin >> n;
                menor(n);
                break;
            }
            case 4:
                multiplos3o5();
                break;
            case 5:
                primosNum();
                break;
            case 6:
                cuadro1();
                break;
            case 7:
                cuadro2();
                break;
            case 8:
                cuadro3();
                break;
            case 9:
                cuadro4();
                break;
        }
    } while (opcion != 0);

    return 0;
}
