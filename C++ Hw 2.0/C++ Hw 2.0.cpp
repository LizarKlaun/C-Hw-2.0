#include iostream

using namespace std;

int main()
{
    string answer;
    int counter = 0;

    cout  Answer yes or no to questionsn;
    cout  Is C++ an object - oriented programming languagen;

    cin  answer;
    if (answer == yes) {
        counter += 1;
        cout  NICEn;
    }
    else if (answer == no) {
        cout  nextn;
        counter -= 1;
    }
    else {
        cout  Sorry but your answer in not accuraten;
        counter -= 1;
    }

    cout  R(Can you use the cout keyword to print text in C++)  endl;
    cin  answer;
    if (answer == yes) {
        counter += 1;
        cout  NICEn;
    }
    else if (answer == no) {
        counter -= 1;
        cout  nextn;
    }
    else {
        cout  Sorry but your answer in not accuraten;
        counter -= 1;
    }

    cout  R(Does every C++ program start with a main function)  endl;
    cin  answer;
    if (answer == yes) {
        counter += 1;
        cout  NICEn;
    }
    else if (answer == no) {
        counter -= 1;
        cout  nextn;
    }
    else {
        cout  Sorry but your answer in not accuraten;
        counter -= 1;
    }

    cout  R(Is int a data type used to store whole numbers in C++)  endl;
    cin  answer;
    if (answer == yes) {
        counter += 1;
        cout  NICEn;
    }
    else if (answer == no) {
        counter -= 1;
        cout  nextn;
    }
    else {
        cout  Sorry but your answer in not accuraten;
        counter -= 1;
    }

    cout  R(Can you declare a variable in C++ without specifying its data type)  endl;
    cin  answer;
    if (answer == yes) {
        counter -= 1;
        cout  nextn;
    }
    else if (answer == no) {
        counter += 1;
        cout  NICEn;
    }
    else {
        cout  Sorry but your answer in not accuraten;
        counter -= 1;
    }

    cout  R(Is if used to create a conditional statement in C++)  endl;
    cin  answer;
    if (answer == yes) {
        counter += 1;
        cout  NICEn;
    }
    else if (answer == no) {
        counter -= 1;
        cout  nextn;
    }
    else {
        cout  Sorry but your answer in not accuraten;
        counter -= 1;
    }

    cout  R(Can arrays in C++ hold multiple values of different data types)  endl;
    cin  answer;
    if (answer == yes) {
        counter -= 1;
        cout  nextn;
    }
    else if (answer == no) {
        counter += 1;
        cout  NICEn;
    }
    else {
        cout  Sorry but your answer in not accuraten;
        counter -= 1;
    }

    cout  R(Is C++ case-sensitive)  endl;
    cin  answer;
    if (answer == yes) {
        counter += 1;
        cout  NICEn;
    }
    else if (answer == no) {
        counter -= 1;
        cout  nextn;
    }
    else {
        cout  Sorry but your answer in not accuraten;
        counter -= 1;
    }

    cout  R(Does the for loop in C++ allow you to repeat a block of code a specific number of times)  endl;
    cin  answer;
    if (answer == yes) {
        counter += 1;
        cout  NICEn;
    }
    else if (answer == no) {
        counter -= 1;
        cout  nextn;
    }
    else {
        cout  Sorry but your answer in not accuraten;
        counter -= 1;
    }

    cout  R(Is std the namespace used for standard functions like cout and cin in C++)  endl;
    cin  answer;
    if (answer == yes) {
        counter += 1;
        cout  NICEn;
    }
    else if (answer == no) {
        counter -= 1;
        cout  nextn;
    }
    else {
        cout  Sorry but your answer in not accuraten;
        counter -= 1;
    }

    cout  R(Can a class in C++ have both public and private members)  endl;
    cin  answer;
    if (answer == yes) {
        counter += 1;
        cout  NICEn;
    }
    else if (answer == no) {
        counter -= 1;
        cout  nextn;
    }
    else {
        cout  Sorry but your answer in not accuraten;
        counter -= 1;
    }

    cout  R(Is the semicolon required at the end of most statements in C++)  endl;
    cin  answer;
    if (answer == yes) {
        counter += 1;
        cout  NICEn;
    }
    else if (answer == no) {
        counter -= 1;
        cout  nextn;
    }
    else {
        cout  Sorry but your answer in not accuraten;
        counter -= 1;
    }

    if (counter  0) {
        counter = 0;
    }

    cout  n;
    cout  counter;
}
