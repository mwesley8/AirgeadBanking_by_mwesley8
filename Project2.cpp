#include "Project2.h"                                                 // Preproccessor directives
#include <string>                    
#include <sstream>
#include <vector>
#include <iomanip>
#include <iostream>
#include <memory>
#include <regex>
#include "AirgeadBanking.h"
#include "Results.h"


using namespace std;


double RunProgram::CheckInvestmentAmount() {
    // ** Function to Validate User Investment Amount Input**
    bool invalid = true;                                              // Declare loop variable and data type 
    string userInvestment;                                            // Declare user input variable and data type
    int userInvested;                                                 // Declare return variable and data type
    while (invalid) {                                                 // Loop start
        cout << "Enter initial investment amount: \n";                // Output to user
        try                                                           // Exception handling
        {
            getline(cin, userInvestment, '\n');                       // Get user input
            //cin >> setw(2) >> userInvestment;                       // Optional to limit input size
            userInvested = stod(userInvestment);                      // Parse double from user input
            if (userInvested > 0) {
                cin.clear();                                          // Clear input stream
                invalid = false;
            }
            else {
                system("color 40");                                   // Set console color
                cout << "\nEnter a number greater than zero" << endl; // Output to user
                cin.clear();                                          // Clear input stream
                system("pause");                                      // System pause
                system("cls");                                        // Clear console window
                system("color 02");
            }
        }
        catch (exception e)                                           // Exception handling
        {
            system("color 40");                                       // Set console color
            cout << "\nInvaild input. Please try again.\n" << endl;   // Output to user
            cin.clear();                                              // Clear input stream
            system("pause");                                          // System pause
            system("cls");                                            // Clear console window
            system("color 02");                                       // Set console color
        }
    }
    return userInvested;                                              // Return value to function call
}
double RunProgram::CheckMonthlyAmount() {
    // ** Function to Validate User Monthly Amount Input**
    bool invalid = true;                                              // Declare loop variable and data type
    string userMonthly;                                               // Declare user input and data type
    int userMonthlyAmount;                                            // Declare return variable and data type

    while (invalid) {                                                 // Loop start
        cout << "Enter monthly deposit: \n";                          // Output to user
        try                                                           // Exceptioin handling
        {
            getline(cin, userMonthly, '\n');                          // Get user input
            userMonthlyAmount = stod(userMonthly);                    // Parse double from user input
            if (userMonthlyAmount > 0) {
                cin.clear();                                          // Clear input stream
                invalid = false;
            }
            else {
                system("color 40");                                   // Set console color
                cout << "\nEnter a number greater than zero" << endl; // Output to user
                cin.clear();                                          // Clear input stream
                system("pause");                                      // System pause
                system("cls");                                        // Clear console window
                system("color 02");
            }
        }
        catch (exception e)                                           // Exception handling
        {
            system("color 40");                                       // Set console color
            cout << "\nInvaild input. Please try again.\n" << endl;   // Output to user
            cin.clear();                                              // Clear input stream
            system("pause");                                          // System pause
            system("cls");                                            // Clear console window
            system("color 02");                                       // Set console color
        }
    }
    return userMonthlyAmount;                                         // Return value to function call
}
double RunProgram::CheckInterestRate() {
    // ** Function to Validate User Interest Amount Input**
    bool invalid = true;                                              // Declare loop variable and data type
    string userInterest;                                              // Declare user input and data type
    int userInterestEntered;                                          // Declare return variable and data type

    while (invalid) {                                                 // Loop start and condition
        cout << "Enter interest rate (i.e. 2.5 for 2.5%): \n";        // Output to user
        try                                                           // Exception handling
        {
            getline(cin, userInterest, '\n');                         // Get user input
            userInterestEntered = stod(userInterest);                 // Parse double from user input
            if (userInterestEntered > 0) {
                cin.clear();                                          // Clear input stream
                invalid = false;
            }
            else {
                system("color 40");                                   // Set console color
                cout << "\nEnter a number greater than zero" << endl; // Output to user
                cin.clear();                                          // Clear input stream
                system("pause");                                      // System pause
                system("cls");                                        // Clear console window
                system("color 02");
            }
        }
        catch (exception e)                                           // Exception handling
        {
            system("color 40");                                       // Set console color
            cout << "\nInvaild input. Please try again.\n" << endl;   // Output to user
            cin.clear();                                              // Clear input stream
            system("pause");                                          // System pause
            system("cls");                                            // Clear console
            system("color 02");                                       // Set console color
        }
    }
    return userInterestEntered;                                       // Return value to function call
}
int RunProgram::CheckNumYears() {
    // ** Function to Validate User Term Input**
    bool invalid = true;                                              // Declare loop variable and data type
    string userYears;                                                 // Declare user input and data type
    int userTerm;                                                     // Declare return variable and data type

    while (invalid) {                                                 // Loop start
        cout << "Enter number of years: \n";                          // Output to user
        try                                                           // Exception handling
        {
            getline(cin, userYears, '\n');                            // Get user input
            userTerm = stoi(userYears);                               // Parse integer from user input
            if (userTerm > 0) {
                cin.clear();                                          // Clear input stream
                invalid = false;
            }
            else {
                system("color 40");                                   // Set console color
                cout << "\nEnter a number greater than zero" << endl; // Output to user
                cin.clear();                                          // Clear input stream
                system("pause");                                      // System pause
                system("cls");                                        // Clear console window
                system("color 02");
            }
        }
        catch (exception e)                                           // Exception handling
        {
            system("color 40");                                       // Set console color
            cout << "\nInvaild input. Please try again.\n" << endl;   // Output to user
            cin.clear();                                              // Clear input stream
            system("pause");                                          // System pause
            system("cls");                                            // Clear console window
            system("color 02");                                       // Set console color
        }
    }
    return userTerm;                                                  // Return value to function call
}
void RunProgram::DisplayMenu() {
    // **Function to Display Menu to User**
    system("cls");                                                    // Clear console window
    string firstLine{ "*************************************" };      // Declare variables and data types
    string secondLine{ "************ Data Input *************" };
    string thirdLine{ "Initial Investment Amount: " };
    string fourthLine{ "Monthly Deposit: " };
    string fifthLine{ "Annual Interest Rate: " };
    string sixthLine{ "Number of years: " };

    cout << firstLine << endl;                                        // Output to user
    cout << secondLine << endl;
    cout << thirdLine << endl;
    cout << fourthLine << endl;
    cout << fifthLine << endl;
    cout << sixthLine << "\n" << endl;
}
void RunProgram::ChartOfValues(vector<AirgeadBanking>& t_table) {
    //**Function to print elements in vector**

    // Loop to intereate over vector
    for (auto info : t_table) {
        info.DisplayChart();
    }
}

void RunProgram::YearEndBalance(vector<AirgeadBanking>& t_withDeposit) {
    // **Function to Calculate and Dispaly End Of Year Balance and Interest** 

    // Declare instance of class object type Results
    Results yeb;                                        // yeb is year end balance

    double sum = 0;
    double year = 1;
    // Loop to interate through pass by referenced vector
    for (int i = 0; i < t_withDeposit.size(); ++i) {
        // Sum interest in intervals
        sum += t_withDeposit.at(i).GetInterest();
        // Condition to check every 12 records
        if (((i + 1) % 12) == 0) {
            yeb.SetYearEndBalance(t_withDeposit.at(i).GetClosingBalance());
            yeb.SetYearEndInterest(sum);
            yeb.SetYear(year);
            // Add instance to vector
            yeb.m_EndBalance.push_back(yeb);
            // Reinitialize sum to zero
            sum = 0;
            // Increment year
            year += 1;
        }
    }
    // Header for chart output to user
    cout << setfill('=') << setw(63) << "" << setfill(' ') << endl;
    cout << right << setw(5) << "Year" << right << setw(25) <<
        "Year End Balance" << setw(30) << "Year Earned Interest" << endl;
    cout << setfill('-') << setw(63) << "" << setfill(' ') << endl;
    // Display output with formatted instance of member variables
    for (auto info : yeb.m_EndBalance) {
        info.PrintValues();
    }
}
void RunProgram::GetUserInput() {
    //**Function to Get User Input and Store Elements In A Vector**

    // Declare variables and data types
    string firstLine{ "*************************************" };
    string secondLine{ "************ Data Input *************" };
    string thirdLine{ "Initial Investment Amount: " };
    string fourthLine{ "Monthly Deposit: " };
    string fifthLine{ "Annual Interest Rate: " };
    string sixthLine{ "Number of years: " };

    int months{};
    int numYears{};

    double openingAmount{};
    double depositAmount{};
    double interest{};
    double closingBalance{};
    double accruedInterest{};
    double accruedInterest1{};

    // Declare object instance of class type Airgead Banking
    AirgeadBanking ab;
    AirgeadBanking ab1;
    RunProgram aP;

    // Get user input with function calls
    openingAmount = CheckInvestmentAmount();
    depositAmount = CheckMonthlyAmount();
    interest = CheckInterestRate();
    numYears = CheckNumYears();

    // Assign value to variable and pass value to mutator
    months = numYears * 12;
    ab.SetMonth(1);
    ab1.SetMonth(1);

    // Assign values to mutators for with deposit vector
    ab.SetOpeningAmount(openingAmount);
    ab.SetDepositAmount(depositAmount);
    ab.SetTotal(openingAmount + depositAmount);

    // Assign values to mutattors for without deposit vector
    ab1.SetOpeningAmount(openingAmount);
    ab1.SetDepositAmount(0);
    ab1.SetTotal(openingAmount + ab1.GetDepositAmount());

    // Assign interest
    interest = interest / 100;

    // Calculate and Assign interest to variable for with deposit vector
    accruedInterest = ((ab.GetTotal()) * (interest / 12));

    // Calculate and Assign interest to variable for without deposit vector
    accruedInterest1 = ((ab1.GetTotal()) * (interest / 12));

    // Pass values to mutators for with deposit vector
    ab.SetInterest(accruedInterest);
    ab.SetClosingBalance(accruedInterest + ab.GetTotal());

    // Pass values to mutators for without deposit vector
    ab1.SetInterest(accruedInterest1);
    ab1.SetClosingBalance(accruedInterest1 + ab1.GetTotal());

    // Add custom object to vectors
    ab.withDeposit.push_back(ab);
    ab1.noDeposit.push_back(ab1);

    // Loop to add elements to with deposit vector
    for (int i = 2; i <= months; ++i) {
        ab.SetMonth(i);
        ab.SetOpeningAmount(ab.GetClosingBalance());
        ab.SetDepositAmount(depositAmount);
        ab.SetTotal(ab.GetOpeningAmount() + ab.GetDepositAmount());
        ab.SetInterest((ab.GetTotal()) * (interest / 12));
        ab.SetClosingBalance(ab.GetInterest() + ab.GetTotal());

        // Create custom object using overloaded constructor
        AirgeadBanking wd(ab.GetMonth(), ab.GetOpeningAmount(), ab.GetDepositAmount(), ab.GetTotal(),
            ab.GetInterest(), ab.GetClosingBalance());

        // Add custom object to with deposit vector
        ab.withDeposit.push_back(wd);
    }
    // Loop to add elements to without deposit vector
    
    for (int i = 2; i <= months; ++i) {
        ab1.SetMonth(i);
        ab1.SetOpeningAmount(ab1.GetClosingBalance());
        ab1.SetDepositAmount(0);
        ab1.SetTotal(ab1.GetOpeningAmount() + ab1.GetDepositAmount());
        ab1.SetInterest((ab1.GetTotal()) * (interest / 12));
        ab1.SetClosingBalance(ab1.GetInterest() + ab1.GetTotal());

        // Create custom object instance using overloaded constructor
        AirgeadBanking nd(ab1.GetMonth(), ab1.GetOpeningAmount(), ab1.GetDepositAmount(), ab1.GetTotal(),
            ab1.GetInterest(), ab1.GetClosingBalance());

        // Add custom object to without deposit vector
        ab1.noDeposit.push_back(nd);
    }
    system("cls");

    // Output to user
    cout << firstLine << endl;
    cout << secondLine << endl;
    cout << thirdLine << "$" << fixed << setprecision(2) << openingAmount << endl;
    cout << fourthLine << "$" << fixed << setprecision(2) << depositAmount << endl;
    cout << fifthLine << fixed << setprecision(0) << interest * 100 << "%" << endl;
    cout << sixthLine << numYears << endl;
    cout << fixed << setprecision(2);

    system("pause");
    cout << "\n" << endl;

    // Formatted Header Output to user
    cout << right << setw(59) << "Balance and Interest Without Additional Monthly Deposits" << endl;

    // Function call to retrieve formatted output of without deposit vector elements
    YearEndBalance(ab1.noDeposit);

    // Formatted Header Ourput to user
    cout << right << setw(58) << "Balance and Interest With Additional Monthly Deposits" << endl;

    // Function call to retrieve formatted output of with deposit vector elements
    YearEndBalance(ab.withDeposit);

    system("pause");

    // Display Chart
    cout << setw(50) << right << "Chart without Deposits" << endl;
    printf("  Month  Opening Amount  Deposit Amount    Total    Interest  Closing Balance\n");

    // Function call to retrieve chart of without deposit vector elements
    ChartOfValues(ab1.noDeposit);
    cout << "\n" << endl;
    system("pause");

    //Display Chart
    cout << setw(50) << right << "Chart with Deposits" << endl;
    printf("  Month  Opening Amount  Deposit Amount    Total    Interest  Closing Balance\n");

    // Function call to retrieve chart of with deposit vector elements
    ChartOfValues(ab.withDeposit);
    cout << "\n" << endl;
    system("pause");
}
bool RunProgram::CheckEndProgram() {
    //**Function to Check if User Wants to End Program**
    char userInput;                                                   // Declare user input variable and data type

    while (true) {                                                    // Loop start
        system("cls");                                                // Clear console window
        cout << "\n\nWould you like to countinue?" << endl;           // Output to user
        cout << "\n\n";
        cout << "Press Y or y for yes or N or n for no." << endl;     // Output to user
        cin >> setw(1) >> userInput;                                  // Get user input
        userInput = toupper(userInput);                               // Reassign user input

        if (userInput == 'Y') {                                       // Condition to check user input
            cin.clear();                                              // Clear input stream
            cin.ignore(INT_MAX, '\n');                                // Ignore spaces and characters after user input
            return true;                                              // Exit loop
        }
        if (userInput == 'N') {                                       // Condition to check user input
            cout << "\n" << endl;
            cout << "Thank you!!" << endl;                            // Output to user
            cout << "\n\n\n" << endl;
            exit(0);                                                  // Exit program
        }
        else {                                                        // Condition when previous conditions false
            cout << "Please enter a valid option" << endl;            // Output to user
            cout << "\n\n\n";
            system("pause");                                          // System pause
            system("cls");                                            // Clear console window output
            cin.clear();                                              // Clear input stream
            cin.ignore(INT_MAX, '\n');                                // Ignore spaces and characters after user input
        }
    }
}