#include <iostream>

using namespace std;

int main(){
    float income = 95000;
    float estTax = 0.04, cntyTax = 0.02;
  
    cout << "Total Sales: $" << income << "\n";
    cout << "\nEstate Tax: " << estTax*100 << "%\n";
    cout << "County Tax: " << cntyTax*100 << "%\n";
    cout << "\nTaxes Due: $" << income*(estTax+cntyTax) << "\n";

    return 0;
}
