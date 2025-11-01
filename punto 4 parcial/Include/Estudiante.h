#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H

#include <string>

/**
 * @brief Representa a un estudiante universitario.
 */
class Estudiante {
private:
    std::string nombre;      
    int programa;              
    float promedio;              
    int creditosAprobados;       

public:
    /**
     * @brief Constructor que inicializa todos los atributos del estudiante.
     * @param nombre Nombre del estudiante.
     * @param programa ID del programa académico.
     * @param promedio Promedio inicial del estudiante.
     * @param creditosAprobados Créditos aprobados inicialmente.
     */
    Estudiante(std::string nombre, int programa, float promedio, int creditosAprobados);

    /**
     * @brief Registra una nueva nota y actualiza el promedio ponderado.
     * @param nota Nota obtenida.
     * @param creditos Créditos de la asignatura.
     */
    void registrarNota(float nota, int creditos);

    /**
     * @brief Incrementa los créditos aprobados.
     * @param creditos Créditos a agregar.
     */
    void agregarCreditos(int creditos);

    /**
     * @brief Retorna un resumen en texto del estudiante.
     * @return Cadena con la información general.
     */
    std::string obtenerResumen() const;

    /**
     * @brief Verifica si el estudiante cumple los requisitos de grado.
     * @param creditosRequeridos Créditos necesarios para graduarse.
     * @return true si los cumple, false en caso contrario.
     */
    bool cumpleRequisitosGrado(int creditosRequeridos) const;
};

#endif // ESTUDIANTE_H