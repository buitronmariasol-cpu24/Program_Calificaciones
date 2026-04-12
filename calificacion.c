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






