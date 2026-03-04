// Chap 10 Practice 69  Student Quiz Score Validator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class QuizResult
{
private:
    int score;

public:
    QuizResult()
    {
        score = 0;
    }
    void set_score(int new_score)
    {
        if (new_score >= 0 && new_score <= 100)
        {
            score = new_score;
            cout << "Score: " << score;
        }
        else
        {
            cout << "INVALID SCORE\n";

            score = 0;
        }
    }
    int get_score()
    {
        return score;
    }
};

int main()
{
    QuizResult quiz;

    int input_score;
    cin >> input_score;

    quiz.set_score(input_score);
    cout << "Final Score: " << quiz.get_score() << endl;

    return 0;
}
