




















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
