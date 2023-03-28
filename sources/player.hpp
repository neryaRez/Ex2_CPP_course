#pragma once
#include <iostream>
#include <vector>
#include <string>
#include "card.hpp"
using namespace std;

namespace ariel{

    class Player{


        string name;
        vector<Card> packet;

        public:

            //Player();
            Player(string name);

            ~Player();

            int stacksize();

            int cardesTaken();

            

    };


}