#include <string>
#pragma once
using namespace std;

namespace ariel
{
    class Card{

        string type; //sprades, hearts, diamonds, clubs 
        int value;

        public:

            Card(string, int);
            Card(ariel::Card&);
            ~Card();
            int get_value();
            string get_type();
            bool operator == (const ariel::Card&) const;
            bool operator > (const ariel::Card&) const;
            bool operator < (const ariel::Card&) const;

    };
}