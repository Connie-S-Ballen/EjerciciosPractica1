#include <iostream>
#include <vector>
#include <fstream>
#include "Estudiante.h"

int main() {
    std::vector<Estudiante> estudiantes;

    estudiantes.push_back(Estudiante("Juan Pérez", 101, 3.5, 90));
    estudiantes.push_back(Estudiante("María López", 102, 4.0, 110));

    estudiantes[0].registrarNota(4.2, 3);
    estudiantes[1].registrarNota(3.8, 2);

    for (const auto& e : estudiantes) {
        std::cout << e.obtenerResumen() << std::endl;
    }

    float suma = 0;
    for (const auto& e : estudiantes)
        suma += e.cumpleRequisitosGrado(100) ? e.cumpleRequisitosGrado(100) : 0;
    return 0;
}
