#include "Patient.h"

Patient::Patient()
{
    id = 0;
    name = "";
    age = 0;
    phone = "";
}

Patient::Patient(int id, string name, int age, string phone)
{
    this->id = id;
    this->name = name;
    this->age = age;
    this->phone = phone;
}

int Patient::getId()
{
    return id;
}

string Patient::getName()
{
    return name;
}

int Patient::getAge()
{
    return age;
}

string Patient::getPhone()
{
    return phone;
}

void Patient::setId(int id)
{
    this->id = id;
}

void Patient::setName(string name)
{
    this->name = name;
}

void Patient::setAge(int age)
{
    this->age = age;
}

void Patient::setPhone(string phone)
{
    this->phone = phone;
}