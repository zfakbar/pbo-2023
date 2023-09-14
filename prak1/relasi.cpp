#include <iostream>
#include <vector>

// Agregasi: Kelas Roda sebagai bagian dari Mobil dan SepedaMotor
class Roda {
public:
    void Putar() {
        std::cout << "Roda berputar." << std::endl;
    }
};

// Komposisi: Kelas Mesin sebagai bagian integral dari Mobil
class Mesin {
public:
    void Hidupkan() {
        std::cout << "Mesin dinyalakan." << std::endl;
    }
};

// Asosiasi: Kelas Sopir berhubungan dengan Kelas Kendaraan tanpa kepemilikan
class Sopir {
public:
    Sopir(std::string nama) : nama(nama) {}
    void KendalikanKendaraan() {
        std::cout << nama << " mengendalikan kendaraan." << std::endl;
    }
private:
    std::string nama;
};

// Generalisasi (Pewarisan): Kelas Kendaraan sebagai kelas dasar
class Kendaraan {
public:
    void Bergerak() {
        std::cout << "Kendaraan bergerak." << std::endl;
    }
};

// Implementasi (Interface): Kelas KendaraanDenganKursi mengimplementasikan AntarmukaKursi
class AntarmukaKursi {
public:
    virtual void Duduk() = 0;
};

// Kelas Mobil yang mewarisi dari Kendaraan dan mengimplementasikan AntarmukaKursi
class Mobil : public Kendaraan, public AntarmukaKursi {
public:
    void Duduk() override {
        std::cout << "Duduk di kursi mobil." << std::endl;
    }
};

// Kelas SepedaMotor yang mewarisi dari Kendaraan
class SepedaMotor : public Kendaraan {
public:
    void Melaju() {
        std::cout << "Sepeda motor melaju cepat." << std::endl;
    }
};

int main() {
    // Agregasi: Membuat objek Mobil dan SepedaMotor dengan objek Roda
    Mobil mobil;
    SepedaMotor sepedaMotor;

    Roda rodaMobil1, rodaMobil2, rodaSepedaMotor1, rodaSepedaMotor2;

    // Komposisi: Membuat objek Mobil dengan objek Mesin
    Mesin mesinMobil;

    // Asosiasi: Membuat objek Sopir yang mengendalikan Kendaraan
    Sopir sopirMobil("John");
    Sopir sopirSepedaMotor("Alice");

    // Generalisasi: Menggunakan metode dari Kendaraan
    mobil.Bergerak();
    sepedaMotor.Bergerak();

    // Implementasi (Interface): Menggunakan AntarmukaKursi
    mobil.Duduk();

    // Melakukan aksi-aksi lain
    mesinMobil.Hidupkan();
    rodaMobil1.Putar();
    rodaSepedaMotor1.Putar();
    sopirMobil.KendalikanKendaraan();
    sopirSepedaMotor.KendalikanKendaraan();
    sepedaMotor.Melaju();

    return 0;
}
