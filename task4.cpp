#include <iostream>
#include "header.h"

using namespace std;

struct Person {
    string name;
    int age;
};


Person getPerson() {

    Person person;

    cout << "Hey, welcome to making a person" << endl;

    cout << "What's your person's name?";
    cin >> person.name;
    cout << "How old are they?";
    cin >> person.age;
    return person;


}
void printPerson(Person person) {

    cout << "Your person, " << person.name << " is " << person.age << " years old";

}

void changePerson(Person person) {
    person.name =  "Andrew";
    person.age = 100;

    cout << person.name << person.age << endl;
}

int main() {

   Person alex = getPerson();
    printPerson(alex);
    changePerson(alex); // just changes alex's identity once he aint changed forever
    cout << alex.name << alex.age;
    cout << alex.name << alex.age;
    cout << alex.name << alex.age;
    cout << alex.name << alex.age;
    return 0;
}






