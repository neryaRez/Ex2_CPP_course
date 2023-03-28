

#pragma once
#include <string>
using namespace std;

namespace ariel
{
    class Card{

        string type; //sprades, hearts, diamonds, clubs 
        int value;

        public:

            Card(string, int);
            Card(Card&);
            ~Card();
            int get_value();
            string get_type();
            bool operator == (const Card&) const;
            bool operator > (const Card&) const;
            bool operator < (const Card&) const;

    };
}