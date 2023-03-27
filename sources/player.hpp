#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <vector>
#include "card.hpp"


namespace ariel{

    class Player{

        std::string name;
        std::vector<ariel::Card> packet;

        public:

            Player(std::string);

            ~Player();

            void stacksize();

            void cardesTaken();

            

    };


}