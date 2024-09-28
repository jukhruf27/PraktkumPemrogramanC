#include <iostream>
using namespace std;

float akarKuadrat(float angka) {
    float awal = 0;
    float akhir = angka;
    float tengah;
    float toleransi = 0.00001;

    while ((akhir - awal) > toleransi) {
        tengah = (awal + akhir) / 2.0;
        if (tengah * tengah > angka) {
            akhir = tengah;
        } else {
            awal = tengah;
        }
    }

    return tengah;
}

int main() {
    float alas = 4.0;
    float tinggi = 5.0; 
    float sisi_miring;

    sisi_miring = akarKuadrat(alas * alas + tinggi * tinggi);

    cout << "Sisi miring segitiga dengan alas " << alas << " cm dan tinggi " << tinggi << " cm adalah " << sisi_miring << " cm." << endl;

    return 0;
}

