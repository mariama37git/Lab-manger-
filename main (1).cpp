#include <iostream>
#include "Patient.h"
#include "Test.h"

using namespace std;

int main()
{
    Patient p1(1, "Mariam", 20, "01012345678");

    Test t1(1, 1, "CBC", "Normal", "18/07/2026");

    cout << "Patient: " << p1.getName() << endl;
    cout << "Test: " << t1.getTestName() << endl;
    cout << "Result: " << t1.getResult() << endl;
    cout << "Date: " << t1.getDate() << endl;

    return 0;
}