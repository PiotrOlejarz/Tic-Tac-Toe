#include <iostream>
#include <iostream>
#include <vector>
#include <map>
#include <limits>
#include "tic_tac_toe.cpp"
#include "restart_board.h"
#include "menu.h"
#include "show_board.h"
#include "score_board.h"
#include "instruction.h"
#include "set_nickname.h"
#include "is_int_ok.h"
#include "game.h"
#include "game_check.h"
#include "special_mode_game.h"


using namespace std;

int main() {
    char put_to_board{'1'};
    typedef map<int, vector<char>>MapType;
    MapType board;
    for(int i{1}; i <= 9; i++)
        board[i] = vector<char>(12,put_to_board++);



    string first_nickname{"Player 1"};
    string second_nickname{"Player 2"};
    int first_player_score{};
    int second_player_score{};
    map <string, int> players;
    players[first_nickname] = first_player_score;
    players[second_nickname] = second_player_score;

    int rounds{};
    int loop_counter{1};
    vector <string> winners_to_score_board;
    while(menu(board, loop_counter, players, first_nickname, second_nickname, winners_to_score_board, rounds));
    return 0;
}
