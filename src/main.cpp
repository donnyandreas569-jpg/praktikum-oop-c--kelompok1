#ifndef ALAT_LABORATORIUM_HPP
#define ALAT_LABORATORIUM_HPP

#include <string>

class AlatLaboratorium {
private:
    std::string nama;
    std::string kategori;
    int jumlah;

public:
    AlatLaboratorium();
    AlatLaboratorium(std::string nama, std::string kategori, int jumlah);

    void tampilkanInfo() const;
    void tambahJumlah(int n);
    void kurangiJumlah(int n);

    std::string getNama() const;
    std::string getKategori() const;
    int getJumlah() const;
};

#endif 
