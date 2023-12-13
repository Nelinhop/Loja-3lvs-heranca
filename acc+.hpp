#ifndef ACCPLUS_HPP
#define ACCPLUS_HPP

#include "acc.hpp"

class Accplus : public Account
{
protected:
    int m_discount;
public:
    Accplus() : m_discount(0) {};

    Accplus(Customer *customer, float points=0, int discount=5): Account(customer, points), m_discount(discount) {};

    string GetInformation();
    void NewPurchase(float value);
    void BuyWithPoints(float value);

};

#endif
