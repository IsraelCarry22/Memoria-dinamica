#include <iostream>

int main()
{
    int size;

    //Solicita al usuario asignar el tamaño del vector.
    std::cout << "Ingresa el tamaño del Vector: ";
    std::cin >> size;

    //Crea un vector dinamico con la palabra New.
    int* VectorDinamico = new int[size];

    //El usuario ingresa los valores dentro del vector
    std::cout << "Ingresa los valores del vector: " << std::endl;
    for (int i = 0; i < size; i++)
    {
        std::cout << "Elemento " << i + 1 << ": ";
        std::cin >> VectorDinamico[i];
    }

    //Muestra los elementos en pantalla.
    std::cout << "Vector dinamico creado: " << std::endl;
    for (int i = 0; i < size; i++)
    {
        std::cout << VectorDinamico[i] << " ";
    }
    std::cout << std::endl;

    //Se libera la memoria
    delete[] VectorDinamico;

    return 0;
}