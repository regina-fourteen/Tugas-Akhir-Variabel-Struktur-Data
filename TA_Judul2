#include <iostream>
using namespace std;

void insertionSort(int piring[], int n) {
    for (int i = 1; i < n; i++) {
        int piringBaru = piring[i]; 
        int j = i - 1;

        while (j >= 0 && piring[j] > piringBaru) {
            piring[j + 1] = piring[j];
            j--;
        }
        piring[j + 1] = piringBaru;
    }
}

int main() {
    int n;
    cout << "Masukkan jumlah piring: ";
    cin >> n;

    int piring[n];
    cout << "Masukkan ukuran piring satu per satu:\n";
    for (int i = 0; i < n; i++) {
        cout << "Ukuran piring ke-" << i+1 << ": ";
        cin >> piring[i];
    }

    cout << "\nSebelum disusun: ";
    for (int i = 0; i < n; i++) cout << piring[i] << " ";
    cout << endl;

    insertionSort(piring, n);

    cout << "Sesudah disusun (dari kecil ke besar): ";
    for (int i = 0; i < n; i++) cout << piring[i] << " ";
    cout << endl;

    return 0;
}
