//
// Created by Piotr on 26.04.2023.
//

#ifndef GAME_SPECIAL_MODE_GAME_H
#define GAME_SPECIAL_MODE_GAME_H
bool special_mode_game(map <int, vector <char>> &board, int &loop_counter,map <string, int> players, string &first_nickname, string &second_nickname, vector <string> &winners_to_score_board,  int &rounds){
    int select_a_field{0};
    int number_of_game {1};
    reset_board(board, rounds);

    loop_counter =2;
    winners_to_score_board.clear(); //cleaning vector before new game
    while (loop_counter < rounds+2){ //rounds+2 because special_mode is starting from second position on board, I don't want modify game and instruction

        cout << "Game number "<<number_of_game<<endl;

        ++number_of_game;

        for (int i{1}; i <= 9; i++) {
            bool condition{false};
            if(i == 1)
               show_board(board, loop_counter);


            if (i % 2 != 0) {
                cout << first_nickname<< " has "<<players[first_nickname]<<" points "<<" is choosing field" << endl;
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
                cout << second_nickname<< " has "<<players[second_nickname]<<" points "<<" is choosing field" << endl;
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
            if(i < 9)
                show_board(board, loop_counter);
            if (game_check(board, loop_counter, players, first_nickname, second_nickname) &&i % 2 != 0){
                ++players[first_nickname];
                winners_to_score_board.push_back(first_nickname);
                cout <<first_nickname<<" won round\n";
                break;
            }
            if (game_check(board, loop_counter, players, first_nickname, second_nickname) &&i % 2 == 0) {
                ++players[second_nickname];
                winners_to_score_board.push_back(second_nickname);
                cout <<second_nickname<<" won round\n";
                break;
            }
            else if(i == 9) {
                winners_to_score_board.push_back("Noone");
                break;

            }

        }


            first_nickname.swap(second_nickname);




        ++loop_counter;
        cout <<"Press any key, to continue"<<endl;
        getchar();
        getchar();
        show_board(board, loop_counter);
    }

    if( players[first_nickname] > players[second_nickname])
        cout << first_nickname << " is winning "<<players[first_nickname] <<" : "<<players[second_nickname]<<endl;
    else if( players[first_nickname] < players[second_nickname])
        cout <<second_nickname << " is winning "<<players[second_nickname] <<" : "<<players[first_nickname]<<endl;
    else
        cout <<"     Draw!\n";

    cout << "Press C to continue game, or any key to leave\n";
    char escape_game{};
    cin >> escape_game;
    if(escape_game == 'C') {
        cout <<"Next challenge, how many rounds do you want play?";
        int limit{11};
        cin >> rounds;

        while (is_int_ok(rounds, limit)) {
            cin >> rounds;
        }
        return true;

    }
    else
        return false;
}
#endif //GAME_SPECIAL_MODE_GAME_H
