#include <iostream>
using namespace std;

int main(){
    int opc;
    cout<<"Seleccione el programa a ejecutar: "; cin>>opc;

    switch (opc) {

//ESTRUCTURAS DE CONTROL CONDICIONALES

//CALCULAR SI EL USUARIO ES MAYOR DE EDAD O NO
        case 1: cout<<"Calcular si el usuario es mayor de edad. ";
        int edad;
        cout << "Ingrese su edad: ";
        cin >> edad;

        if (edad >= 18) {
            cout << "Eres mayor de edad";
        } else cout << "Aun eres menor de edad";
        cout << "\n";
            break;
//DETERMINAR QUE NUMERO ES MAYOR
        case 2: cout<<"Determinar que numero es mayor. ";
        int num1, num2;
        cout << "Ingrese un Numero: ";
        cin >> num1;
        cout << "Ingrese otro Numero: ";
        cin >> num2;

        if (num1 > num2) {
            cout << num1 << " es mayor que " << num2 << endl;
        } else cout << num1 << " es menor que " << num2 << endl;
        cout << "\n";
            break;
//DETERMINAR SI EL NUMERO INGRESADO ES PAR O NO
        case 3: cout<<"Determinar si el numero ingresado es par. ";
        int Z;
        cout << "Ingrese un Numero Entero: ";
        cin >> Z;

        if (Z % 2 == 0) {
            cout << "El Numero ingresado es par";
        } else cout << "El Numero ingresado es impar";
        cout << "\n";
            break;
//ESTRUCUTRAS DE CONTROL ITERATIVAS

//CALCULAR FACTORIAL CON EL NUMERO INGRESADO
        case 4: cout<<"Calcular factorial con de un Numero. ";
        int N, y = 1;
        float factor;
        factor = 1;

        cout << "Ingrese un Numero: ";
        cin >> N;

        while (y <= N) {
            factor = factor * y;
            y++;
        }
        cout << "El Factorial del Numero ingresado es: " << factor << endl;
            break;

//MOSTRAR NUMEROS IMPARES

        case 5: cout<< "Mostrar numeros impares for. ";

            int i, dato;
             cout << "Ingrese un numero mayor a 10 y menor que 30: "; cin >> dato;

                for (int i = 1; i <= dato; i++) {
                    if (i % 2 == 1) {
                            cout << i << endl;
                        }
                    }
        break;


//MOSTRAR NUMEROS IMPARES CON  WHILE
        case 6: cout<<"Mostrar Numeros impares while.  ";

            int data;
                cout << "Ingrese un numero mayor a 10 y menor que 30: "; cin >> data;
                    int a = 1;
                    while (a <= data) {
                        if (a % 2 == 1) {
                            cout << a << endl;
                        }
                        a++;
                    }
            break;

//ESTRUCTURAS DE CONTROL DE SELECCION

//SELECCION DEL DIA DE LA SEMANA

    }
    switch (opc) {
        case 7: cout<<"Seleccion Dias de la semana. ";
        int D;

        cout << "Digita un Numero del 1-5: ";
        cin >> D;

        switch (D) {
            case 1:
                cout << "Lunes";
                break;
            case 2:
                cout << "Martes";
                break;
            case 3:
                cout << "Miercoles";
                break;
            case 4:
                cout << "Jueves";
                break;
            case 5:
                cout << "Viernes";
                break;
            default:
                cout << "El Numero ingresado no esta entre el rango de 1-5";
                break;
        }
    }

//SELECCIONAR EL PROGRAMA A EJECUTAR

        return 0;

}