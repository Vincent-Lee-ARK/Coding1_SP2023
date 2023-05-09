#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

int main() {
  std::cout << "Welcome to my adventure game!\n";
    std::cout << "enter yes to play and continue playing!\n";
   srand(time(0));

  string input;
  do{
    cin >> input; 
}
    while(input !="yes" && input !="Yes" && input !="Yep");

  std::cout << "You face a large dragon and intiate a clash!\n";
 std::cout << "enter yes to fight!\n";

  do{
    cin >> input; 
}
    while(input !="yes" && input !="Yes" && input !="Yep");
  
  if(true){
    int health = 10; 
  int turn = 0; 
  int Result;

  int attack = rand() % 4 + 1;
  int block = rand() % 4 + 1;
    int loopCount = 0;
  while (loopCount > 4) {
    loopCount += 1;
    if(attack > block){
     std::cout << "You have been wounded by the dragon!\n";
    int Result = health - attack;
    std::cout << "You have lost "<< attack << " health""!\n";
  }
    if(block > attack){
     std::cout << "You have blocked the dragon's attack\n";
    std::cout << "Nice block!\n";

    }
   
    if (Result > 0){
      std::cout << "Congratulations! You survived and slain the dragon! Thank you for playing!\n";
    }
    
    if (Result < 0){
      std::cout << "Oh no! You were killed by the dragon! Game Over!\n";}
    }
    }
  }
