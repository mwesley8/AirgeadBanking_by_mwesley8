#include "Results.h"

#include <vector>
#include <iomanip>
#include <memory>
#include <sstream>


    // Default constructor definition
    Results::Results() {}
    // Custom constructor definition
    Results::Results(int t_year, double t_yearEndBalance, double t_yearEndInterest) {
        SetYear(t_year);
        SetYearEndBalance(t_yearEndBalance);
        SetYearEndInterest(t_yearEndInterest);
    }
    
    void Results::SetYearEndBalance(double t_yearEndBalance) {      // Balance mutator function definition
        m_YearEndBalance = t_yearEndBalance;
    }

    double Results::GetYearEndBalance() const {                     // Balance accessor funciton definition
        return m_YearEndBalance;
    }

    void Results::SetYearEndInterest(double t_yearEndInterest) {    // Interest mutator function definition
        m_YearEndInterest = t_yearEndInterest;
    }

    double Results::GetYearEndInterest() const {                    // Interest accessor funciton definition
        return m_YearEndInterest;
    }

    void Results::SetYear(int t_year) {                             // Month mutator function definition
        m_Year = t_year;
    }

    int Results::GetYear() const {                                  // Month accessor funciton definition
        return m_Year;
    }

    void Results::PrintValues() const {
        string tempYearEndBalance;                                  // Declare variables and data type
        string tempYearEndInterest;
        stringstream ss1;                                           // Declare String Stream variables
        stringstream ss2;
        
        // Assign value to String Stream Objects
        ss1 << fixed << setprecision(2) << m_YearEndBalance;
        ss2 << fixed << setprecision(2) << m_YearEndInterest;
        
        // Assign String Stream Object values to variables
        ss1 >> tempYearEndBalance;
        ss2 >> tempYearEndInterest;
        
        // Formatted output to user
        cout << setw(5) << m_Year << right << setw(25) << "$" + tempYearEndBalance <<
                setw(30) << "$" + tempYearEndInterest << "\n" << endl;
    
    }
    