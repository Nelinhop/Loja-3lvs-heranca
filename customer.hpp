#ifndef customer_HPP
#define customer_HPP

#include <iostream>

using namespace std;

class Customer
{
private:
    string m_name;
    string m_cpf;
    string m_cell;
    int m_age;


public:
    Customer() : m_name(""), m_cpf(""){};

    Customer(string nome, string CPF="?",string cell=" ", int age=0) : m_name(nome), m_cpf(CPF), m_cell(cell), m_age(age) {};

    string GetName() { return m_name; };
    string GetCPF() { return m_cpf; };
    string GetCell(){ return m_cell; };
    int GetAge(){ return m_age; };

};


#endif
