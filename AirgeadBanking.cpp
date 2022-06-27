#include "AirgeadBanking.h"                                              // Preprocessor directives

#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <memory>
#include <sstream>

using namespace std;

    AirgeadBanking::AirgeadBanking() {};                                 // Default constuctor definition

    void AirgeadBanking::SetMonth(int t_month) {                         // Mutate/Set/Change object instance month
        m_Month = t_month;
    }
    void AirgeadBanking::SetOpeningAmount(double t_openingAmount) {      // Mutate/Set/Change object instance opening amount
        m_OpeningAmount = t_openingAmount;
    }
    void AirgeadBanking::SetDepositAmount(double t_depositAmount) {      // Mutate/Set/Change object instance deposit amount
        m_DepositAmount = t_depositAmount;
    }
    void AirgeadBanking::SetTotal(double t_total) {                      // Mutate/Set/Change object instance total amount
        m_Total = t_total;
    }
    void AirgeadBanking::SetInterest(double t_interest) {                // Mutate/Set/Change object instance interest amount
        m_Interest = t_interest;
    }
    void AirgeadBanking::SetClosingBalance(double t_closingBalance) {    // Mutate/Set/Change object instance closing balance
        m_ClosingBalance = t_closingBalance;
    }
    int AirgeadBanking::GetMonth() const{                                // Access object instance month
        return m_Month;
    }
    double AirgeadBanking::GetOpeningAmount() const {                    // Access object instance opening amount
        return m_OpeningAmount;
    }
    double AirgeadBanking::GetDepositAmount() const {                    // Access object instance deposit amount
        return m_DepositAmount;
    }
    double AirgeadBanking::GetTotal() const {                            // Access object instance total amount
        return m_Total;
    }
    double AirgeadBanking::GetInterest() const {                         // Access object instance interest amount
        return m_Interest;
    }
    double AirgeadBanking::GetClosingBalance() const {                   // Access object instance closing balance
        return m_ClosingBalance;
    }
    void AirgeadBanking::DisplayChart() {                                // Formatted output of object instance member variables
        stringstream oA;                                                 // String stream object instance opening amount
        stringstream dA;                                                 // String stream object instance deposit amount                                                 
        stringstream tA;                                                 // String stream object instance total amount
        stringstream iA;                                                 // String stream object instance interest amount
        stringstream cB;                                                 // String stream object instance closing balance

        string tempOA;                                                   // Temp variable opening amount
        string tempDA;                                                   // Temp variable deposit amount
        string tempTA;                                                   // Temp variable total amount
        string tempIA;                                                   // Temp variable interest amount
        string tempCB;                                                   // Temp variable closing balance

        // Format variables to string stream objects
        oA << "$" << fixed << setprecision(2) << m_OpeningAmount;
        dA << "$" << fixed << setprecision(2) << m_DepositAmount;
        tA << "$" << fixed << setprecision(2) << m_Total;
        iA << "$" << fixed << setprecision(2) << m_Interest;
        cB << "$" << fixed << setprecision(2) << m_ClosingBalance;

        // Assign formatted string stream to temp variables
        oA >> tempOA;
        dA >> tempDA;
        tA >> tempTA;
        iA >> tempIA;
        cB >> tempCB;

        // Formatted output of object instance member variables
        cout << right << setw(5) << m_Month << right << setw(14) << tempOA << setw(16) << tempDA
            << setw(13) << tempTA << setw(12) << tempIA << setw(15) << tempCB << endl;
    }
