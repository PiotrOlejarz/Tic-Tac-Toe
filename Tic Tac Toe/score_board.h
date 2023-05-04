//
// Created by Piotr on 26.04.2023.
//

#ifndef GAME_SCORE_BOARD_H
#define GAME_SCORE_BOARD_H
void score_board(const int board_number,const map <int, vector<char>> board, const int loop_counter,const vector <string> winners_to_score_board){
    cout <<" -------------" << endl;
    for(int k{2}; k < loop_counter; k++){
        cout << "Game number "<<k-1<<endl;
        cout <<"Winner "<<winners_to_score_board.at(k-2)<<endl;
        for (int i{1}; i <= 9; i++) {
            cout << " | " << board.at(i)[k];
            if (i % 3 == 0) {
                cout << " |";
                cout << endl;
                cout << " -------------";
                cout << endl;

            }

        }
    }
    cout <<"Press any key, to continue";
    getchar();

}
#endif //GAME_SCORE_BOARD_H
