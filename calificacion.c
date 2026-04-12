<<<<<<< HEAD





















    // Promedio por estudiante
    printf("\nPromedio por Estudiante\n");
    for (int i = 0; i < estudiantes; i++) {
        float suma = 0;
        for (int j = 0; j < asignaturas; j++)
            suma += notas[i][j];
        printf("Estudiante %d: %.2f\n", i + 1, suma / asignaturas);
    }


  return 0;

}
=======
#include <stdio.h>

int main(int argc, char const *argv[]) 
{
    int estudiantes = 5;
    int asignaturas = 3;
    float notas[5][3];
>>>>>>> a4b87d560c6f67d3a73762c1b9307fdbff5ce6e6
