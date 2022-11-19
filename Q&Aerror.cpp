//Kingsley wrote this program
#include <iostream>
#include <string>
#include <cmath>

using std::cout;
using std::cin;
using std::string;
using std::endl;

int main()
{
    char day;
    char planet;
    char sea;
    char country;
    char month;
    char christmas;
    char week;
    char drink;
    char sport;
    char exercise;
    char restart;
    int hundredP = 100;
    int twentyP = 20;
    int thirtyP = 30;
    int fortyP = 40;

    do{
    cout << "***************************" << endl;
    cout << "Welcome to Q and A program written by Kingsley" << endl;
    cout << "You can only type A or a, B or b, C or c, D or d" << endl;

    cout << "Q1. What is the first day of the week"<< endl;
    cout << "(A) Monday (B) Sunday (C) Tuesday (D) Thursday" << endl;
    cin >> day;

    cout << "Q2. How many planets do we have"<< endl;
    cout << "(A) 7 (B) 6 (C) 9 (D) 5" << endl;
    cin >> planet;

    cout << "Q3. Which of the following is a sea creature" << endl;
    cout << "(A) Bird (B) Fish (C) Lizard (D) Elephant" << endl;
    cin >> sea;

    cout << "Q4. Which of the following is a state in U.S.A?" << endl;
    cout << "(A) Texas (B) London (C) Milan (D) Munich" << endl;
    cin >> country;

    cout << "Q5. How many months do we have in a year?" << endl;
    cout << "(A) 9 (B) 8 (C) 5 (D) 12" << endl;
    cin >> month;

    cout << "Q6. What date is christmas?" << endl;
    cout << "(A) 11th Nov (B) 25th Dec (C) 1st Jan (D) 2nd Feb" << endl;
    cin >> christmas;

    cout << "Q7. How many days do we have in a week?" << endl;
    cout << "(A) 5 (B) 6 (C) 7 (D) 12" << endl;
    cin >> week;

    cout << "Q8. Which of the following is not a drink?" << endl;
    cout << "(A) Henessy (B) Water (C) Pepsi (D) Hamburger" << endl;
    cin >> drink;

    cout << "Q9. Which of the following is a sport?" << endl;
    cout << "(A) Soccer (B) Singing (C) Dancing (D) None of the above" << endl;
    cin >> sport;

    cout << "Q10. Which of the following is not an exercise?" << endl;
    cout << "(A) Jumping (B) Running (C) Dancing (D) All of the Above" << endl;
    cin >> exercise;
    cin.clear();
    cout << "***************************" << endl;

    if(day == 'A' || day == 'a'){//Q1
        cout << "1) Failed\n";
    }
    else if(day == 'B' || day == 'b'){
        cout << "1) Correct\n";
    }
    else if(day == 'C' || day == 'c'){
        cout << "1) Failed\n";
    }
    else if(day == 'D' || day == 'd'){
        cout << "1) Failed\n";
    }
    else{
        cout << "1) Enter the option\n";
    }

    if(planet == 'A' || planet == 'a'){//Q2
        cout << "2) Failed\n";
    }
    else if(planet == 'B' || planet == 'b'){
        cout << "2) Failed\n";
    }
    else if(planet == 'C' || planet == 'c'){
        cout << "2) Correct\n";
    }
    else if(planet == 'D' || planet == 'd'){
        cout << "2) Failed\n";
    }
    else{
        cout << "2) Enter the option\n";
    }

    if(sea == 'A' || sea == 'a'){//Q3
        cout << "3) Failed\n";
    }
    else if(sea == 'B' || sea == 'b'){
        cout << "3) Correct\n";
    }
    else if(sea == 'C' || sea == 'c'){
        cout << "3) Failed\n";
    }
    else if(sea == 'D' || sea == 'd'){
        cout << "3) Failed\n";
    }
    else{
        cout << "3) Enter the option\n";
    }

    if(country == 'A' || country == 'a'){//Q4
        cout << "4) Correct\n";
    }
    else if(country == 'B' || country == 'b'){
        cout << "4) Failed\n";
    }
    else if(country == 'C' || country == 'c'){
        cout << "4) Failed\n";
    }
    else if(country == 'D' || country == 'd'){
        cout << "4) Failed\n";
    }
    else{
        cout << "4) Enter the option\n";
    }

    if(month == 'A' || month == 'a'){//Q5
        cout << "5) Failed\n";
    }
    else if(month == 'B' || month == 'b'){
        cout << "5) Failed\n";
    }
    else if(month == 'C' || month == 'c'){
        cout << "5) Failed\n";
    }
    else if(month == 'D' || month == 'd'){
        cout << "5) Correct\n";
    }
    else{
        cout << "5) Enter the option\n";
    }

    if(christmas == 'A' || christmas == 'a'){//Q6
        cout << "6) Failed\n";
    }
    else if(christmas == 'B' || christmas == 'b'){
        cout << "6) Correct\n";
    }
    else if(christmas == 'C' || christmas == 'c'){
        cout << "6) Failed\n";
    }
    else if(christmas == 'D' || christmas == 'd'){
        cout << "6) Failed\n";
    }
    else{
        cout << "6) Enter the option\n";
    }


    if(week == 'A' || week == 'a'){//Q7
        cout << "7) Failed\n";
    }
    else if(week == 'B' || week == 'b'){
        cout << "7) Failed\n";
    }
    else if(week == 'C' || week == 'c'){
        cout << "7) Correct\n";
    }
    else if(week == 'D' || week == 'd'){
        cout << "7) Failed\n";
    }
    else{
        cout << "7) Enter the option\n";
    }

    if(drink == 'A' || drink == 'a'){//Q8
        cout << "8) Failed\n";
    }
    else if(drink == 'B' || drink == 'b'){
        cout << "8) Failed\n";
    }
    else if(drink == 'C' || drink == 'c'){
        cout << "8) Failed\n";
    }
    else if(drink == 'D' || drink == 'd'){
        cout << "8) Correct\n";
    }
    else{
        cout << "8) Enter the option\n";
    }

    if(sport == 'A' || sport == 'a'){//Q9
        cout << "9) Correct\n";
    }
    else if(sport == 'B' || sport == 'b'){
        cout << "9) Failed\n";
    }
    else if(sport == 'C' || sport == 'c'){
        cout << "9) Failed\n";
    }
    else if(sport == 'D' || sport == 'd'){
        cout << "9) Failed\n";
    }
    else{
        cout << "9) Enter the option\n";
    }

    if(exercise == 'A' || exercise == 'a'){//Q10
        cout << "10) Failed\n";
    }
    else if(exercise == 'B' || exercise == 'b'){
        cout << "10) Failed\n";
    }
    else if(exercise == 'C' || exercise == 'c'){
        cout << "10) Correct\n";
    }
    else if(exercise == 'D' || exercise == 'd'){
        cout << "10) Failed\n";
    }
    else{
        cout << "10) Enter the option\n";
    }
//THis is where the error begins these if statement below is to rate the answer score over 100 i could have done more if not for one error
//any time i run the program and answer the questions the if and else statement is not working i mean the output is misbehaving it will display if
//the one of the else if statement is true it will display the output of the if statement instead of the else if conditions
// but the conditions are true and correct
//Please help me with this error
//       THE START OF THE ERROR
    if(day == 'B' || day == 'b' && planet == 'C' || planet == 'c' && sea == 'B' || sea == 'b' && country == 'A' || country == 'a' && month == 'D' || month == 'd' && christmas == 'B' || christmas == 'b' && week == 'C' || week == 'c' && drink == 'D' || drink == 'd' && sport == 'A' || sport == 'a' && exercise == 'C' || exercise == 'c'){
        cout << "Your answer = " << hundredP << "%\n";
    }
    else if(day == 'A' || day == 'a' && planet == 'A' || planet == 'a' && sea == 'A' || sea == 'a' && country == 'A' || country == 'a' && month == 'A' || month == 'a' && christmas == 'A' || christmas == 'a' && week == 'A' || week == 'a' && drink == 'A' || drink == 'a' && sport == 'A' || sport == 'a' && exercise == 'A' || exercise == 'a'){
        cout << "Your answer = " << twentyP << "%\n";
    }
    else if(day == 'B' || day == 'b' && planet == 'B' || planet == 'b' && sea == 'B' || sea == 'b' && country == 'B' || country == 'b' && month == 'B' || month == 'b' && christmas == 'B' || christmas == 'b' && week == 'B' || week == 'b' && drink == 'B' || drink == 'b' && sport == 'B' || sport == 'b' && exercise == 'B' || exercise == 'b'){
        cout << "Your answer = " << thirtyP << "%\n";
    }
    else if(day == 'C' || day == 'c' && planet == 'C' || planet == 'c' && sea == 'C' || sea == 'c' && country == 'C' || country == 'c' && month == 'C' || month == 'c' && christmas == 'C' || christmas == 'c' && week == 'C' || week == 'c' && drink == 'C' || drink == 'c' && sport == 'C' || sport == 'c' && exercise == 'C' || exercise == 'c'){
        cout << "Your answer = " << thirtyP << "%\n";
    }
    else{
        cout << "Invalid";
    }
    //The END of the error code if and else statement

    cout << "Do you want to Restart the game or exit type Y to restart or N to exit or any key to exit"<< endl;
    cin >> restart;

    switch(restart){
    case 'Y':
        cout << "You are doing the quiz again" << endl;
        break;
    case 'y':
        cout << "You are doing the quiz again" << endl;
        break;
    }
    }while(restart == 'Y' || restart == 'y');
    return 0;
}
