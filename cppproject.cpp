//c++

#include <iostream>
#include <vector>
#include <string>
#include <fstream>


using namespace std;


int main(){

cout << "Hello World" << endl;

//varables 

const double PI = 3.1415926535;

 char firstLetter = 'G';

 bool isCool = true;
 
 int myAge = 19;

float favNum = 4.44;

double otherfavNum = 1.23323232323;

int five = 5;

cout << "First Leter Of Name:" << firstLetter << endl;

cout << "Is Cool:" << isCool << endl;

cout << "Favorite Number:" << favNum << endl;

cout << "pi:" << PI << endl;

cout << "---------- sizes -----------" << endl;

cout << "size of int" << sizeof(favNum)
<< endl;

cout << "size of char " << sizeof(firstLetter) << endl;

cout << "size of bool" << sizeof(isCool) << endl;

cout << "size of float " << sizeof(favNum) << endl;

cout << "size of double" << sizeof(otherfavNum) << endl; 

//math

cout << "----------- Math -----------" << endl;



cout << "5 + 2 = " << 5+2 << endl;

cout << "5 - 2 = " << 5-2 << endl;

cout << "5 * 2 = " << 5*2 << endl;

cout << "5 / 2 = " << 5/2 << endl;

cout << "5 % 2 = " << 5%2 << endl;

//does action after getting value of 5

cout << "5++ = " << five++ <<endl;

cout << "++5 =" << ++five << endl;

cout << "5-- = " << five-- << endl;

cout << "--5 = " << --five << endl; 

//order of operation PEMDOS

cout << "(1 + 2 - 3) * 2 = " << (1 + 2 - 3) * 2;



cout << "4 / 5 = " << 4 / 5 << endl;

cout << "4/5 = " << (int) 4 / 5 << endl; 

cout << "4/5 = " << (float) 4 / 5 << endl; 


//same as js
cout << "----------- IF Statments -----------" << endl;

int age = 70;

int ageAtLastExam = 16;

bool isNotIntoxicated = true;

if((age >= 1) && (age < 16 )){
    cout << "You can't drive" << endl;
}
else if (! isNotIntoxicated){
    cout << "you can't drive " << endl;
}
else if(age >= 80 && ((age > 100) || ((age - ageAtLastExam) > 5))){
    cout << "you cant drive" << endl;
}
else {
    cout << "you can drive" << endl;
}


//same as js
cout << "----------- switch statements -----------" << endl;

int greetingOption = 2;


switch(greetingOption){

case 1: 
cout << "hello" << endl;
break;


case 2:
cout << "bonjour" << endl;
break;

case 3: 
cout << "hola" << endl;
break;

default : 
cout << "yo" << endl;

}

cout << "---------- turnary operatior ----------" << endl;

//varable = (condition ) ? true : false  same as js

int largestNum = (5>2) ? 5 : 2;


cout << "------ arrays --------" << endl;


int myFavNums[5];
//            ^ has to be set to how many you need in the array 



int badNums[5] = {4,13,14,24,34};

cout << "bad num 1: " << badNums[0] << endl;

char myName[5][5] = {{'G','a','r','r','e'},{'C','r','a','i','g'}};


cout << "2nd letter in 2nd array" << myName[1][1] << endl;

myName[0][1] = 'A';

cout << "changed val" << myName[0][2] << endl;

for(int i =1; i <= 10; i++){
    cout << i << endl;
}


for(int j = 0; j < 2; j++){

    for(int k = 0; k < 5; k++){
        cout << myName[j][k];
    }
cout << endl;
}


int randomnum = (rand() % 100) + 1;
//makes random numbers

while(randomnum != 100){
    cout << randomnum << ", ";
    
    randomnum = (rand() % 100) + 1; 
}

cout << endl;



string numberGuessed;
int intNumberGuessed = 0;

do{

cout << " Guess between 1 and 10:";

getline(cin,numberGuessed);

intNumberGuessed = stod(numberGuessed);

cout << intNumberGuessed << endl;


} while(intNumberGuessed != 4);

cout<< "you win" << endl;

cout << "---------- strings ----------" << endl;

//way done in c
char happyArray[6] = {'H','a','p','p','y','\0'};

// c++ way

string birthdayString = " Birthday";

cout << happyArray + birthdayString << endl;

string yourName;

cout << "what is your name? : ";

getline(cin,yourName);

cout << "Hello " << yourName << endl;

double eulersConstant = .57721;
string eulerGuess;
double eulerGuessDouble;

cout << "what is ulers constant? : ";

getline(cin,eulerGuess);

eulerGuessDouble = stod(eulerGuess);

if(eulerGuessDouble == eulersConstant) {
    cout << "you are right" << endl;
} else 
{
    cout << "you are wrong" << endl;
}


cout << "size of string " << eulerGuess.size() << endl;

cout << "is string empty " << eulerGuess.empty() << endl;

cout << eulerGuess.append(" was your guess") << endl;


string dogString = "dog";

string catString = "cat";

cout << dogString.compare(catString) << endl;

cout << dogString.compare(dogString) << endl;

cout << catString.compare(dogString) << endl;

string wholeName = yourName.assign(yourName);

cout << wholeName << endl;

string firstName = wholeName.assign(wholeName,0, 7);
cout << firstName << endl;

int lastNameIndex = yourName.find("Craig",0);
cout << "index of last name: " << lastNameIndex << endl;

yourName.insert (5, " Justin");
cout << "insert:" << yourName << endl;

yourName.erase(6,7);
cout << "erase: " << yourName << endl;

yourName.replace(6,5,"Maximus");
cout << "replace: " << yourName << endl;

cout << "-------- vectors -------- " << endl;

vector <int> lotteryNumVect(10);

int lotteryNumArray[5] = {4, 13, 14, 24, 34};

lotteryNumVect.insert(lotteryNumVect.begin(), lotteryNumArray, 
lotteryNumArray+3);

cout << lotteryNumVect.at(2) << endl;

cout << lotteryNumVect.back() << endl;

cout << lotteryNumVect.empty() << endl;

lotteryNumVect.push_back(64);

cout << "------------ functions ----------- " << endl;


//return 0 means every thing worked
return 0;

}