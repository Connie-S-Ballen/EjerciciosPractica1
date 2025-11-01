#include "Estudiante.h"
#include <sstream>

Estudiante::Estudiante(std::string nombre, int programa, float promedio, int creditosAprobados)
    : nombre(nombre), programa(programa), promedio(promedio), creditosAprobados(creditosAprobados) {}

void Estudiante::registrarNota(float nota, int creditos) {
    promedio = ((promedio * creditosAprobados) + (nota * creditos)) / (creditosAprobados + creditos);
    creditosAprobados += creditos;
}

void Estudiante::agregarCreditos(int creditos) {
    creditosAprobados += creditos;
}

std::string Estudiante::obtenerResumen() const {
    std::ostringstream ss;
    ss << "Nombre: " << nombre << " | Programa: " << programa
       << " | Promedio: " << promedio
       << " | Créditos aprobados: " << creditosAprobados;
    return ss.str();
}

bool Estudiante::cumpleRequisitosGrado(int creditosRequeridos) const {
    return creditosAprobados >= creditosRequeridos;
}
