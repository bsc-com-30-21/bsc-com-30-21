#include <iostream>
#include <string>
#include <sstream>

using namespace std;

bool isInteger(const std::string& s) {
    if (s.empty() || ((!isdigit(s[0])) && (s[0] != '-') && (s[0] != '+'))) return false;

    std::istringstream iss(s);
    int num;
    iss >> num;

    return !iss.fail() && iss.eof();
}


int main() {
    int limit = 0;
    while(limit < 5){
        string userValue;

        cout << "Enter an integer value between 5 and 10" << endl;
        getline(cin, userValue);

        if (stoi(userValue) < 5 && stoi(userValue) > 10) {
            cout << "You entered " << userValue << " Please enter a value between 5 and 19" << endl;
        }else if (!isInteger(userValue)) {
            cout << "Sorry, you entered an invalid number, Please try again" << endl;
        }else if (stoi(userValue) >= 5 && stoi(userValue) <= 10) {
            cout << "Your input value " << userValue << " has been accepted" << endl;
            break;
        }
        
        limit++;
    }


    return 0;
}