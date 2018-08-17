// Hope kim
// ITP 165, Fall 2017
// Homework 2
// hopekim@usc.edu

#include <iostream>
#include <string>
#include <cmath>
int main()
{
    double purchase = 0;
    double down = 0;
    double tax = 0;
    std::string answer = "y";
    double value = 0;
    double owed = 0;
    // Title
    std::cout << "Bank of ITP – Auto Loan Payment Calculator" << std::endl;
    
    // Purchase price input
    std::cout << "Enter the vehicle's purchase price: ";
    std::cin >> purchase;
    
    // Down payment input
    std::cout << "Enter the down payment for the vehicle: ";
    std::cin >> down;
    
    // Sales tax input
    std::cout << "Enter the sales tax on the transaction (for 8.25% tax, enter 8.25): ";
    std::cin >> tax;
    
    // Trade-in answer (y/n) input
    std::cout << "Do you have a vehicle to trade in? (y/n): ";
    std::cin >> answer;
    
    if (answer == "y" || answer == "Y")
    {
        // Trade-in value input
        std::cout << "Enter the trade-in value of your current vehicle: ";
        std::cin >> value;
    }
    
    // Amount owed input
    std::cout << "Enter the amount owed on your current vehicle: ";
    std::cin >> owed;
    
    // Down payment calculation
    double totalDown = down + (value-owed);
    
    // Loan amount calculation
    double loan = (purchase-totalDown)*(1+(tax/100));
    
    // Down payment and loan amount output
    std::cout << "Your overall down payment is $" << totalDown << std::endl;
    std::cout << "Your overall loan amount is $" << loan << std::endl;
    std::cout << "*****************************" << std::endl;
    
    // Number of payments
    std::cout << "Enter the length of your loan..." << std::endl;
    std::cout << "\t1: 3 years" << std::endl;
    std::cout << "\t2: 4 years" << std::endl;
    std::cout << "\t3: 5 years" << std::endl;
    std::cout << "\t4: 6 years" << std::endl;
    std::cout << "Select an option: ";

    // Switch statement with option select, interest rates, & monthly payment
    double percentDown = (totalDown/purchase)*100;
    double interestRate = 0;
    double monthlyInterest = 0;
    double monthlyPayment = 0;
    
    int select = 4;
    std::cin >> select;
    switch (select)
    {
        // 3 year loan
        case 1:
            std::cout << "You selected a 3 year loan with a total of 36 monthly payments." << std::endl;
            std::cout << "*****************************" << std::endl;
            // If Percent Down < 20%
            if (percentDown < 20)
            {
                interestRate = 4.00;
                std::cout <<  "With " << percentDown << "% down and a 3 year loan, we can offer you an interest rate of " << interestRate <<"%." << std::endl;
                std::cout << "*****************************" << std::endl;
                monthlyInterest = interestRate/1200;
                monthlyPayment = loan*((monthlyInterest)/((1-std::pow((1+monthlyInterest), -36))));
                std::cout << "Your estimated monthly payment would be $" << monthlyPayment << " a month." << std::endl;
                
            }
            // If Percent Down >= 20%
            if (percentDown >= 20)
            {
                interestRate = 3.70;
                std::cout <<  "With " << percentDown << "% down and a 3 year loan, we can offer you an interest rate of " << interestRate <<"%." << std::endl;
                std::cout << "*****************************" << std::endl;
                monthlyInterest = interestRate/1200;
                monthlyPayment = loan*((monthlyInterest)/((1-std::pow((1+monthlyInterest), -36))));
                std::cout << "Your estimated monthly payment would be $" << monthlyPayment << " a month." << std::endl;
            }
            break;
        // 4 year loan
        case 2:
            std::cout << "You selected a 4 year loan with a total of 48 monthly payments." << std::endl;
            std::cout << "*****************************" << std::endl;
            // If Percent Down < 20%
            if (percentDown < 20)
            {
                interestRate = 4.33;
                std::cout <<  "With " << percentDown << "% down and a 4 year loan, we can offer you an interest rate of " << interestRate <<"%." << std::endl;
                std::cout << "*****************************" << std::endl;
                monthlyInterest = interestRate/1200;
                monthlyPayment = loan*((monthlyInterest)/((1-std::pow((1+monthlyInterest), -48))));
                std::cout << "Your estimated monthly payment would be $" << monthlyPayment << " a month." << std::endl;
            }
            // If Percent Down >= 20%
            if (percentDown >= 20)
            {
                interestRate = 3.80;
                std::cout <<  "With " << percentDown << "% down and a 4 year loan, we can offer you an interest rate of " << interestRate <<"%." << std::endl;
                std::cout << "*****************************" << std::endl;
                monthlyInterest = interestRate/1200;
                monthlyPayment = loan*((monthlyInterest)/((1-std::pow((1+monthlyInterest), -48))));
                std::cout << "Your estimated monthly payment would be $" << monthlyPayment << " a month." << std::endl;
            }
            break;
        // 5 year loan
        case 3:
            std::cout << "You selected a 5 year loan with a total of 60 monthly payments." << std::endl;
            std::cout << "*****************************" << std::endl;
            // If Percent Down < 20%
            if (percentDown < 20)
            {
                interestRate = 4.66;
                std::cout <<  "With " << percentDown << "% down and a 5 year loan, we can offer you an interest rate of " << interestRate <<"%." << std::endl;
                std::cout << "*****************************" << std::endl;
                monthlyInterest = interestRate/1200;
                monthlyPayment = loan*((monthlyInterest)/((1-std::pow((1+monthlyInterest), -60))));
                std::cout << "Your estimated monthly payment would be $" << monthlyPayment << " a month." << std::endl;
            }
            // If Percent Down >= 20%
            if (percentDown >= 20)
            {
                interestRate = 3.90;
                std::cout <<  "With " << percentDown << "% down and a 5 year loan, we can offer you an interest rate of " << interestRate <<"%." << std::endl;
                std::cout << "*****************************" << std::endl;
                monthlyInterest = interestRate/1200;
                monthlyPayment = loan*((monthlyInterest)/((1-std::pow((1+monthlyInterest), -60))));
                std::cout << "Your estimated monthly payment would be $" << monthlyPayment << " a month." << std::endl;
            }
            break;
        // 6 year loan
        case 4:
            std::cout << "You selected a 6 year loan with a total of 72 monthly payments." << std::endl;
            std::cout << "*****************************" << std::endl;
            // If Percent Down < 20%
            if (percentDown < 20)
            {
                interestRate = 5.00;
                std::cout <<  "With " << percentDown << "% down and a 6 year loan, we can offer you an interest rate of " << interestRate <<"%." << std::endl;
                std::cout << "*****************************" << std::endl;
                monthlyInterest = interestRate/1200;
                monthlyPayment = loan*((monthlyInterest)/((1-std::pow((1+monthlyInterest), -72))));
                std::cout << "Your estimated monthly payment would be $" << monthlyPayment << " a month." << std::endl;
            }
            // If Percent Down >= 20%
            if (percentDown >= 20)
            {
                interestRate = 4.00;
                std::cout << "*****************************" << std::endl;
                std::cout <<  "With " << percentDown << "% down and a 6 year loan, we can offer you an interest rate of " << interestRate <<"%." << std::endl;
                monthlyInterest = interestRate/1200;
                monthlyPayment = loan*((monthlyInterest)/((1-std::pow((1+monthlyInterest), -72))));
                std::cout << "Your estimated monthly payment would be $" << monthlyPayment << " a month." << std::endl;
            }
            break;
        // Invalid option
        default:
            std::cout << "Invalid option: as a default, you selected a 5 year loan with a total of 60 monthly payments" <<std::endl;
            std::cout << "*****************************" << std::endl;
            // If Percent Down < 20%
            if (percentDown < 20)
            {
                interestRate = 4.66;
                std::cout <<  "With " << percentDown << "% down and a 5 year loan, we can offer you an interest rate of " << interestRate <<"%." << std::endl;
                std::cout << "*****************************" << std::endl;
                monthlyInterest = interestRate/1200;
                monthlyPayment = loan*((monthlyInterest)/((1-std::pow((1+monthlyInterest), -60))));
                std::cout << "Your estimated monthly payment would be $" << monthlyPayment << " a month." << std::endl;
            }
            // If Percent Down >= 20%
            if (percentDown >= 20)
            {
                interestRate = 3.90;
                std::cout <<  "With " << percentDown << "% down and a 5 year loan, we can offer you an interest rate of " << interestRate <<"%." << std::endl;
                std::cout << "*****************************" << std::endl;
                monthlyInterest = interestRate/1200;
                monthlyPayment = loan*((monthlyInterest)/((1-std::pow((1+monthlyInterest), -60))));
                std::cout << "Your estimated monthly payment would be $" << monthlyPayment << " a month." << std::endl;
            }
            break;
    }
    return 0;
}
