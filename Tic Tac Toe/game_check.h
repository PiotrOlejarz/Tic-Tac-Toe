//
// Created by Piotr on 26.04.2023.
//

#ifndef GAME_GAME_CHECK_H
#define GAME_GAME_CHECK_H
bool game_check(map <int, vector <char>> board,const int  loop_counter, map <string, int> players,string &first_nickname, string &second_nickname){
    if(board.at(1)[loop_counter]==board.at(2)[loop_counter]&&board.at(2)[loop_counter]==board.at(3)[loop_counter]){
        return true;
    }
    else if(board.at(4)[loop_counter]==board.at(5)[loop_counter]&&board.at(5)[loop_counter]==board.at(6)[loop_counter]){
        return true;
    }
    else if(board.at(7)[loop_counter]==board.at(8)[loop_counter]&&board.at(8)[loop_counter]==board.at(9)[loop_counter]){
        return true;
    }
    else if(board.at(1)[loop_counter]==board.at(5)[loop_counter]&&board.at(5)[loop_counter]==board.at(9)[loop_counter]){
        return true;
    }
    else if(board.at(1)[loop_counter]==board.at(4)[loop_counter]&&board.at(4)[loop_counter]==board.at(7)[loop_counter]){
        return true;
    }
    else if(board.at(2)[loop_counter]==board.at(5)[loop_counter]&&board.at(5)[loop_counter]==board.at(8)[loop_counter]){
        return true;
    }
    else if(board.at(3)[loop_counter]==board.at(6)[loop_counter]&&board.at(6)[loop_counter]==board.at(9)[loop_counter]){
        return true;
    }
    else if(board.at(3)[loop_counter]==board.at(5)[loop_counter]&&board.at(5)[loop_counter]==board.at(7)[loop_counter]){
        return true;
    }
}
#endif //GAME_GAME_CHECK_H
