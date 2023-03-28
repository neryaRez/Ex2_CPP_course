#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
using namespace std;
#include "doctest.h"

#include "sources/player.hpp"
#include "sources/game.hpp"
#include "sources/card.hpp"
using namespace ariel;

TEST_CASE("Test Nerya"){

    //Test_Card:

    Card c1("spades", 9);
    Card c2("spades", 5);
    Card c3("hearts", 10);
    Card c4("hearts", 10);

    //Test operators_Card:

    CHECK (c1 > c2);
    CHECK (c1 < c3);
    CHECK (c1 == c4);

    // chcks the getters function of the card:

    CHECK (c1.get_type() == "spades");
    CHECK (c2.get_value() == 5);

    Player p1("yosef");
    Player p2("sakura");

    Game game(p1, p2);

    //Test players_Functions ** before the game was started:
    //Also, checks the printlog function of the game before it starts.

    CHECK(p1.stacksize() == 26);
    CHECK(p2.stacksize() == 26);

    CHECK(p1.cardesTaken() == 0);
    CHECK(p2.cardesTaken() == 0);

    //Test players_Functions ** After the game was started:
    // Also check the playTurn() function of the game class.

    game.playTurn();
    game.playTurn();
    game.playTurn();

    CHECK(p1.stacksize()>=23 && p1.stacksize() <=26);
    CHECK(p1.cardesTaken()>=0 && p1.cardesTaken() <=3);

    CHECK(p2.stacksize()>=23 && p2.stacksize() <=26);
    CHECK(p2.cardesTaken()>=0 && p2.cardesTaken() <=3);

    //Test another game's functions:

    CHECK_NOTHROW(game.playTurn());
    CHECK_NOTHROW(game.printLastTurn());
    CHECK_NOTHROW(game.printLog());

    CHECK_THROWS(game.printWiner());
    CHECK_THROWS(game.printStats());

    CHECK_NOTHROW(game.playAll());

    CHECK_NOTHROW(game.printWiner());
    CHECK_NOTHROW(game.printStats());



}