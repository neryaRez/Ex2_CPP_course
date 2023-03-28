#pragma once

#include "player.hpp"


namespace ariel{

   class Game {

    ariel::Player p1;
    ariel::Player p2;
    std::vector <std::string> turns;
    std::vector<Card> stack;
    

    public:

        Game(Player&, Player&);

        ~Game();

        void playTurn();

        void playAll();

        void printLastTurn();

        void printWiner();

        void printStats();

        void printLog();

   };
   
}