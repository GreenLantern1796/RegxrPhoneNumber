#include <iostream>
#include <regex>
#include <string>
using namespace std;

void ValidPhone (string regExperssion, regex reg){//Runs a while loop to see of the phone number is valid
    
    if(regex_match(regExperssion, reg)){
    
        cout << "Your phone number is a valid phone number!!!!" << endl;

    }
    else {

        cout << "Your phone number is not a valid phone number!!!"<< endl;
    }

}

int main(){

    string regExperssion;
    regex PhoneEx  ("(\\+1(-|| ))?\\(?[0-3]?[0-9]{3}\\)?(-|| )?[0-9]{3}(-|| )?[0-9]{4}"); //Checks for all of the phone numbers for the user input
    cout <<"Type the phone number." <<endl;
    getline(cin, regExperssion); 

    cout << "Your phone number is:" << regExperssion << endl;

    ValidPhone(regExperssion, PhoneEx);



    return 0;
}
