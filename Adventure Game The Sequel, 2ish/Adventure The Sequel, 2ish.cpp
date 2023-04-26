#include <iostream>
#include <ctime>
#include <string>
#include <cstdlib>
using namespace std;

  int health = 20; 
  int attack = 0;
  int block = 0;
  int gold = 0;

void Y(){
  cout << "You continue your adventure!\n";
  cout << "You have " << health << " Health! \n";
cout << "an enemy attacks you! \n";
  attack  = rand() % 5;
  block  = rand() % 5;
  gold = rand() % 50; //Say gold = dieRoll (50);

    if (attack > block) {
   cout << "You have been wounded!\n";
      cout << "You have lost "<< attack << " health""!\n";
  health -= attack;
  }
    
  if (attack <= block) {
   cout << "You have blocked the attack!\n";
    }// player dies
  cout << "You now have " << health << " Health! \n";
    cout << "You get " << gold << " gold! \n";
    cout << "Continue? (Y/N)\n";
  }
    

void N(){
  cout << "You head home.\n";
  cout << "You end your journey with " << gold << " gold in your pockets. \n";
  cout << "Thanks for playing. \n"; 
  }

int main() {
  cout << "Welcome to the ADVENTURE game!\n";
  cout << "enter Y to start and continue playing!\n";
  cout << "enter N to quit!\n";
  srand(time(0));


  while(true) {
    string input;
    cin >> input;

    if(input == "Y"){
    Y(); 
      cin >> input;   
    } 
    
        if(input == "N"){
          N(); 
          break;
        } 
    
    if (health < 1) {
      cout << "You have died! Game Over!\n";
      break;
      }

    cout << "an enemy attacks you! \n";
  attack  = rand() % 5;
  block  = rand() % 5;

    if (attack > block) {
   cout << "You have been wounded!\n";
      cout << "You have lost "<< attack << " health""!\n";
  health -= attack;
      
  }
    
  if (attack <= block) {
   cout << "You have blocked the attack!\n";
    }// player dies
    
  }//while
  
  }//main 
    