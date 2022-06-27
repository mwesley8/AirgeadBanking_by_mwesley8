#ifndef RESULTS_H
#define RESULTS_H

#include <iostream>
#include <vector>
#include <iomanip>
#include <memory>

using namespace std;

class Results                                            // Class declaration
{
    private:                                             // Access specifier
        double m_YearEndBalance{};                       // Member variables
        double m_YearEndInterest{};
        int m_Year{};

    public:                                              // Access specifier
        vector <Results> m_EndBalance;

        // Default constructor declaration
        Results();
        // Custom constructor declaration
        Results(int t_year, double t_yearEndBalance, double t_yearEndInterst);

        void SetYearEndBalance(double t_yearEndBalance);    // Balance mutator declaration

        double GetYearEndBalance() const;                   // Balance accessor declaration

        void SetYearEndInterest(double t_yearEndInterest);  // Interest mutator declaration

        double GetYearEndInterest() const;                  // Interest accessor declaration
        
        void SetYear(int t_year);                           // Month mutator declaration
        
        int GetYear() const;                                // Month accessor declaration
        
        void PrintValues() const;                           // Print member variable object instances
};
#endif
