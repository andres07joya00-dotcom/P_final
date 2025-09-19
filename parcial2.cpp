#include <iostream>
#include <cmath>

// Definir la estructura de un punto en 2D
struct Point
{
    double x, y;
};

// Función para calcular magnitud asociada al vector de un punto p1
/*Como puede modificar la declaración de la función para que sea mas eficiente en el manejo de memoria?
Teniendo en cuenta que solo necesita leer los valores, pero no modificarlos*/
double calcularMagnitud(Point p1)
{
    // Completar: Usar la fórmula de distancia euclidiana
    // sugerencia: puede hacer uso de funcionines como sqrt y pow

    double magnitud;
    magnitud = sqrt(pow(p1.x, 2) + pow(p1.y, 2));
    std::cout << "Magnitud: " << magnitud << std::endl;

    return magnitud;
}

// Función para leer las coordenadas de varios puntos
void leerPuntos(Point puntos[], int n)
{
    char respuesta;
    std::cout << "¿Desea ingresar los puntos manualmente? (s/n): ";
    std::cin >> respuesta;
    // Leer la respuesta del usuario

    // Completar: Verificar si la respuesta es 's' o 'n', tener en cuenta mayúsculas y minúsculas
    if (respuesta == 's' || respuesta == 'S')
    {
        // Completar: Leer las coordenadas de cada punto
        for (int i = 0; i < n; i++)
        {
            std::cout << "Ingrese las coordenadas del punto " << i + 1 << " (x, y): ";
            std::cin >> puntos[i].x;
            std::cin >> puntos[i].y;
        }
        std::cout << "Puntos ingresados: " << std::endl;
    } else
    {
        // Usar puntos predeterminados
        std::cout << "Usando puntos predeterminados...\n";
        puntos[0] = {0, 0};  // Punto 1 (0, 0)
        puntos[1] = {3, 4};  // Punto 2 (3, 4)
        puntos[2] = {6, 8};  // Punto 3 (6, 8)
        puntos[3] = {9, 12}; // Punto 4 (9, 12)
        
    }
}

// Función para calcular la distancia más cercana desde un punto específico
double calcularMayorMagnitud(Point puntos[], int n, int &indiceMayorMagnitud)
{

    return mayorMagnitud;
}

// Función para mostrar el punto con mayor magnitud y sus coordenadas
void mostrarResultado(Point puntos[], int indiceMayorMagnitud, double magnitud)
{
    std::cout << "El punto más cercano es: (" << puntos[indiceMayorMagnitud].x << ", " << puntos[indiceMayorMagnitud].y << ")\n";
    std::cout << "La distancia al punto más cercano es: " << distancia << std::endl;
}

int main()
{
    int n;

    std::cout << "Ingrese el número de puntos (mínimo 2): ";

    // Leer el número de puntos
    std::cin >> n;

    if (n < 2)
    {
        std::cout << "Se necesitan al menos 2 puntos para calcular las distancias.\n";
        return 1;
    }

    Point puntos[n]; // Arreglo de estructuras para almacenar las coordenadas (x, y)

    // Leer los puntos (manual o predeterminado)
    leerPuntos(puntos, n);

    // Calcular mayor magnitud
    int indiceMayorMagnitud;
    double distancia = calcularMayorMagnitud(puntos, n, indiceMayorMagnitud);
    // llamar funcion
    //  Mostrar el resultado
    mostrarResultado(puntos, indiceMayorMagnitud, distancia);

    return 0;
}
