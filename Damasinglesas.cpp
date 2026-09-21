#include <iostream>
using namespace std;

const int N = 8;

// Mostrar tablero
void mostrarTablero(char tablero[N][N]) {
    cout << "\n    1 2 3 4 5 6 7 8\n";
    cout << "   -----------------\n";

    for (int i = 0; i < N; i++) {
        cout << i + 1 << " | ";

        for (int j = 0; j < N; j++) {
            cout << tablero[i][j] << " ";
        }

        cout << "\n";
    }
}

// Inicializar tablero
void inicializar(char tablero[N][N]) {
    // Llenar todo con espacios
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            tablero[i][j] = '.';
        }
    }

    // Fichas negras
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < N; j++) {
            if ((i + j) % 2 == 1)
                tablero[i][j] = 'N';
        }
    }

    // Fichas blancas
    for (int i = 5; i < 8; i++) {
        for (int j = 0; j < N; j++) {
            if ((i + j) % 2 == 1)
                tablero[i][j] = 'B';
        }
    }
}

// Verificar si una posición está dentro del tablero
bool dentro(int fila, int columna) {
    return fila >= 0 && fila < N &&
           columna >= 0 && columna < N;
}

// Mover una ficha
bool mover(char tablero[N][N], int f1, int c1, int f2, int c2, char jugador) {

    // Verificar posiciones
    if (!dentro(f1, c1) || !dentro(f2, c2))
        return false;

    // Verificar que la ficha sea del jugador
    if (tablero[f1][c1] != jugador)
        return false;

    // El destino debe estar vacío
    if (tablero[f2][c2] != '.')
        return false;

    int df = f2 - f1;
    int dc = c2 - c1;

    // Movimiento normal: una diagonal
    if (abs(df) == 1 && abs(dc) == 1) {

        // Negras avanzan hacia abajo
        if (jugador == 'N' && df == 1) {
            tablero[f2][c2] = jugador;
            tablero[f1][c1] = '.';
            return true;
        }

        // Blancas avanzan hacia arriba
        if (jugador == 'B' && df == -1) {
            tablero[f2][c2] = jugador;
            tablero[f1][c1] = '.';
            return true;
        }
    }

    // Captura: saltar una ficha
    if (abs(df) == 2 && abs(dc) == 2) {

        int medioF = (f1 + f2) / 2;
        int medioC = (c1 + c2) / 2;

        // Verificar que la ficha del medio sea enemiga
        if (tablero[medioF][medioC] != '.' &&
            tablero[medioF][medioC] != jugador) {

            tablero[f2][c2] = jugador;
            tablero[f1][c1] = '.';
            tablero[medioF][medioC] = '.';

            return true;
        }
    }

    return false;
}

int main() {

    char tablero[N][N];

    inicializar(tablero);

    char jugador = 'B';

    while (true) {

        mostrarTablero(tablero);

        cout << "\nTurno del jugador ";

        if (jugador == 'B')
            cout << "BLANCAS (B)";
        else
            cout << "NEGRAS (N)";

        cout << "\n";

        int f1, c1, f2, c2;

        cout << "Fila de origen: ";
        cin >> f1;

        cout << "Columna de origen: ";
        cin >> c1;

        cout << "Fila de destino: ";
        cin >> f2;

        cout << "Columna de destino: ";
        cin >> c2;

        // Convertir de 1-8 a 0-7
        f1--;
        c1--;
        f2--;
        c2--;

        if (mover(tablero, f1, c1, f2, c2, jugador)) {

            // Cambiar jugador
            if (jugador == 'B')
                jugador = 'N';
            else
                jugador = 'B';

        } else {
            cout << "\nMovimiento invalido.\n";
        }
    }

    return 0;
}