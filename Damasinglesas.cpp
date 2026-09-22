#include <iostream>
#include <cstdlib>
using namespace std;

const int N = 8;

// Mostrar tablero
#define RESET "\033[0m"
#define BLANCO "\033[47m"
#define NEGRO "\033[30m"
void mostrarTablero(char tablero[N][N]) {

    cout << "\n     1   2   3   4   5   6   7   8\n";
    cout << "   +---+---+---+---+---+---+---+---+\n";

    for (int i = 0; i < N; i++) {

        cout << " " << i + 1 << " |";

        for (int j = 0; j < N; j++) {

            // Casilla blanca
            if ((i + j) % 2 == 0) {
                cout << "\033[47m"; // Fondo blanco
                cout << "\033[30m"; // Texto negro
            }

            // Casilla negra
            else {
                cout << "\033[40m"; // Fondo negro
                cout << "\033[37m"; // Texto blanco
            }

            // Mostrar ficha
            if (tablero[i][j] == 'B')
                cout << " B ";

            else if (tablero[i][j] == 'N')
                cout << " N ";

            else
                cout << "   ";

            // Restablecer color
            cout << "\033[0m";

            cout << "|";
        }

        cout << "\n";
        cout << "   +---+---+---+---+---+---+---+---+\n";
    }
}
// Inicializar tablero
void inicializar(char tablero[N][N]) {
    
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

// ComerN
bool comer(char tablero[N][N],
            int f, int c,
            char jugador) {
    int direcciones[2] = {-1, 1};


    int avance;

    if (jugador == 'B')
        avance = -1;
    else
        avance = 1;
    for (int i = 0; i < 2; i++) {
        int dc = direcciones[i];
        int filaEnemigo = f + avance;
        int columnaEnemigo = c + dc;

        int filaDestino = f + avance * 2;
        int columnaDestino = c + dc * 2;

        if (dentro(filaDestino, columnaDestino) &&
            dentro(filaEnemigo, columnaEnemigo)) {

            if(tablero[filaEnemigo][columnaEnemigo] != '.' &&
               tablero[filaEnemigo][columnaEnemigo] != jugador &&
               tablero[filaDestino][columnaDestino] == '.') {
                return true;
               }
            }
    }
  return false;
}

// Movimientos
bool mostrarMovimientos(char tablero[N][N],
                        int f, int c,
                        char jugador) {
    bool izquierda = false;
    bool derecha = false;
    int avance;

    if (jugador == 'B')
        avance = -1;
    else
        avance = 1;
    int nuevaFila = f + avance;
    int nuevaColumna = c - 1;

    if (dentro(nuevaFila, nuevaColumna) &&
        tablero[nuevaFila][nuevaColumna] == '.') {
            izquierda = true;
    }

    nuevaColumna = c + 1;
    if(dentro(nuevaFila, nuevaColumna) &&
       tablero[nuevaFila][nuevaColumna] == '.'){
       derecha = true;
    }

    cout << "\nmovimientos posibles:\n";

    if (izquierda)
        cout << " puede moverse hacia la IZQUIERDA.\n";
    if (derecha)
        cout << " puede moverse hacia la DERECHA.\n";
    if(!izquierda && !derecha)
       cout << " no puede moverse normalmente.\n";

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

    // Obligado a comer
    bool obligado = comer(tablero, f1, c1, jugador); 

    // Movimiento normal: una diagonal
    if (abs(df) == 1 && abs(dc) == 1) {

        if (obligado){
            cout << "\nDebes comer!! no puedes hacer otro moviemiento.\n";
            return false;
        }

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

        if(jugador == 'B' && df != -2)
           return false;
        if (jugador == 'N' && df != 2)
           return false;



        // Verificar que la ficha del medio sea enemiga
        if (tablero[medioF][medioC] != '.' &&
            tablero[medioF][medioC] != jugador) {

            tablero[f2][c2] = jugador;
            tablero[f1][c1] = '.';
            tablero[medioF][medioC] = '.';

            cout << "\nFicha comida!!";

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

        int f1, c1;
        int f2, c2;

        cout << "Fila de origen: ";
        cin >> f1;

        cout << "Columna de origen: ";
        cin >> c1;

        f1--;
        c1--;

        if (!dentro(f1, c1) ||
            tablero[f1][c1] != jugador) {
            
            cout << "\nEsa no es una ficha valida.\n";
            continue;
        }

        mostrarMovimientos(tablero, f1, c1, jugador);

        if(comer(tablero, f1, c1, jugador)) {
            cout << "\n Esta ficha esta obligada a comer\n";

        }
        cout << "\n ahora selecciona el destino.\n";
         
        cout << "Fila de destino: ";
        cin >> f2;

        cout << "Columna de destino: ";
        cin >> c2;

       
        
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