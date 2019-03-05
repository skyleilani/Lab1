/*
 * Sky Leilani
 * 3.1.2019
 *
 * Resources used:
 *
 * http://www.cplusplus.com/doc/tutorial/basic_io/ for understanding cin
 * https://www.programiz.com/cpp-programming/strings for  understanding string arrays
 * https://www.tutorialspoint.com/cplusplus/cpp_switch_statement.htm for clarification on switch statements
 */

#include <iostream>

using namespace std; // if you don't include this, you need to put std:: before every instance of std's goodies

int Num; // sets global variable so that I can use the number given by the user to set the max value of random number
string strIn; // declaring global string variable

int getRandomInt() { // function returns a random number between 0 - 99
    int random = rand() % Num + 1; // setting var random to a random number divided by (#givenbyuser - 1) so that the max value
    // will be exactly what they set it as and not as 1 less (so 6 = 6 and not 5)

    return random;
}


int whatNumberIsIt(int number) {

    switch (number) {
        case 0: {
            cout << strIn << "'s link : https://www.youtube.com/watch?v=hPyXuahlozQ" << endl; // mick jenkins
            break;
        }

        case 1: {
            cout << strIn << "'s link : https://www.youtube.com/watch?v=vwmILqxn6mc" << endl; // quay dash
            break;
        }

        case 2: {
            cout << strIn << "'s link : https://www.youtube.com/watch?v=PsIiwHHiT3o" << endl; // mick jenkins
            break;
        }

        case 3: {
            cout << strIn << "'s link : https://www.youtube.com/watch?v=3y90AGFKakI" << endl; // pure hell
            break;
        }

        case 4: {
            cout << strIn << "'s link : https://www.youtube.com/watch?v=G7Uh_udLNSQ" << endl; // don cherry
            break;
        }

        case 5: {
            cout << strIn << "'s link : https://www.youtube.com/watch?v=dDubhAKSeB0" << endl; // sampa the great
            break;
        }

        default: {
            cout << strIn << "'s link : https://www.youtube.com/watch?v=YBB8valskCQ" << endl; // d'angelo
            break;

        }
    }



}


int getInt(){ // function will prompt user for number, then print & return the number

    // declaring integer variable
    cout << "Please enter an integer: "; // prompts user for number
    cin >> Num; // allows user to give input for the variable numIn
    cout << Num << endl; // prints value user gave to screen

    return Num; // also returns value to user

}


string getString(){ // function will prompt user for string, then print & return the string


    cout << "Please enter your name: "; // asks user to enter words
    cin >> strIn; // this actually allows the user to enter the string, though

    return strIn;

}


int main() {

    getInt();
    getString();

    for (int i = 0; i<20; i++) {
        whatNumberIsIt(getRandomInt());
    }

        return 0;

}
