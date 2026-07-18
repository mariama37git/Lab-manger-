#ifndef PATIENT_H
#define PATIENT_H

#include <string>
using namespace std;

class Patient
{
private:
    int id;
    string name;
    int age;
    string phone;

public:
    Patient();

    Patient(int id, string name, int age, string phone);

    string getName();
    string getPhone();
    int getId();
    int getAge();
    
    void setId(int id);
    void setName(string name);
    void setAge(int age);
    void setPhone(string phone);
};

#endif