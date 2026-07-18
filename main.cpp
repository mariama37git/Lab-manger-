#include <iostream>
#include "Patient.h"

using namespace std;

int main()
{
    Patient p1(1, "Mariam", 20, "01012345678");

    cout << "ID: " << p1.getId() << endl;
    cout << "Name: " << p1.getName() << endl;
    cout << "Age: " << p1.getAge() << endl;
    cout << "Phone: " << p1.getPhone() << endl;

    return 0;
}