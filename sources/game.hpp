#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <vector>
#include "player.hpp"


namespace ariel{

   class Game {

    ariel::Player p1;
    ariel::Player p2;
    std::vector <std::string> turns;

    public:

        Game(ariel::Player, ariel::Player);

        ~Game();

        void playTurn(){}

        void playAll(){}

        void printLastTurn(){}

        void printWiner(){}

        void printStats(){}

        void printLog(){}






   };
    





}