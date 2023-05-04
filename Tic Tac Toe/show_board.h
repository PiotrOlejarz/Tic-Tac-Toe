//
// Created by Piotr on 26.04.2023.
//

#ifndef GAME_SHOW_BOARD_H
#define GAME_SHOW_BOARD_H
void show_board(const map<int, vector<char>>  board,const int loop_counter){
    system(CLEAR);
    if(loop_counter >= 2)
        cout <<"    Game "<< loop_counter-1<<endl;
    cout <<" -------------" << endl;
    for (int i{1}; i <= 9; ++i) {
        cout <<" | "<< board.at(i)[loop_counter];
        if(i%3==0) {
            cout << " |";
            cout << endl;
            cout << " -------------";
            cout << endl;
        }

    }
    if(loop_counter < 2) {
        getchar();
    }

}
#endif //GAME_SHOW_BOARD_H
