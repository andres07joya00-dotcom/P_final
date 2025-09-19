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
        for(int i = 0; i < n; i++)
        {
            puntos[i].x = i + 1; 
            puntos[i].y = (i + 1) * 2;
        }

        
    }
}

// Función para calcular la magnitud mayor entre todos los vectores
double calcularMayorMagnitud(Point puntos[], int n, int &indiceMayorMagnitud)
{
    double mayorMagnitud = 0.0;
    indiceMayorMagnitud = -1;

    for (int i = 0; i < n; i++)
    {
        double magnitud = std::sqrt(puntos[i].x * puntos[i].x + puntos[i].y * puntos[i].y);

        if (magnitud > mayorMagnitud)
        {
            mayorMagnitud = magnitud;
            indiceMayorMagnitud = i;
        }
    }

    return mayorMagnitud;
}

// Función para mostrar el punto con mayor magnitud y sus coordenadas
void mostrarResultado(Point puntos[], int indiceMayorMagnitud, double magnitud)
{
    std::cout << "El vector con mayor magnitud es: (" << puntos[indiceMayorMagnitud].x << ", " << puntos[indiceMayorMagnitud].y << ")\n";
    std::cout << "La mayor magnitud es: " << magnitud << std::endl;
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
