#include "game.hpp"

using namespace std;

namespace ariel{

    Game::Game(ariel::Player p1, ariel::Player p2){
        this->p1 = p1;
        this->p2 = p2;
    }
    
    Game::~Game(){}

    void Game::playTurn(){}

    void Game::playAll(){}

    void Game::printLastTurn(){}

    void Game::printLog(){}

    void Game::printStats(){}

    void Game::printWiner(){}


}