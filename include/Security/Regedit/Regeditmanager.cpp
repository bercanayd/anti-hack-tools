#include <windows.h>
#include <chrono>
#include <iostream>
#include <vector>
#include <string>
#include <iomanip>


LONG OpenBercanosKey(HKEY& outKey, REGSAM desiredAccess);
void CloseIfOpen(HKEY& hKey);

// Fonksiyonlar: okuma / yazma
void CheckKey();                    // licensecounter oku ve 20 ile karşılaştır
bool ReadLicenseCounter(DWORD& outValue);
bool WriteLicenseCounter(DWORD value);

void CheckKey() {
    DWORD value = 20;
    if (!ReadLicenseCounter(value)) {
        std::cerr << "[CheckKey] licensecounter okunamadi.\n";
        return;
    }

    std::cout << "[CheckKey] licensecounter = " << value << "\n";
    if (value > 20) {
        std::cout << "[CheckKey] licensecounter 20'den buyuk.\n";
    } else {
        std::cout << "[CheckKey] licensecounter 20'den kucuk veya esit.\n";
    }

   
   
}

// editstrartedtime: licensecounter değerini 1 artır
void EditStartedTime() {
    DWORD value = 0;
    if (!ReadLicenseCounter(value)) {
        std::cerr << "[editstrartedtime] licensecounter okunamadı, varsayılan 0 alınacak.\n";
        value = 0;
    }

    value += 1; // bir artır

    if (WriteLicenseCounter(value)) {
        std::cout << "[editstrartedtime] licensecounter güncellendi: " << value << "\n";
    } else {
        std::cerr << "[editstrartedtime] licensecounter yazma başarısız.\n";
    }
}