#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class Investment {
    public:
        void SetInvestment(double userInvestAmount);
        void SetDeposit(double userDepositAmount);
        void SetAnnualInterest(double userInterestRate);  
        void SetNumOfYears(int userInvestYears);

        double GetInvestment();
        double GetDeposit();
        double GetAnnualInterest();
        int GetNumOfYears();

        void StartupScreen();
        void InputInfo();

        void BalanceWithDeposit();
        void BalanceWithoutDeposit();

    private:
        double investAmount = 0;
        double depositAmount = 0;
        double interestRate = 0;
        int investYears = 0;
        double openAmount = 0;
        double total  = 0;
        double closingAmount = 0;
        double interestAddAmount = 0;
        int monthTotal = 0;
};

    


    void Investment::SetInvestment(double userInvestAmount){
        investAmount = userInvestAmount;
    }
    void Investment::SetDeposit(double userDepositAmount){
        depositAmount = userDepositAmount;
    }
    void Investment::SetAnnualInterest(double userInterestRate){ // mutators and accessors for the private variables in the Investment class. 
        interestRate = userInterestRate;
    }
    void Investment::SetNumOfYears(int userInvestYears){
        investYears = userInvestYears;
    }
    double Investment::GetInvestment(){
        return investYears;
    }
    double Investment::GetDeposit(){
        return depositAmount;
    }
    double Investment::GetAnnualInterest(){
        return interestRate;
    }
    int Investment::GetNumOfYears(){
        return investYears;
    }
    void Investment::StartupScreen() {
        cout << ":::====  ::: :::====  :::=====  :::===== :::====  :::==== " << endl;
        cout << ":::  === ::: :::  === :::       :::      :::  === :::  ===" << endl;
        cout << "======== === =======  === ===== ======   ======== ===  ===" << endl;   // logo for Airgead
        cout << "===  === === === ===  ===   === ===      ===  === ===  ===" << endl;
        cout << "===  === === ===  ===  =======  ======== ===  === ======="  << endl;
        cout << endl << endl;
    }
    void Investment::InputInfo() {
        double tempd;
        int tempint;
        cout << "===============================\n";
        cout << "======== Data Input ===========\n"; // gets user input for new investment
        cout << " Initial Investment Amount: ";
        cin >> tempd;
        SetInvestment(tempd);
        cout << " Monthly Deposit: ";
        cin >> tempd;
        SetDeposit(tempd);
        cout << " Annual Interest: ";
        cin >> tempd;
        SetAnnualInterest(tempd);
        cout << " Number of years: ";
        cin >> tempint;
        SetNumOfYears(tempint);
        cout << "===============================\n";
        cout << "===============================\n";
        cout << endl;

    }

    void Investment::BalanceWithDeposit(){  // displays investment readout and calculates investment with monthly deposit
        monthTotal = investYears * 12;
        openAmount = investAmount;
        interestRate = (interestRate/100);
        total = (openAmount + depositAmount);
        interestAddAmount = total * (interestRate/12);
        closingAmount = total + interestAddAmount;
        cout << setfill(' '); 
        cout << "________________________Balance with Deposit____________________" << endl;
        cout << "               | Open $ -- Deposit -- Total -- Interest -- Close $ |" << endl;
        cout << "________________________________________________________________" << endl;
        for (int i = 1; i <= monthTotal; i++){
            if (i < 10){ 
                if (interestAddAmount < 10.0){
                    cout << fixed << "Month " <<  i  << setw(11) << right << setprecision(2)<< " | " << openAmount << " | " << depositAmount << " | "  << total << " | "  << interestAddAmount << "   | "  << closingAmount << endl;
                }
                else {
                    cout << fixed << "Month " <<  i  << setw(11) << right << setprecision(2)<< " | " << openAmount << " | " << depositAmount << " | "  << total << " | "  << interestAddAmount << "  | "  << closingAmount << endl;
                }
            }
            else {
                cout  << fixed << "Month " <<  i << setw(10) << right << setprecision(2)<< " | " << openAmount << " | " << depositAmount << " | "  << total << " | "  << interestAddAmount << "  | "  << closingAmount << endl;            }
            openAmount = closingAmount;
            total += depositAmount;
            interestAddAmount = total * (interestRate/12);
            closingAmount = total + interestAddAmount;
        }
        cout << "________________________________________________________________" << endl << endl;
    }

    void Investment::BalanceWithoutDeposit(){ //calculates investment without a monthy deposit
        depositAmount = 0;
        monthTotal = investYears * 12;
        openAmount = investAmount;
        interestRate = (interestRate/100);
        total = (openAmount + depositAmount);
        interestAddAmount = total * (interestRate/12);
        closingAmount = total + interestAddAmount;
        cout << setfill(' ');
        cout << "________________________Balance without Deposit____________________" << endl;
        cout << "               | Open $ -- Deposit -- Total -- Interest -- Close $ |" << endl;
        cout << "________________________________________________________________" << endl;
        for (int i = 1; i <= monthTotal; i++){
            if (i < 10){ 
                if (interestAddAmount < 10.0){
                    cout << fixed << "Month " <<  i  << setw(11) << right << setprecision(2)<< " | " << openAmount << " | " << depositAmount << " | "  << total << " | "  << interestAddAmount << "   | "  << closingAmount << endl;
                }
                else {
                    cout << fixed << "Month " <<  i  << setw(11) << right << setprecision(2)<< " | " << openAmount << " | " << depositAmount << " | "  << total << " | "  << interestAddAmount << "  | "  << closingAmount << endl;
                }
            }
            else {
                cout  << fixed << "Month " <<  i << setw(10) << right << setprecision(2)<< " | " << openAmount << " | " << depositAmount << " | "  << total << " | "  << interestAddAmount << "  | "  << closingAmount << endl;            }
            openAmount = closingAmount;
            total = openAmount + depositAmount;
            interestAddAmount = total * (interestRate/12);
            closingAmount = total + interestAddAmount;
        }
        cout << "________________________________________________________________" << endl << endl;
    }

    

int main(){
    Investment userinv;
    Investment userinv2;
    userinv.StartupScreen();
    userinv.InputInfo();
    userinv2 = userinv;
    userinv.BalanceWithDeposit();
    userinv2.BalanceWithoutDeposit();
    return 0;
}