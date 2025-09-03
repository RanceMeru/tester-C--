#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){

 srand(time(0)); // Seed the random number generator
//constant variables that dont change
int toroisePosition = 1;
int harePosition = 1;
const int trackLength = 70;


cout <<"who will win here?\n";
//make a loop that will run until one of them reaches 70
int randomNum = rand() % 10 + 1; //random number between 1 and 10
cout << "Random number (1-10): " << randomNum << endl;
// function to control tort position
//use rand() set parameters 
//if else statements to control the flow of if the position + or - track length
//if else if
//stop until one of them reaches 70
//print the winner
return 0;
}
