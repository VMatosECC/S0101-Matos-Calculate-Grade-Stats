// S0101-Matos-Calculate-Grade-Stats.cpp 
// Author:  V. Matos
// Goal:    Get course grades from keyboard and calculate max, min, avg, and std.

//Preprocessor declarations
#include <iostream>
#include <iomanip>
using namespace std;

//Global constants
const int N = 50;           //max class capacity

//Prototypes (Function Headers)
int  getData(int grades[], int n);
void calculateStats(int grades[], int actualSize, int& maxGrade, int& minGrade, double& avgGrade);
void showResults(int grades[], int actualSize, int maxGrade, int minGrade, double avgGrade);

int main()
{
    //Variable Declarations
    int grades[N]{};
    int maxGrade, minGrade, actualSize;
    double avgGrade, std;

    actualSize = getData(grades, N);
    calculateStats(grades, actualSize, maxGrade, minGrade, avgGrade);
    showResults(grades, actualSize, maxGrade, minGrade, avgGrade);

}

//-----------------------------------------------------------
//User-defined functions

int getData(int grades[], int n)
{
    int actualSize = 0;

    do
    {
        cout << "Enter class size [no more than " << N << "]: ";
        cin >> actualSize;
        if (actualSize > N)
            cout << "Error - too many students - try again\n";
        else
            break;
    } while (true);

    for (int i = 0; i < actualSize; i++)
    {
        cout << "Enter grade-" << (i + 1) << ": ";
        cin >> grades[i];
    }

    return actualSize;
}

//------------------------------------------------------------
void calculateStats(int grades[], int actualSize, int& maxGrade, int& minGrade, double& avgGrade)
{
    //TODO...
}

//-----------------------------------------------------------
void showResults(int grades[], int actualSize, int maxGrade, int minGrade, double avgGrade)
{
    //TODO...
}