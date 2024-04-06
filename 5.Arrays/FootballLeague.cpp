#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main()
{
    int N;
    cin >> N;

    unordered_map<char, int> points;

    for (int i = 0; i < N * (N - 1) / 2; ++i)
    {
        char team1, team2;
        cin >> team1 >> team2;
        string score;
        cin >> score;

        int hScore = 0, aScore = 0;

        hScore = score[0];
        aScore = score[2];

        if (hScore > aScore)
            points[team1] += 3;
        else if (hScore < aScore)
            points[team2] += 3;
        else
        {
            points[team1] += 1;
            points[team2] += 1;
        }
    }

    char winner;
    int maxPoints = 0;

    for (const auto &entry : points)
    {
        if (entry.second > maxPoints)
        {
            winner = entry.first;
            maxPoints = entry.second;
        }
    }

    cout << winner << endl;
    cout << maxPoints << endl;

    return 0;
}