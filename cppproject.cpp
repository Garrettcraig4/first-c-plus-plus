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

//return 0 means every thing worked
return 0;

}