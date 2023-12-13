#include "acc++.hpp"
#include <sstream>

string Accblack::GetInformation()
{
    stringstream sst;
    sst << Account::GetInformation();
    sst << " - Disconto nas compras: " << m_discount <<"%" << " - Credito: "<< m_credit << " - Limite: " << m_limit;
    return sst.str();
}

void Accblack::BuyInCredit(float value){
    if((m_credit+value) < m_limit){
    m_credit+=value;}
    else{
        cout << "Credito insuficiente" << endl;
    }
}

void Accblack::PayCredit(float value){
    if(value <= m_credit){
    m_credit-=value;
    NewPurchase(value);}
    else{
        cout << "Valor excede seu credito" << endl;
    }
}

void Accblack::operator -=(float value)
{
    m_credit-=value;
}

void Accblack::operator +=(float value)
{
    m_credit+=value;
}
