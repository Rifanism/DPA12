#include <iostream>

using namespace std;

//jarakk//
double centiTOmeter(double jarak){
  return jarak / 100;
}
double centiTOkilo(double jarak){
  return jarak / 100000;
}

double meterTOcenti(double jarak){
  return jarak * 100;
}
double meterTOkilo(double jarak){
  return jarak / 1000;
}

double kiloTOcenti(double jarak){
  return jarak * 100000;
}
double kiloTOmeter(double jarak){
  return jarak * 1000;
}

//duit//
long long rpTOusd(long long duit){
  return duit / 15670;
}
long long usdTOrp(long long duit){
  return duit * 15670;
}

int main(){
  string uang1, uang2, satuan1, satuan2;
  char pilihan;
  double jarak;
  long long duit;

  cout << endl;
  cout << "Selamat datang di Ambatool Converter!" << endl;
  cout << "============================================================" << endl << endl;
  cout << "Apa yang ingin anda konversi?\n" << "Jarak [J]\n" << "Mata Uang [M]" << endl;
  cin  >> pilihan;

  if(pilihan == 'J'){
      cout << "Anda memilih konverter jarak." << endl;
      cout << "============================================================" << endl;
      cout << "Masukkan satuan jarak yang ingin anda konversi [cm][m][km]: " << endl;
      cin  >> satuan1;
      cout << "Konversi " << satuan1 << " ke [cm][m][km]: " << endl;
      cin  >> satuan2;
      cout << "============================================================" << endl;
      cout << "Masukkan nilai " << satuan1 << ": ";
      cin  >> jarak;
