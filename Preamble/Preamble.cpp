#include <iostream>
#include <ctime>
#include <string>
#include <cstdlib>
using namespace std;

string companionName[] = {"Deathtrap", "Boone", "Butch", "Adam", "Rex"};

string RaiderName[] = {"Crusher", "Killer", "Lobo", "Cook Cook", "Motor Head"};

class companion{
public:
// data members (variables)
string name; 
int Health;
int x;
int y;

companion(string givenName = "companion", int givenHealth = 10){
  cout <<"You have a new companion!\n";
  name = givenName;
    Health = givenHealth;
  //start them out at 0,0 on the map
x = (rand()% 5) -2; 
y = (rand()% 5) -2; 
}// companion

void status(){
  cout << name << ":" << Health << "]\n";
    cout << "[" << "position is " << x << "," << y << "]\n";
}

void move(){
  if(Health <= 0) {
    
  }
  else {
    cout << "They're dead\n";
    return; // don't move
  }
while(true){
  cout << "moving companions \n";
  int direction = rand() % 4; // 0 = n, 1 = s 2 = e 3 = w

  if(direction == 0){
    if(y < 2){
      // go north...
      y++; 
      break; 
    }
  }
  else if (direction == 1 && y > -2) {break; y--;}
  else if (direction == 2 && x < 2) {break; x++;}
  else if (direction == 3 && x > -2) {break; x--;}

}//while


}
}; //Companion class

class Raider{
public:
// data members (variables)
string name; 
int Health;
int x;
int y;

Raider(string givenName = "Raider", int givenHealth = 10){
  cout <<"An new Raider has appeared!\n";
  name = givenName;
    Health = givenHealth;
  //start them out at 0,0 on the map
x = (rand()% 5) -2; 
y = (rand()% 5) -2; 
}// Raider
void status(){
  cout << name << ":" << Health << "]\n";
    cout << "[" << "position is " << x << "," << y << "]\n";
}

void move(){
  if(Health <= 0) {
    
  }
  else {
    cout << "They're dead\n";
    return; // don't move
  }
while(true){
  cout << "moving raiders \n";
  int direction = rand() % 4; // 0 = n, 1 = s 2 = e 3 = w

  if(direction == 0){
    if(y < 2){
      // go north...
      y++; 
      break; 
    }
  }
  else if (direction == 1 && y > -2) {break; y--;}
  else if (direction == 2 && x < 2) {break; x++;}
  else if (direction == 3 && x > -2) {break; x--;}

}//while
}// void move
}; //Raider class

int main() {
  std::cout << "Weclome to the Mojave!\n";

    companion artoo;
// set up artoo
  artoo.name ="Courier";
  artoo.Health= 4;

  cout << "welcome " << artoo.name << "!\n";
  cout << artoo.name << " 's Health is " << artoo.Health << ".\n";

  companion companions[5];
  for(int i = 0; i < 5; i++) {
    companions[i] = companion(companionName[rand() % 5], rand() % 6 + 5);
  }

  for(int i = 0; i < 5; i++){
    companions[i].status();
  }

   for(int i = 0; i < 5; i++){
    companions[i].move();
     for(int i = 0; i < 5; i++){
    companions[i].move(); 
    companions[i].status();
  }
}

  Raider raiders[5];
  for(int i = 0; i < 5; i++) {
    raiders[i] = Raider(RaiderName[rand() % 5], rand() % 6 + 5);
  }

  for(int i = 0; i < 5; i++){
    raiders[i].status();
  }

   for(int i = 0; i < 5; i++){
    raiders[i].move();
     for(int i = 0; i < 5; i++){
    raiders[i].move(); 
    raiders[i].status();
  }
}
  
}