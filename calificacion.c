#include <stdio.h>
int main(int argc, char const *argv[]) 
{
    int estudiantes = 5;
    int asignaturas = 3;
    float notas[5][3];
// Ingresar calificaciones 
// Michelle Altamirano
    for (int i = 0; i < estudiantes; i++) {
         printf("\nEstudiante %d\n", i + 1);
          for (int j = 0; j < asignaturas; j++) {
       do { 
         printf("  Asignatura %d: ", j + 1); 
          scanf("%f", &notas[i][j]); 
           if (notas[i][j] < 0 || notas[i][j] > 10)
           printf("  Error: ingresa un valor entre 0 y 10.\n");
             } while (notas[i][j] < 0 || notas[i][j] > 10);
                 }
    }
// Promedio por estudiante
//Maria Sol Buitron
    printf("\nPromedio por Estudiante\n");
    for (int i = 0; i < estudiantes; i++) {
        float suma = 0;
        for (int j = 0; j < asignaturas; j++)
            suma += notas[i][j];
        printf("Estudiante %d: %.2f\n", i + 1, suma / asignaturas);
    }
 // Promedio por asignatura
//Michelle ALtamirano
    printf("\nPromedio por Asignatura\n");
    for (int j = 0; j < asignaturas; j++) {
        float suma = 0;
        for (int i = 0; i < estudiantes; i++)
            suma += notas[i][j];
        printf("Asignatura %d: %.2f\n", j + 1, suma / estudiantes);
    }

// Calificacion mas alta y baja por estudiante
//Maria Sol Buitron
    printf("\nCalificacion mas alta y baja por Estudiante\n");
    for (int i = 0; i < estudiantes; i++) {
        float alta = notas[i][0], baja = notas[i][0];
        for (int j = 1; j < asignaturas; j++) {
            if (notas[i][j] > alta) alta = notas[i][j];
            if (notas[i][j] < baja) baja = notas[i][j];
        }
        printf("Estudiante %d -> Mas alta: %.2f  Mas baja: %.2f\n", i + 1, alta, baja);
    }
    // Calificacion mas alta y baja por asignatura
//Michelle Altamirano
    printf("\nCalificacion mas alta y baja por Asignatura\n");
    for (int j = 0; j < asignaturas; j++) {
        float alta = notas[0][j], baja = notas[0][j];
        for (int i = 1; i < estudiantes; i++) {
            if (notas[i][j] > alta) alta = notas[i][j];
            if (notas[i][j] < baja) baja = notas[i][j];
        }
        printf("Asignatura %d -> Mas alta: %.2f  Mas baja: %.2f\n", j + 1, alta, baja);
    }

    // Aprobados y reprobados
    //Maria Sol Buitron
    printf("\nAprobados y Reprobados por Asignatura\n");
    for (int j = 0; j < asignaturas; j++) {
        int aprobados = 0, reprobados = 0;
        for (int i = 0; i < estudiantes; i++) {
            if (notas[i][j] >= 6) aprobados++;
            else reprobados++;
        }
        printf("Asignatura %d -> Aprobados: %d  Reprobados: %d\n", j + 1, aprobados, reprobados);
    }

    return 0;
}







