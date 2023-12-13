#ifndef ACC_HPP
#define ACC_HPP

#include "customer.hpp"

class Account
{
protected:
    Customer* m_customer;
    float m_points;
    float m_bought;
    int m_code;

public:
    Account() : m_customer(NULL), m_points(0),m_code(0) {};

    Account(Customer* customer,int code=0, float points=0, float bought=0) : m_customer(customer), m_points(points), m_bought(bought), m_code(code) {};

    ~Account(){};


    string GetInformation();
    float GetPoints() { return m_points;};
    float GetBought() { return m_bought;};
    void NewPurchase(float value);
    void BuyWithPoints(float value);
    void operator -=(float value);
    void operator +=(float value);
    void operator <<(float value);
};





#endif
