// Project 2: Airgead Banking App
// Created by Maurice Wesley
// June 3rd, 20221

#include "Project2.h"                      // Preproccessor directives
#include "main.h"

using namespace std;

int main()
{
    RunProgram rP;                         // object instance type Run Program (rP)
    
    while (true) {                         // Loop start
        system("color 02");                // Set system color
        rP.DisplayMenu();                  // Function call to display menu
        rP.GetUserInput();                 // Function to get user input and display chart
        rP.CheckEndProgram();              // Function call to check end program
    }
}