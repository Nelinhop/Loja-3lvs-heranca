#include "customer.hpp"
#include "acc.hpp"
#include "acc+.hpp"
#include "acc++.hpp"
#include <vector>

//Problema criado: Criar um sistema de contas para uma loja de roupas com 3 niveis de conta

vector<Account> accounts;
vector<Accplus> accountsplus;
vector<Accblack> accountsblack;

string cpfC;
string nomeC;
string cellC;
int ageC;
int option;
int codeC;
float priceC;

int main()
{
    int k = 0;
    int j = 0;
    int h = 0;

do{
        cout << "------------------------------" << endl;
        cout << "1 - Criar conta"          << endl;
        cout << "2 - Mostrar dados da conta"  << endl;
        cout << "3 - Fazer uma compra"        << endl;
        cout << "4 - Fazer uma compra com pontos"        << endl;
        cout << "5 - Comprar em credito de conta black"                << endl;
        cout << "6 - Pagar debito de conta black"                << endl;
        cout << "0 - Sair"                << endl;
        cout << "------------------------------" << endl;


        int menu;
        cin >> menu;
        cout << endl;

        switch(menu){
            case 1:
                cout << "Que tipo de conta deseja criar?" << endl;
                cout << "1 - Conta basica" << endl;
                cout << "2 - Conta plus"          << endl;
                cout << "3 - Conta Black"  << endl;
                cout << "------------------------------" << endl;

                cin >> option;
                switch(option){
                case 1:
                    cin.ignore();
                    cout << "Insira os dados: "<< endl;
                    cout << "Nome do cliente: " << endl;
                    getline(cin,nomeC);
                    cout << "CPF: " << endl;
                    getline(cin,cpfC);
                    cout << "Numero de Celular: " << endl;
                    getline(cin,cellC);
                    cout << "Idade: " << endl;
                    cin >> ageC;

                    h++;
                    accounts.push_back(Account (new Customer(nomeC,cpfC,cellC,ageC),h));

                    cout << " O ID desta conta eh: " << h << endl;

                    break;
                case 2:
                    cin.ignore();
                    cout << "Insira os dados: "<< endl;
                    cout << "Nome do cliente: " << endl;
                    getline(cin,nomeC);
                    cout << "CPF: " << endl;
                    getline(cin,cpfC);
                    cout << "Numero de Celular: " << endl;
                    getline(cin,cellC);
                    cout << "Idade: " << endl;
                    cin >> ageC;

                    j++;
                    accountsplus.push_back(Accplus (new Customer(nomeC,cpfC,cellC,ageC),j));

                    cout << " O ID desta conta eh: " << j << endl;
                    break;
                case 3:
                    cin.ignore();
                    cout << "Insira os dados: "<< endl;
                    cout << "Nome do cliente: " << endl;
                    getline(cin,nomeC);
                    cout << "CPF: " << endl;
                    getline(cin,cpfC);
                    cout << "Numero de Celular: " << endl;
                    getline(cin,cellC);
                    cout << "Idade: " << endl;
                    cin >> ageC;

                    k++;
                    accountsblack.push_back(Accblack (new Customer(nomeC,cpfC,cellC,ageC),k));

                    cout << " O ID desta conta eh: " << k << endl;


                }
                break;
            case 2:
                cout << "Que tipo de conta deseja exibir informacoes?" << endl;
                cout << "1 - Conta basica" << endl;
                cout << "2 - Conta plus"          << endl;
                cout << "3 - Conta Black"  << endl;
                cout << "------------------------------" << endl;
                cin >> option;
                switch(option){
                case 1:
                    cout << "Insira o numero da conta: " << endl;
                    cin >> codeC;
                     if(codeC <= accounts.size() && codeC != 0){

              cout << accounts.at(codeC-1).GetInformation() << endl;}
              else{
                    cout << "Numero de conta invalido" << endl;
              }
                    break;
                case 2:
                    cout << "Insira o numero da conta: " << endl;
                    cin >> codeC;
               if(codeC <= accountsplus.size() && codeC != 0){

              cout << accountsplus.at(codeC-1).GetInformation() << endl;}
              else{
                    cout << "Numero de conta invalido" << endl;
              }
                    break;
                case 3:
                    cout << "Insira o numero da conta: " << endl;
                    cin >> codeC;
                     if(codeC <= accountsblack.size() && codeC != 0){

              cout << accountsblack.at(codeC-1).GetInformation() << endl;}
              else{
                    cout << "Numero de conta invalido" << endl;
              }

              }

                break;
            case 3:
                cout << "Que tipo de conta sera utilizada na compra?" << endl;
                cout << "1 - Conta basica" << endl;
                cout << "2 - Conta plus"          << endl;
                cout << "3 - Conta Black"  << endl;
                cout << "------------------------------" << endl;
                cin >> option;

                switch(option){
                case 1:
                    cout << "Insira o numero da conta: " << endl;
                    cin >> codeC;
                      if(codeC <= accounts.size() && codeC != 0){

                    cout << "Agora insira o valor do produto: " << endl;
                    cin >> priceC;

                    accounts.at(codeC-1).NewPurchase(priceC);}
                    else{
                    cout << "Numero de conta invalido" << endl;
              }
                    break;
                case 2:
                    cout << "Insira o numero da conta: " << endl;
                    cin >> codeC;
                     if(codeC <= accountsplus.size() && codeC != 0){

                    cout << "Agora insira o valor do produto: " << endl;
                    cin >> priceC;}
                    else{
                    cout << "Numero de conta invalido" << endl;
              }

                    accountsplus.at(codeC-1).NewPurchase(priceC);
                    break;
                case 3:
                    cout << "Insira o numero da conta: " << endl;
                    cin >> codeC;
                    if(codeC <= accountsblack.size() && codeC != 0){
                    cout << "Agora insira o valor do produto: " << endl;
                    cin >> priceC;

                    accountsblack.at(codeC-1).NewPurchase(priceC);}

                    else{
                    cout << "Numero de conta invalido" << endl;
              }
                }


                break;
            case 4:
                cout << "Que tipo de conta sera utilizada na compra?" << endl;
                cout << "1 - Conta basica" << endl;
                cout << "2 - Conta plus"          << endl;
                cout << "3 - Conta Black"  << endl;
                cout << "------------------------------" << endl;
                cin >> option;

                switch(option){
                case 1:
                    cout << "Insira o numero da conta: " << endl;
                    cin >> codeC;
                     if(codeC <= accounts.size() && codeC != 0){
                    cout << "Agora insira o valor do produto: " << endl;
                    cin >> priceC;

                    accounts.at(codeC-1).BuyWithPoints(priceC);}
                     else{
                    cout << "Numero de conta invalido" << endl;
              }

                    break;
                case 2:
                    cout << "Insira o numero da conta: " << endl;
                    cin >> codeC;
                     if(codeC <= accountsplus.size() && codeC != 0){
                    cout << "Agora insira o valor do produto: " << endl;
                    cin >> priceC;

                    accountsplus.at(codeC-1).BuyWithPoints(priceC);}
                     else{
                    cout << "Numero de conta invalido" << endl;
              }

                    break;
                case 3:
                    cout << "Insira o numero da conta: " << endl;
                    cin >> codeC;
                    if(codeC <= accountsblack.size() && codeC != 0){
                    cout << "Agora insira o valor do produto: " << endl;
                    cin >> priceC;

                    accountsblack.at(codeC-1).BuyWithPoints(priceC);}
                     else{
                    cout << "Numero de conta invalido" << endl;
              }

                }

                break;

                case 5:
                    cout << "Insira o numero da conta: " << endl;
                    cin >> codeC;
                     if(codeC <= accountsblack.size() && codeC != 0){
                    cout << "Agora insira o valor do produto: " << endl;
                    cin >> priceC;
                    accountsblack.at(codeC-1).BuyInCredit(priceC);}
                    else {
                        cout << "Numero de conta invalido" << endl;
                    }
                    break;

                case 6:
                    cout << "Insira o numero da conta: " << endl;
                    cin >> codeC;
                    if(codeC <= accountsblack.size() && codeC != 0){
                    cout << "Agora insira o valor a ser pago do credito: " << endl;
                    cin >> priceC;
                    accountsblack.at(codeC-1).PayCredit(priceC);}
                    else {
                        cout << "Numero de conta invalido" << endl;
                    }

                    break;
            case 0:
                return 0;
                break;
        }

    }while(true);
}
