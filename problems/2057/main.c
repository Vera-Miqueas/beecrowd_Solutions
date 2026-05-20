#include <iostream>

using namespace std;

int main() {
    int hora_salida, tiempo_viaje, zona_horaria;
    cin >> hora_salida >> tiempo_viaje >> zona_horaria;

    int nueva_hora = (hora_salida + tiempo_viaje + zona_horaria) % 24;

    if(nueva_hora < 0){
        nueva_hora += 24;
    }

    cout << nueva_hora << endl;
    return 0;
}