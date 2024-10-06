#include <iostream>
#include <cstdlib>

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

      if(satuan1 == "cm" && satuan2 == "m"){
          cout << jarak << satuan1 << " = " << centiTOmeter(jarak) << satuan2 << endl;
      }else if(satuan1 == "cm" && satuan2 == "km"){
          cout << jarak << satuan1 << " = " << centiTOkilo(jarak) << satuan2 << endl;
      }else if(satuan1 == "m" && satuan2 == "cm"){
          cout << jarak << satuan1 << " = " << meterTOcenti(jarak) << satuan2 << endl;
      }else if(satuan1 == "m" && satuan2 == "km"){
          cout << jarak << satuan1 << " = " << meterTOkilo(jarak) << satuan2 << endl;
      }else if(satuan1 == "km" && satuan2 == "cm"){
          cout << jarak << satuan1 << " = " << kiloTOcenti(jarak) << satuan2 << endl;
      }else if(satuan1 == "km" && satuan2 == "m"){
          cout << jarak << satuan1 << " = " << kiloTOmeter(jarak) << satuan2 << endl;
      }else{
          cout << "============================================================" << endl;
          cout << "Satuan " << satuan1 << " & " << satuan2 << " tidak valid/tersedia." << endl;
          exit(1);
      }
  }else if (pilihan == 'M'){
      cout << "Anda memilih konverter mata uang." << endl;
      cout << "============================================================" << endl;
      cout << "Masukkan mata uang yang ingin anda konversi [IDR][USD]: ";
      cin >> uang1;
      if(uang1 == "IDR"){
        uang2 == "USD";
        cout << "Anda memilih untuk mengkonversi IDR ke USD." << endl;
      }else if (uang1 == "USD"){
        uang2 == "IDR";
        cout << "Anda memilih untuk mengkonversi USD ke IDR." << endl;
      }
      cout << "============================================================" << endl;
      cout << "Masukkan nilai " << uang1 << ": ";
      cin >> duit;

      if(uang1 == "IDR"){
        cout << "Rp " << duit << " = " << "$" << rpTOusd(duit) << endl;
      }else if(uang1 == "USD"){
        cout << "$" << duit << " = " << "Rp " << usdTOrp(duit) << endl;
      }else{
        cout << "Mata uang yang anda masukkan tidak valid/tersedia." << endl; 
        exit(1);
      }
  }
 return 0;
}


