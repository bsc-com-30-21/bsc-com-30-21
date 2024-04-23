#include <cctype>
#include <iostream>

using namespace std;

int main() {
    int limit = 0;
    while(limit < 5){
        int userValue;
        cout << "Enter an integer value between 5 and 10" << endl;
        cin >> userValue;

        if (userValue < 5 && userValue > 10) {
            cout << "You entered " << userValue << " Please enter a value between 5 and 19" << endl;
        }else if (!isdigit(static_cast<unsigned char>(userValue))) {
            cout << "Sorry, you entered an invalid number, Please try again" << endl;
        }else if (userValue >= 5 && userValue <= 10) {
            cout << "Your input value " << userValue << " has been accepted" << endl;
            break;
        }
        
        limit++;
    }


    return 0;
}