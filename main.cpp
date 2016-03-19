#include <iostream>
#include <cmath>
#include <cstring>

using namespace std;

int main(){

    string load;
    float mA,mB,d;
    float newton;

    cout << "Tape 'exit' to quit, or anything to continue...\n > ";
    cin >> load;

    if (load == "exit"){cout << "\nOkay, bye : :)\n";return 0;}else{

        cout << "\nEnter the value of mA (in kg): ";cin >> mA;
        cout << "\nEnter the value of mB (in kg): ";cin >> mB;
        cout << "\nEnter the value of the distance (in meters): ";cin >> mB;
        cout << "\nProcessing...";
        newton=(((mA)*(mB))/(d))*(0,000000000067);
        cout << "\nFa/b : " << newton << " Nm²kg-²";
        return main();
    }

return 0;}
