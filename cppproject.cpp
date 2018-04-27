//c++

#include <iostream>
#include <vector>
#include <string>
#include <fstream>


using namespace std;


int main(){

cout << "Hello World" << endl;


const double PI = 3.1415926535;

 char firstLetter = 'G';

 bool isCool = true;
 
 int myAge = 19;

float favNum = 4.44;

double otherfavNum = 1.23323232323;



cout << "First Leter Of Name:" << firstLetter << endl;

cout << "Is Cool:" << isCool << endl;

cout << "Favorite Number:" << favNum << endl;

cout << "pi:" << PI << endl;



cout << "size of int" << sizeof(favNum)
<< endl;

cout << "size of char " << sizeof(firstLetter) << endl;

cout << "size of bool" << sizeof(isCool) << endl;

cout << "size of float " << sizeof(favNum) << endl;

cout << "size of double" << sizeof(otherfavNum) << endl; 

//return 0 means every thing worked
return 0;

}