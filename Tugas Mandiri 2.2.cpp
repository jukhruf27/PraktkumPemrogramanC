#include <iostream>
using namespace std;

int main() {
    float diameter = 15.0; 
    float jari_jari = diameter / 2.0;
    float volume;
    float pi = 3.14159;

    volume = (4.0 / 3.0) * pi * jari_jari * jari_jari * jari_jari;

    cout << "Volume bola dengan diameter " << diameter << " cm adalah " << volume << " cm^3." << endl;

    return 0;
}

