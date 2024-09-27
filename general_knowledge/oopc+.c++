#include <iostream>
#include <string>
using namespace std;

class Mobil {
protected:
    string merk;
    string model;
    int tahun;

public:
    Mobil(string m, string mo, int t) : merk(m), model(mo), tahun(t) {}

    void tampilkanInfo() {
        cout << "Merk: " << merk << ", Model: " << model << ", Tahun: " << tahun << endl;
    }

    virtual void nyalakanMesin() {
        cout << "Mesin mobil " << merk << " menyala!" << endl;
    }
};

class MobilBalap : public Mobil {
private:
    int kecepatanMaksimal;

public:
    MobilBalap(string m, string mo, int t, int km) : Mobil(m, mo, t), kecepatanMaksimal(km) {}

    void nyalakanMesin() override {
        cout << "Mesin mobil balap " << merk << " menyala dengan raungan keras!" << endl;
    }

    void tampilkanKecepatan() {
        cout << "Kecepatan Maksimal: " << kecepatanMaksimal << " km/h" << endl;
    }
};

int main() {
    Mobil mobilBiasa("Toyota", "Avanza", 2020);
    mobilBiasa.tampilkanInfo();
    mobilBiasa.nyalakanMesin();
    
    cout << endl;

    MobilBalap mobilBalap("Ferrari", "SF90", 2022, 350);
    mobilBalap.tampilkanInfo();
    mobilBalap.nyalakanMesin();
    mobilBalap.tampilkanKecepatan();

    return 0;
}
