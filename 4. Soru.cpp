


#include <iostream>
#include <string>

using namespace std;

struct Ogrenci {
    string ad;
    string soyad;
    int no;
    string adres;
};

int main() {
    Ogrenci ogrenciler[5];
    
    for (int i = 0; i < 5; i++) {
        cout << i+1 << ". ogrencinin adini girin: ";
        cin >> ogrenciler[i].ad;
        cout << i+1 << ". ogrencinin soyadini girin: ";
        cin >> ogrenciler[i].soyad;
        cout << i+1 << ". ogrencinin numarasini girin: ";
        cin >> ogrenciler[i].no;
        cout << i+1 << ". ogrencinin adresini girin: ";
        cin >> ogrenciler[i].adres;
    }
    
    // Kaydedilen öðrenci bilgilerini ekrana yazdýrma
    for (int i = 0; i < 5; i++) {
        cout << "Ad: " << ogrenciler[i].ad << endl;
        cout << "Soyad: " << ogrenciler[i].soyad << endl;
        cout << "Numara: " << ogrenciler[i].no << endl;
        cout << "Adres: " << ogrenciler[i].adres << endl;
    }
    
    return 0;
}
