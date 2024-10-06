#include <iostream>
#include <cstdlib>
#include <algorithm>

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
double rpTOusd(double duit){
  return duit / 15670;
}
double usdTOrp(double duit){
  return duit * 15670;
}

double rpTOwon(double duit){
    return duit / 12;
}
double wonTOrp(double duit){
    return duit * 12;
}

double rpTOjpy(double duit){
    return duit / 105;
}
double jpyTOrp(double duit){
    return duit * 105;
}

int main(){
  string uang1, uang2, satuan1, satuan2;
  char pilihan;
  double jarak;
  double duit;
  long long duit2;

  cout << endl;
  cout << "Selamat datang di Ambatool Converter!" << endl;
  cout << "============================================================" << endl << endl;
  cout << "Apa yang ingin anda konversi?\n" << "Jarak [J]\n" << "Mata Uang [M]" << endl;
  cout << "Masukkan pilihan: ";
  cin  >> pilihan;

  if(pilihan == 'J' || pilihan == 'j'){
      cout << endl << "[Anda memilih konverter jarak]" << endl;
      cout << "============================================================" << endl;
      cout << "Masukkan satuan jarak yang ingin anda konversi [cm][m][km]: ";
      cin  >> satuan1;
      transform(satuan1.begin(), satuan1.end(), satuan1.begin(), ::tolower);
      if(satuan1 == "cm"){
          cout << "Konversi " << satuan1 << " ke [m][km]: ";
      }else if(satuan1 == "m"){
          cout << "Konversi " << satuan1 << " ke [cm][km]: ";
      }else if(satuan1 == "km"){
          cout << "Konversi " << satuan1 << " ke [cm][m]: ";
      }else{
          cout << "Satuan " << satuan1 << " tidak valid/tersedia.";
          exit(1);
      }
      cin  >> satuan2;
      transform(satuan2.begin(), satuan2.end(), satuan2.begin(), ::tolower);
      cout << "Masukkan nilai " << satuan1 << ": ";
      cin  >> jarak;
      cout << "============================================================" << endl;

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
          cout << "Satuan " << satuan1 << " & " << satuan2 << " tidak valid/tersedia." << endl;
          exit(1);
      }
  }else if (pilihan == 'M' || pilihan == 'm'){
      cout << endl << "[Anda memilih konverter mata uang]" << endl;
      cout << "============================================================" << endl;
      cout << "Masukkan mata uang yang ingin anda konversi [IDR][USD][KRW][JPY]: ";
      cin >> uang1;
      transform(uang1.begin(), uang1.end(), uang1.begin(), ::toupper);
      if(uang1 == "IDR"){
          cout << "Konversi " << uang1 << " ke [USD][KRW][JPY]: ";
          cin >> uang2;
          transform(uang2.begin(), uang2.end(), uang2.begin(), ::toupper);
      }else if(uang1 == "USD"){
          uang2 = "IDR";
          cout << "Mengkonversi " << uang1 << " ke IDR" << endl;
      }else if(uang1 == "KRW"){
          uang2 = "IDR";
          cout << "Mengkonversi " << uang1 << " ke IDR" << endl;
      }else if(uang1 == "JPY"){
          uang2 = "IDR";
          cout << "Mengkonversi " << uang1 << " ke IDR" << endl;
      }
      cout << "Masukkan nilai " << uang1 << ": ";
      cin >> duit;
      duit2 = duit;
      cout << "============================================================" << endl;

      if(uang1 == "IDR" && uang2 == "USD"){
          cout << "Rp. " << duit2 << " = " << "$" << rpTOusd(duit) << endl;
      }else if(uang1 == "USD" && uang2 == "IDR"){
          cout << "$" << duit2 << " = " << "Rp. " << usdTOrp(duit) << endl;
      }else if(uang1 == "IDR" && uang2 == "KRW"){
          cout << "Rp. " << duit2 << " = " << rpTOwon(duit) << " won" << endl;
      }else if(uang1 == "KRW" && uang2 == "IDR"){
          cout << duit2 << " won = " << "Rp. " << wonTOrp(duit) << endl;
      }else if(uang1 == "IDR" && uang2 == "JPY"){
          cout << "Rp. " << duit2 << " = " << "¥ " << rpTOjpy(duit) << endl;
      }else if(uang1 == "JPY" && uang2 == "IDR"){
          cout << "¥ " << duit2 << " = " << "Rp. " << jpyTOrp(duit) << endl;
      }else{
        cout << "Mata uang yang anda masukkan tidak valid/tersedia." << endl; 
        exit(1);
      }
  }
 return 0;
}
