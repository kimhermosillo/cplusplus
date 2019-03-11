#include <iostream>

 int findArea(int length, int width);
int main() {
  /*//define character values
  auto strength = 80;
  auto accuracy = 45.5;
  auto dexterity = 24.0;

    // define constants
    const auto MAXIMUM = 50;
    
    //caclulate character combat stats
    auto attack = strength * (accuracy / MAXIMUM);
    auto damage = strength * (dexterity / MAXIMUM);

    std::cout << "\nAttack rating: " << attack << "\n";
    std::cout << "Damage rating: " << damage << "\n";*/

    // if statements
/* int zombies = 7;
    if (zombies == 0) 
        std::cout << "No more zombies! \n";
    else
        std::cout << "Watch ya self. \n";*/
        // declarting and defining functions
/*
       int length;
    int width;
    int area;
  
    std::cout << "\nHow wide is your yard? ";
    std::cin >> width;
    std::cout << "\nHow long is your yard? ";
    std::cin >> length;
  
    area = findArea(length, width);
  
    std::cout << "\nYour yard is ";
    std::cout << area;
    std::cout << " square feet\n\n";
    return 0;

*/
float goal[4];
goal[0] = 0.9;
goal[1] = 0.75;
goal[2] = 0.5;
goal[3] = 0.25;
float weight, target;

std::cout << "Enter your current weight: ";
std::cin >> weight;
std::cout << " \n Enter goal weight: ";
std::cin >> target;
std::cout << std::endl;

for (int i = 0; i < 4; i++) {
    float loss = (weight-target) * goal[i];
    std::cout << "Goal " << i << ": ";
    std::cout << target + loss << std::endl;

}
 return 0;

}
  
// function definition
int findArea(int l, int w) 
{
     return l * w;
}
    