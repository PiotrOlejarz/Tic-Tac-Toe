//
// Created by Piotr on 26.04.2023.
//

#ifndef GAME_INSTRUCTION_H
#define GAME_INSTRUCTION_H
void instruction(map <int, vector<char>> board){
    cout << "1. To play the game, two players are needed."<<endl;
    cout << "2. Each player gets one move per round."<<endl;
    cout << "3. To win, a player has to get 3 marks in a row, either horizontally, vertically, or diagonally."<<endl;
    cout <<" -------------" << endl;
    for(int k{0}; k < 7; k++) {
        if(k==0) {
            cout << "The player who plays the X sign starts."<<endl;
            board.at(1)[0] = 'X';
            getchar();
            cout << "Press any key to continue"<<endl;
        }
        if(k==1) {
            cout << "The next move depends on the player who plays the O sign"<<endl;
            board.at(2)[0] = 'O';
        }
        if(k==2) {
            cout <<"Player 'X' is close to winning, as they already have 2 marks in a row.."<<endl;
            board.at(4)[0] = 'X';
        }
        if(k==3){
            cout << "Ohh no! Player 'O' made mistake! He will paid the biggest price in this game."<<endl;
            board.at(5)[0] = 'O';
        }

        if(k==4){
            cout <<"Player 'X' has won! He already had three marks in a row. Now let me show you how to defend against this"<<endl;
            board.at(7)[0] = 'X';
        }
        if(k==5){
            cout <<"Let's go back two turns. Player 'O' could have placed their mark and blocked player 'X' from winning on the next turn.!" <<endl;
            board.at(5)[0] = '5';
            board.at(7)[0] = '7';

        }
        if(k ==6){
            cout << "Now player 'X' is already blocked. He has to look for another move!"<<endl;
            board.at(7)[0] = 'O';
        }
        for (int i{1}; i <= 9; ++i) {
            cout << " | " << board.at(i)[0];
            if (i % 3 == 0) {
                cout << " |";
                cout << endl;
                cout << " -------------";
                cout << endl;

            }

        }
        getchar();
        cout << "Press any key to continue"<<endl;
        system(CLEAR);

    }
    cout << "I hope you understand these rules. You can always come back here and reapet."<<endl;
}
#endif //GAME_INSTRUCTION_H
