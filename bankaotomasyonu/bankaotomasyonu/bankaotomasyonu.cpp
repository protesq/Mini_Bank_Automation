// bankaotomasyonu.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>

using namespace std;

int account_number= 12345;
int account_password = 12;
float money = 4500;
string client_name= "Arif";
string client_surname = "Protesq";
string account_type = "Vadesiz Hesap";
string account_type2 = "Vadeli Hesap";
string account_type3 = "Yatırım Hesabı";
float invest_account_money = 3000;
float checking_account = 2000;
float deposit_account = 1000;
float update_money;
float amount;
int iban;
int select;
int second_select;
bool loop = true;
int main()
{
    cout << "Hesap numaranizi giriniz: ";
    cin >> account_number;
    cout << "Hesap sifrenizi giriniz: ";
    cin >> account_password;
    if (account_number == account_number and account_password == account_password) {
        cout << "Adiniz: " + client_name << endl;
        cout << "Soyadi: " + client_surname << " " << "Bakiye: " << money << endl;
        cout << " " << endl;
        cout << "1:Vadesiz Hesap " << endl;
        cout << "2:Vadeli Hesap " << endl;
        cout << "3:Yatirim Hesabi " << endl;
        cout << "4:Cikis" << endl;
        cout << "Islem seciniz: " << endl;
        cin >> select;
    }
    switch (select) {
    case 1: 
        cout << "Vadesiz Hesap" << endl;
        cout << "Vadesiz hesap bakiyesi: " << checking_account << endl;
        cout << "Islemler : " << endl;
        cout << "1:Hesaplar arasi para aktar" << endl;
        cout << "2:EFT" << endl;
        cout << "Islem : ";
        cin >> second_select;
        if (second_select == 1) {
            cout << "Guncel bakiye:"<< checking_account  << endl;
            cout << "Miktar:";
            cin >> amount;
            if (amount > checking_account) {
                cout << "Yetersiz bakiye" << endl;
            }
            else if (amount < checking_account) {
               checking_account -= amount;
               money += amount;
            }
            cout << "Guncel vadesiz hesap bakiyesi: " << checking_account << endl;
            cout << "Guncel bakiye:" << money << endl;
        }
        else if (second_select == 2) {
            cout << "Güncel bakiye:" << money << endl;
            cout << "IBAN: ";
            cin >> iban;
            cout << "Miktar:";
            cin >> money;
            checking_account -= amount;
            money += amount;
            cout << "Para gonderilmistir !" << endl;
            
        }
        break;
    case 2 :
        cout << "Vadeli Hesap" << endl;
        cout << "Vadeli hesap bakiyesi: " << deposit_account << endl;
        cout << "Islemler : " << endl;
        cout << "1:Hesaplar arasi para Aktar" << endl;
        cout << "2:EFT" << endl;
        cout << "Islem : ";
        cin >> second_select;
        if (second_select == 1) {
            cout << "Guncel bakiye:" << deposit_account << endl;
            cout << "Miktar:";
            cin >> amount;
            if (amount > deposit_account) {
                cout << "Yetersiz bakiye" << endl;
            }
            else if (amount < deposit_account) {
                deposit_account -= amount;
                money += amount;
            }
            cout << "Guncel vadesiz hesap bakiyesi: " << deposit_account << endl;
            cout << "Guncel bakiye:" << money << endl;
        }
        else if (second_select == 2) {
            cout << "Güncel bakiye:" << money << endl;
            cout << "IBAN: ";
            cin >> iban;
            cout << "Miktar:";
            cin >> money;
            deposit_account -= amount;
            money += amount;
            cout << "Para gonderilmistir !" << endl;

        }
        break;

    case 3:
        cout << "Yatirim Hesabi" << endl;
        cout << "Yatirim hesabi bakiyesi: " << invest_account_money << endl;
        cout << "Islemler:" << endl;
        cout << "1: Hesaplar arasi para aktar" << endl;
        cout << "2: EFT" << endl;
        cout << "3: Hisse islemleri" << endl;
        cout << "Islem: ";
        cin >> second_select;

        if (second_select == 3) {
            float AA = 30.70;
            float BB = 25.55;
            float DD = 12.55;
            cout << "Hisseler: AA, BB, DD" << endl;
            cout << "Hisse senedi fiyatları: AA: " << AA << ", BB: " << BB << ", DD: " << DD << endl;
            cout << "1: Hisse al" << endl;
            cout << "2: Hisse sat" << endl;
            cout << "Islem seciniz: ";
            cin >> second_select;

            string stock_name;
            int stock_amount;
            cout << "Hisse adi: ";
            cin >> stock_name;
            cout << "Miktar: ";
            cin >> stock_amount;

            float price = 0;
            if (stock_name == "AA") price = AA;
            else if (stock_name == "BB") price = BB;
            else if (stock_name == "DD") price = DD;

            if (price != 0) {
                float total_cost = price * stock_amount;
                if (second_select == 1) {
                    if (total_cost <= invest_account_money) {
                        invest_account_money -= total_cost;
                        cout << stock_amount << " adet " << stock_name << " hissesi alındı. Kalan bakiye: " << invest_account_money << endl;
                    }
                    else {
                        cout << "Yetersiz bakiye." << endl;
                    }
                }
                else if (second_select == 2) { 
                    if (total_cost <= invest_account_money) {
                        invest_account_money += total_cost;
                        cout << stock_amount << " adet " << stock_name << " hissesi alındı. Kalan bakiye: " << invest_account_money << endl;
                    }
                    else {
                        cout << "Hata" << endl;
                    }
                }
            }
            else {
                cout << "Geçersiz hisse adı." << endl;
            }
        }
        break;
    case 4:
        cout << "Çıkış yapılıyor..." << endl;
        loop = false;
        break;
    default:
        cout << "Geçersiz seçim." << endl;
        break;
    }
}