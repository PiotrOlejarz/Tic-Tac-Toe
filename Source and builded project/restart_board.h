//
// Created by polej on 26.04.2023.
//

#ifndef GAME_RESTART_BOARD_H
#define GAME_RESTART_BOARD_H
void reset_board(map <int, vector <char>> &board){
    char c = '1';
    for(int i{1}; i <=9; ++i){  // loop using to restart board, to initial value
        board.at(i)[1] = c;
        ++c;
    }
}
void reset_board(map <int, vector <char>> &board, const int rounds){

    for(int k {2}; k <12; k++) {
        char c = '1';
        for (int i{1}; i <= 9; ++i) {  // loop using to restart board, to initial value
            board.at(i)[k] = c;
            ++c;
        }
    }
}
#endif //GAME_RESTART_BOARD_H
