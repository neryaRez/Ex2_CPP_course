#pragma once
#include "card.hpp"


namespace ariel{

    class Player{


        std::string name;
        vector<Card> packet;

        public:

            //Player();
            Player(std::string name);

            ~Player();

            int stacksize();

            int cardesTaken();

            

    };


}