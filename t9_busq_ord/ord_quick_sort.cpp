// Basado en: https://www.youtube.com/watch?v=UrPJLhKF1jY

#include <iostream>

using namespace std;

void intercambia(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

int partition(int v[], int low, int high) {
    // Pivote el de la derecha
    int pivot = v[high];

    // Apuntador del ultimo elemento mas pequeño
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (v[j] <= pivot) {
            // Avanza apuntador
            i++;
            // Intercambiar elementos
            intercambia(v[i], v[j]);
        }
    }
    // Al final, intercambiar el pivote
    intercambia(v[i + 1], v[high]);

    return i + 1;
}

void quick_sort(int v[], int low, int high) {
    if (low < high) {
        // Dividir y acomodar pivot
        int pi = partition(v, low, high);

        quick_sort(v, low, pi - 1);
        quick_sort(v, pi + 1, high);
    }
}

void mostrar_vector(int v[], int n) {
    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main() {
    int v[8] = {4,6,2,5,8,9,5,10};
    int n = 8;

    cout << "v antes de QuickSort: ";
    mostrar_vector(v, n);

    quick_sort(v, 0, n - 1);

    cout << "v despues de QuickSort: ";
    mostrar_vector(v, n);

    return 0;
}
