//
// Created by Piotr on 26.04.2023.
//
#include <iostream>
#include <vector>
#include <map>
#ifdef __linux__
#define CLEAR "clear"
#elif __APPLE__
#define CLEAR "clear"
#elif __WIN32__
#define CLEAR "cls"
#endif

using namespace std;

bool menu(map<int, vector<char>> &board, int &loop_counter, map <string, int> players,string &first_nickname, string &second_nickname, vector <string> &winners_to_score_board, int &rounds);
void show_board(const map<int, vector<char>>  board,const int loop_counter);
void score_board(const int board_number,const map <int, vector<char>> board, const int loop_counter, const vector <string> winners_to_score_board);
void instruction(map <int, vector<char>>);
void set_nickname(const size_t which_player, map <string, int> &players, string &first_nickname, string &second_nickname);
bool is_int_ok(int to_check);
bool is_int_ok(int to_check, int limit); //overload function, used in menu to check case 2
void game(map <int, vector <char>> &board, int &loop_counter,map <string, int> players, string &first_nickname, string &second_nickname);
bool special_mode_game(map <int, vector <char>> &board, int &loop_counter,map <string, int> players, string &first_nickname, string &second_nickname,  vector <string> &winners_to_score_board,  int &rounds);
bool game_check (map <int, vector <char>> board, const int  loop_counter, map <string, int> players,string &first_nickname, string &second_nickname);
void reset_board(map <int,vector< char>> &board);
void reset_board(map <int,vector< char>> &board, const int numbers);