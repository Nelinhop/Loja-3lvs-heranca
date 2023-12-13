#ifndef ACCBLACK_HPP
#define ACCBLACK_HPP

#include "acc+.hpp"

class Accblack : public Accplus
{
protected:
    int m_discount;
    float m_credit;
    float m_limit;

public:
    Accblack() : m_discount(0), m_credit(0), m_limit(0) {};

    Accblack(Customer *client, float points=0, int discount=10, float credit=0, float limit=2000): Accplus(client, points), m_discount(discount), m_credit(credit), m_limit(limit) {};

    string GetInformation();
    void BuyInCredit(float value);
    void PayCredit(float value);
    void operator -=(float value);
    void operator +=(float value);

};

#endif
