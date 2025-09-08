#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


void moveTortoise(int &position) {
    int i = rand() % 10 + 1;
    if (i <= 5) position += 3;           // Fast plod
    else if (i <= 7) position -= 6;      // Slip
    else position += 1;                  // Slow plod
    if (position < 1) position = 1;
}

void moveHare(int &position) {
    int i = rand() % 10 + 1;
    // Sleep
    if (i <= 2) position += 0;   
    // Big hop        
    else if (i <= 4) position += 9;  
     // Big slip    
    else if (i == 5) position -= 12;  
    // Small hop  
    else if (i <= 8) position += 1;      
    else position -= 2;        
    // Small slip          
    if (position < 1) position = 1;
}
void printTrack(int tortoisePosition, int harePosition, int trackLength) {
    for (int i = 1; i <= trackLength; ++i) {
        if (i == tortoisePosition && i == harePosition) {
            cout << "OUCH! ";
            cout<< "The Tortoise and the Hare have collided!" << endl;
        }
        else if (i == tortoisePosition)
            cout << "T";
        else if (i == harePosition)
            cout << "H";
        else
            cout << " ";
    }
    cout << endl;
}


int main(){

 srand(time(0)); // Seed the random number generator
//constant variables that dont change
int toroisePosition = 1;
int harePosition = 1;
const int trackLength = 70;
int randomNum = rand() % 10 + 1; //random number between 1 and 10
cout << "BANG !!!!!\nAND THEY'RE OFF !!!!!\n";

while (toroisePosition < trackLength && harePosition < trackLength) {
    moveTortoise(toroisePosition);
    moveHare(harePosition);
    printTrack(toroisePosition, harePosition, trackLength);
    
}
if(toroisePosition >= trackLength && harePosition >= trackLength) {
    cout << "It's a tie!" << endl;
} else if (toroisePosition >= trackLength) {
    cout << "Tortoise wins!" << endl;
} else {
    cout << "Hare wins!" << endl;
    return 0;
}


return 0;
}
