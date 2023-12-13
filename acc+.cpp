#include "acc+.hpp"
#include <sstream>

string Accplus::GetInformation()
{
    stringstream sst;
    sst << Account::GetInformation();
    sst << " - Disconto nas compras: " << m_discount <<"%";
    return sst.str();
}

void Accplus::NewPurchase(float value){
m_bought+=value-((value/100)* m_discount);
m_points+=(value/2);
cout << "Transacao bem sucedida" << endl;

}

void Accplus::BuyWithPoints(float value){
    if(m_points >= value){
m_points-=value-((value/100)* m_discount);
cout << "Transacao bem sucedida" << endl;
    }
    else{
    cout << "Saldo insuficiente" << endl;
}
}
