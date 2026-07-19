#include "Test.h"

Test::Test()
{
    testID = 0;
    patientID = 0;
    testName = "";
    result = "";
    date = "";
}

Test::Test(int testID, int patientID, string testName, string result, string date)
{
    this->testID = testID;
    this->patientID = patientID;
    this->testName = testName;
    this->result = result;
    this->date = date;
}

int Test::getTestID()
{
    return testID;
}

int Test::getPatientID()
{
    return patientID;
}

string Test::getTestName()
{
    return testName;
}

string Test::getResult()
{
    return result;
}

string Test::getDate()
{
    return date;
}

void Test::setTestID(int testID)
{
    this->testID = testID;
}

void Test::setPatientID(int patientID)
{
    this->patientID = patientID;
}

void Test::setTestName(string testName)
{
    this->testName = testName;
}

void Test::setResult(string result)
{
    this->result = result;
}

void Test::setDate(string date)
{
    this->date = date;
}