// Chap 13 Practice 98 Secret Game Score Tracker.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Game
{
    private:
        int player_score;

    public:
        void setScore(int player_score);
        int getScore() const;
};

void Game::setScore(int player_score)
{
    this->player_score = player_score;
}

int Game::getScore() const
{
    return player_score;
}

class Player : public Game
{
    private:
        string player_name;

    public:
        void setName(string player_name);
        void displayResult() const;
};

void Player::setName(string player_name)
{
    this->player_name = player_name;
}

void Player::displayResult() const
{
    cout << "----- Game Result -----" << endl;
    cout << "Player: " << player_name << endl;
    cout << "Score: " << getScore() << endl;

    if (getScore() >= 80)
    {
        cout << "Level: Winner Zone" << endl;
    }
    else
    {
        cout << "Level: Beginner Zone" << endl;
    }
}

int main()
{
    Player game_player;
    string input_player_name;
    int input_player_score;

    cout << "Enter player name: ";
    cin >> input_player_name;

    cout << "Enter score: ";
    cin >> input_player_score;

    game_player.setName(input_player_name);
    game_player.setScore(input_player_score);

    game_player.displayResult();

    return 0;
}
