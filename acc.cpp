#include "acc.hpp"
#include <sstream>

string Account::GetInformation()
{
    stringstream sst;

    if(m_customer == NULL)
    {
        sst << "Cliente nao informado";
    }
    else
    {
        sst << "Nome do cliente: " << m_customer->GetName() << " - " << "CPF: " << m_customer->GetCPF() << " - " << "Numero de telefone: " << m_customer->GetCell() << " - " << "Idade: " << m_customer->GetAge() << " - " << "Numero de ID da conta: " << m_code   << " - " << "Pontos: " << m_points << " - " << "Valor total gasto: " << m_bought;
    }

    return sst.str();
};

void Account::NewPurchase(float value){
m_bought+=value;
m_points+=(value/2);
cout << "Transacao bem sucedida" << endl;

}

void Account::BuyWithPoints(float value){
    if(m_points >= value){
m_points-=value;
cout << "Transacao bem sucedida" << endl;}
else{
    cout << "Saldo insuficiente" << endl;
}
}

void Account::operator -=(float value)
{
    m_points-=value;
}

void Account::operator +=(float value)
{
    m_points+=value;
}

void Account::operator <<(float value)
{
    m_bought+=value;
}
