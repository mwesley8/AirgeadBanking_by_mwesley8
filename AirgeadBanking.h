#ifndef AIRGEADBANKING_H
#define AIRGEADBANKING_H

#include <iostream>                                   // Preprocessor directives
#include <string>
#include <vector>
#include <iomanip>
#include <memory>

using namespace std;

class AirgeadBanking                                   // Declare class
{

private:                                               // Private access specifier
    int    m_Month{};                                  // Declare private member variables
    double m_OpeningAmount{};
    double m_DepositAmount{};
    double m_Total{};
    double m_Interest{};
    double m_ClosingBalance{};
public:                                                 // Public access specifier
    vector <AirgeadBanking> noDeposit;                  // Declare vector of class object type
    vector <AirgeadBanking> withDeposit;                // Declare vector of class object type

    // Class overloaded constructor
    AirgeadBanking(int t_month, double t_openingAmount, double t_depositAmount, double t_total,
        double t_interest, double t_closingBalance) {
        SetMonth(t_month);
        SetOpeningAmount(t_openingAmount);
        SetDepositAmount(t_depositAmount);
        SetTotal(t_total);
        SetInterest(t_interest);
        SetClosingBalance(t_closingBalance);
    }
    // Explicit declaration of the default constructor
    AirgeadBanking();

    void SetMonth(int t_month);                          // Declare mutator to set m_Month object instance value
    void SetOpeningAmount(double t_openingAmount);       // Declare mutator to set m_OpeningAmount object instance value
    void SetDepositAmount(double t_depositAmount);       // Declare mutator to set m_DepositAmount object instance value
    void SetTotal(double t_total);                       // Declare mutator to set m_Total Amount object instancevalue
    void SetInterest(double t_interest);                 // Declare mutator to set m_Interest object instance value
    void SetClosingBalance(double t_closingBalance);     // Declare mutator to set m_ClosingBalance object instance value
    
    int GetMonth() const;                                // Declare accessor to retrieve m_Month object instance value
    double GetOpeningAmount() const;                     // Declare accessor to retrieve m_OpeningAmount object instance value
    double GetDepositAmount() const;                     // Declare accessor to retrieve m_DepositAmount object instance value
    double GetTotal() const;                             // Declare accessor to retrieve m_Total object instance value
    double GetInterest() const;                          // Declare accessor to retrieve m_Interest object instance value
    double GetClosingBalance() const;                    // Declare accessor to retrieve m_ClosingBalance object instance value
    
    void DisplayChart();                                 // Display formatted chart of data members
};

#endif
