#ifndef TEST_H
#define TEST_H

class Test
{

private:
    string result;
    string nameTest;
    string date;
    int testId;
    int patientId;

public:
    Test();
    Test(int testId, int patientId, string date, string nameTest, string result );

    string getResult();
    string date();
    string nameTest();
    int testId();
    int patientId();

    void setTestId(int testId);
    void setResult(string result);
    void setNameTest(string nameTest);
    void setDate(string date);
    void setPatientId(int patientId);


};

#endif


