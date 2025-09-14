//
// Created by Usuario on 11/09/2025.
//

#include "funciones.h"
#include <iostream>
#include <vector>
using namespace std;
//se desarrolla la funcion

void ejercicio1() { //Declaracion Funcion.
    cout <<"Ejercicio 1" << endl; // titulo del ejercicio
    vector<double>notas; //Crea una lista
    double nota; //crea la variable nota

    cout <<"Ingrese las calificaciones de 8 estudiantes" << endl; //mensaje para pedir calificaciones

    for (int i = 0; i < 8; i++) { //ciclo for que pide las notas
        cout <<"Ingrese un numero entero: ";
        cout <<"Nota " <<(i+1)<<": "; //da la nota con el numero de nota
        cin >> nota;
        notas.push_back(nota); //guarda en la lista
    }

    int aprobados = 0, reprobados = 0, exelentes =0; //declara las variables
    double suma = 0; //declara la variable suma y la deja en 0

    for (int i =0; i < 8; i++) { //crea un ciclo for para que repase la lista y coloque las notas donde deben ir
        suma += notas[i];//suma las notas que estan en la lista
        if (notas[i] >= 4.5) { //Mira si nota esta en 4.5 o superior
            exelentes++;
        }
        if (notas[i] >= 3.0) { //Revisa si nota es 3 o mayor
            aprobados++;
        } else {
            reprobados++; //Si no se cumple nada, lo pondra en reprobados
        }
    }
    double promedio = (suma/8); //realiza la divicion para realizar el promedio

    cout <<"Cantidad de estudiantes aprobados: " <<aprobados <<endl;
    cout <<"Cantidad de estudiantes reprobados: " <<reprobados <<endl;
    cout <<"Cantidad de estudiantes exelentes: " <<exelentes <<endl;
    cout <<"Promedio de los estudiantes: " <<promedio <<endl;
}

void ejercicio2() {
    cout<<"Ejercicio 2"<<endl; //Titulo del ejercicio
    int Edad; //Variable edad
    int TotalPersonas = 0, Jovenes = 0, Perfectas = 0; //defines variables, total personas, jovenes y notas perfectas
    double SumaCalificaciones = 0; //variable donde se suman las calificaciones iniciando en 0
    double Calificacion; //variable de las calificaciones

    cout << "Ingrese la edad (si si pone 0 el progrma se acaba";
    cin >> Edad; //cin pide la edad, es como un input

    while (Edad !=0) { //ciclo que ayuda a solicite la edad mientras la edad sea 0, mientras sea diferente a cero el ciclo continua
        cout << "Ingresar la calificacion, de 1 a 10";
        cin >> Calificacion; //pide la calificacion

        TotalPersonas++;
        SumaCalificaciones += Calificacion;

        if (Edad >= 18 && Edad <= 25) Jovenes++; //define si son jovenes o no
        if (Calificacion == 10) Perfectas++;// define si es calificacion perfecta o no

        cout << "Ingresar la edad 0 para terminar: ";
        cin >> Edad; //solicita la edad
    }
    if (TotalPersonas >0) { // este if es para que si la primera persona ingresa 0, entonces el programa se acabe.
        cout <<"Total Personas encuestadas: " <<TotalPersonas<<endl;
        cout <<"Jovenes encuestadas (18 a 25): " <<Jovenes<<endl;
        cout <<"Promedio calificaciones: " <<(SumaCalificaciones / TotalPersonas)<<endl;
        cout <<"Cantidad de calificaciones perfectas: " <<Perfectas<<endl;
    } else {
        cout <<"No se ingresaron datos programa finalizado." << endl;
    }
}

void ejercicio3() {
    cout<<"Ejercicio 3"<<endl; //Titulo del ejercicio
    int n; //variable n
    cout << "Ingresar la cantidad de numeros a evaluar: ";
    cin >> n; //solicita n

    vector<int> numeros(n); //es para crear una lista en donde se guardan los numeros.
    cout <<"Ingresar la secuencia de numeros" <<endl;
    for (int i = 0; i < n; i++) {
        cin >> numeros[i]; //solicita y guarda los numeros.
    }

    bool ascendente = true; //crea una variable booleana para saber si es o no ascendente.
    for (int i = 1; i < n; i++) { //asi se verifica si es o no ascendente
        if (numeros[i] <= numeros[i-1]) {
            ascendente = false;
            break;
        }
    }
    if (ascendente) cout <<"La secuencia de numeros es estrictamente acendente"<<endl;
    else cout <<"La secuencia de numero No fue estrictamente ascedente. " << endl;
}

void ejercicio4() {
    cout<<"Ejercicio 4"<<endl; //Titulo del ejercicio

    double Precio; //variable para el precio
    int Cantidad; //variable para la cantidad

    cout <<"Ingresa el precio unitario del producto";
    cin >> Precio; //solicita precio
    cout << "Ingresar la cantidad de unidades que se van a comprar";
    cin >> Cantidad; //solicita cantidad

    double Descuento = 0.0; //define la variable descuento en 0
    if (Cantidad >= 1 && Cantidad <= 10) Descuento = 0; //define los posibles despuestos.
    else if (Cantidad <= 20) Descuento = 0.05;
    else if (Cantidad <= 50) Descuento = 0.10;
    else Descuento = 0.15;

    double Total = Precio * Cantidad; //crea variable del total al pagar
    double TotalConDescuento = Total - (Total * Descuento); //crea la variable de total con el descuento

    cout << "Descuento aplicado: "<<(Descuento * 100)<<"%"<<endl;
    cout << "Total a pagae es: "<<TotalConDescuento <<endl;

}

void ejercicio5() { //Profe este punto no lo entendi muy bien, utilize IA para poder entenderlo full pero este punto fue enredado mucho,
    cout<<"Ejercicio 5"<<endl;//Titulo del ejercicio
    string palabra;
    cout << "Ingrese una palabra en minusculas: ";
    cin >> palabra;

    bool encontrado = false;
    for (int i = 0; i < palabra.size(); i++) {
        char c = palabra[i];
        int contador = 0;

        for (int j = 0; j < palabra.size(); j++) {
            if (palabra[j] == c) contador++;
        }

        if (contador == 1) {
            cout << "El primer caracter no repetido es: " << c << endl;
            encontrado = true;
            break;
        }
    }

    if (!encontrado) {
        cout << "Todos los caracteres se repiten." << endl;
    }
}

void ejercicio6() { //La ayuda de la inteligencia artificial fue minima, solo fue explicativa en lo que debia hacer o la logica
    cout<<"Ejercicio 6"<<endl;//titulo del ejercicio
    int n;
    cout << "Ingrese un numero entero n: ";
    cin >> n;

    int a = 0, b = 1;

    cout << "Secuencia Fibonacci: ";
    for (int i = 0; i < n; i++) {
        cout << a << " ";
        int temp = a + b;
        a = b;
        b = temp;
    }
    cout << endl;
}
