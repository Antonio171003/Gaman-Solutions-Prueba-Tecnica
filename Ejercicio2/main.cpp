#include <bits/stdc++.h>

using namespace std;

int main(){

    ifstream in("input.txt");
    ofstream out("output.txt");

    int rounds;

    in >> rounds;

    int player1Acc = 0, player2Acc = 0;

    int winner = 1;
    int advantage = 0;

    for (int i = 0; i < rounds; i++) {
        
        int player1, player2;

        in >> player1 >> player2;

        player1Acc += player1;
        player2Acc += player2;

        int diff = abs(player1Acc - player2Acc);

        if (diff > advantage) {
            winner = (player2Acc > player1Acc) + 1;
            advantage = diff;
        }

    }

    out << winner << " " << advantage << '\n';

    return 0;
}