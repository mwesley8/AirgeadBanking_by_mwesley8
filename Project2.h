#ifndef PROJECT2_H
#define PROJECT2_H
#include "AirgeadBanking.h"
#include <vector>

class RunProgram {
public:
	// Member function declarations
	double CheckInvestmentAmount();
	double CheckMonthlyAmount();
	double CheckInterestRate();
	int CheckNumYears();
	
	void DisplayMenu();
	void ChartOfValues(vector<AirgeadBanking>& t_table);
	void YearEndBalance(vector<AirgeadBanking>& t_DepositTable);
	void GetUserInput();
	bool CheckEndProgram();
};

#endif
