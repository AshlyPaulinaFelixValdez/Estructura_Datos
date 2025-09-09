// recorrido arreglo por columna

using system;

class program
{
    static void main()
    {
        int[,] matriz = {
            {1, 2, 3},
            {4, 5, 6},
            {7, 8, 9}
        };

        int filas = matriz.getlength(0); //cantidad de filas
        int columnas = matriz.getlength(1); // cantidad de columnas

        for (int j = 0; j < columnas; j++) // recorrer columnas
        {
            for (int i = 0; i < filas; i++) // recorrerr filas dentro de cada columna
            {
                console.write(matriz[i, j] + " ");
            }
            console.writeline(); // salto de linea al terminar cada columna
        }
    }
}