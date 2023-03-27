#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>

namespace ariel
{
    class Card{

        std::string type; //sprades, hearts, diamonds, clubs 
        int value;

        public:

            Card(std::string, int);
            Card(ariel::Card&);
            ~Card();
            int get_value();
            std::string get_type();
            bool Card::operator == (const ariel::Card&) const;
            bool Card::operator > (const ariel::Card&) const;
            bool Card::operator < (const ariel::Card&) const;

    };
}