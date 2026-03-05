// Chap 7 Practice 60 Soccer Tournament System.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

enum match_result
{
    win,
    loss,
    draw
};

struct player
{
    string player_name;
    int goals_scored;
};

struct team
{
    string team_name;
    match_result results[3];
    int total_goals;
    int total_points;
};

int main()
{
    const int team_count = 3;
    const int players_per_team = 4;
    const int matches_per_team = 3;

    player league_players[team_count][players_per_team];
    team teams[team_count];

    for (int team_index = 0; team_index < team_count; team_index++)
    {
        cout << "Enter Team " << team_index + 1 << " Name: ";
        cin >> teams[team_index].team_name;

        teams[team_index].total_goals = 0;
        teams[team_index].total_points = 0;

        cout << "Enter Player Details for " << teams[team_index].team_name << endl;

        for (int player_index = 0; player_index < players_per_team; player_index++)
        {
            cout << "Player " << player_index + 1 << " Name: ";
            cin >> league_players[team_index][player_index].player_name;

            cout << "Goals Scored: ";
            cin >> league_players[team_index][player_index].goals_scored;

            teams[team_index].total_goals += league_players[team_index][player_index].goals_scored;
        }

        cout << endl;
    }

    for (int team_index = 0; team_index < team_count; team_index++)
    {
        cout << "Enter Match Results for " << teams[team_index].team_name << endl;

        for (int match_index = 0; match_index < matches_per_team; match_index++)
        {
            int choice;
            cout << "Match " << match_index + 1 << " (0 = win, 1 = loss, 2 = draw): ";
            cin >> choice;

            if (choice == 0)
            {
                teams[team_index].results[match_index] = win;
            }
            else if (choice == 1)
            {
                teams[team_index].results[match_index] = loss;
            }
            else
            {
                teams[team_index].results[match_index] = draw;
            }
        }

        cout << endl;
    }

    for (int team_index = 0; team_index < team_count; team_index++)
    {
        for (int match_index = 0; match_index < matches_per_team; match_index++)
        {
            if (teams[team_index].results[match_index] == win)
            {
                teams[team_index].total_points += 3;
            }
            else if (teams[team_index].results[match_index] == draw)
            {
                teams[team_index].total_points += 1;
            }
        }
    }

    int winner_index = 0;

    for (int i = 1; i < team_count; i++)
    {
        if (teams[i].total_points > teams[winner_index].total_points)
        {
            winner_index = i;
        }
        else if (teams[i].total_points == teams[winner_index].total_points &&
            teams[i].total_goals > teams[winner_index].total_goals)
        {
            winner_index = i;
        }
    }

    cout << "Tournament Winner: " << teams[winner_index].team_name << endl;
    cout << "Points: " << teams[winner_index].total_points << endl;
    cout << "Total Goals: " << teams[winner_index].total_goals << endl;

    return 0;
}