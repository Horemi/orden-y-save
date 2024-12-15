#ifndef VINCULARCUIDADOR_H
#define VINCULARCUIDADOR_H

#include <iostream>
#include "DbRegister.h"

using namespace std;

inline void vincularCuidadores();
void MenuVinCuidador();

inline void vincularCuidadores() {
    string codigoCuidador;
    cout << "Ingrese el codigo del paciente: ";
    cin >> codigoCuidador;
    system("cls");
    string nombreCuidador= buscarCuidadorPorCodigo(codigoCuidador);

    if (!nombreCuidador.empty()) {
        cout << "Exitosamente vinculado a " << nombreCuidador << "." << endl;
        MenuVinCuidador();
    }
    else {
        cout << "No se encontró un paciente con el código ingresado." << endl;
    }
}
void MenuVinCuidador() {
    int option;
    string mensaje;
    do {
        cout << "\t*-*-*-*-*-*-*\t" << endl;
        cout << "\tHealth-Grand\t" << endl;
        cout << "\t 1.Chat con Cuidador\t" << endl;
        cout << "\t 2.Mandar alerta\t" << endl;
        cout << "\t 3. perfilCuidador" << endl;
        cout << "\t0.Salir\t" << endl;
        cout << "\t*-*-*-*-*-*-*\t" << endl;
        cin >> option;
        cin.ignore();
        system("cls");
        switch (option) {
        case 1:
            cout << "Escribe mensaje: " << endl;
            getline(cin, mensaje);
            cin.ignore();
            system("cls");
            cout << "Mensaje enviado...." << endl;
            break;
        case 2:
            cout << "Mandando alerta...." << endl;
            break;
        case 0:
            break;
        default:
            cout << "\tOpción no permitida";
            break;
        }
    } while (option != 0);
}

#endif
