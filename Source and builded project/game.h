//
// Created by Piotr on 26.04.2023.
//

#ifndef GAME_GAME_H
#define GAME_GAME_H
void game(map <int, vector <char>> &board, int &loop_counter,map <string, int> players, string &first_nickname, string &second_nickname){
    int select_a_field{0};
    reset_board(board);
    loop_counter =1;
    show_board(board, loop_counter);
    char escape_game{'C'};
    while (escape_game == 'C'){
        for (int i{1}; i <= 9; i++) {
            bool condition{false};


            if (i % 2 != 0) {
                cout << first_nickname<< " turn: ";
                do {
                    do {
                        cin >> select_a_field;
                    }while(is_int_ok(select_a_field));

                    if (board.at(select_a_field)[loop_counter] != 'X' && board.at(select_a_field)[loop_counter] != 'O') {
                        board.at(select_a_field)[loop_counter] = 'X';
                        condition = true;
                    }
                    else if(is_int_ok(select_a_field))
                        cout << "This field is occupied. Try again: ";

                } while (condition != true);


            }
            if (i % 2 == 0) {
                cout << second_nickname<< " turn: ";
                do {
                    do {
                        cin >> select_a_field;
                    }while(is_int_ok(select_a_field));

                    if (board.at(select_a_field)[loop_counter] != 'X' && board.at(select_a_field)[loop_counter] != 'O') {
                        board.at(select_a_field)[loop_counter] = 'O';
                        condition = true;
                    } else
                        cout << "This field is occupied. Try again: ";


                } while (condition != true);
            }
            if (game_check(board, loop_counter, players, first_nickname, second_nickname) &&i % 2 != 0){
                cout << first_nickname << " won!\n";
                break;
            }
            else if (game_check(board, loop_counter, players, first_nickname, second_nickname) &&i % 2 == 0) {
                cout << second_nickname <<" won!\n";
                break;
            }
            show_board(board, loop_counter);

        }
        show_board(board, loop_counter);
        cout << "Press C to continue game, or any key to leave";
        cin >> escape_game;
        if(escape_game=='C'){
            reset_board(board);
        }

        first_nickname.swap(second_nickname);


        show_board(board, loop_counter);
    }
}
#endif //GAME_GAME_H
