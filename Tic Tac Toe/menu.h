//
// Created by Piotr on 26.04.2023.
//

#ifndef GAME_MENU_H
#define GAME_MENU_H

bool menu(map<int, vector<char>> &board, int &loop_counter, map <string, int> players,string &first_nickname, string &second_nickname, vector <string> &winners_to_score_board, int &rounds) {
    system(CLEAR);
    cout << "Welcome in my game\n";
    cout << "Tic Tac Toe.\n";
    cout << "1. Start normal game\n";
    cout << "2. Start special mode \n";
    cout << "3. Rules and tips\n";
    cout << "4. Scoreboard\n";
    cout << "5. Set or change nickname\n";
    cout << "6. Exit\n";
    char menu_choice{};
    cin >> menu_choice;


    switch (menu_choice) {
        case '1': {
            system(CLEAR);
            game(board, loop_counter, players, first_nickname, second_nickname);
            return true;

        }
        case '2': {
            {
                system(CLEAR);
                cout << "Welcome in special mode. How many round do you want play? (max 10) ";

                int set_rounds{};
                int limit{11};
                cin >> rounds;

                while (is_int_ok(rounds, limit)) {
                    cin >> rounds;
                }


                while ((special_mode_game(board, loop_counter, players, first_nickname, second_nickname,
                                          winners_to_score_board,
                                          rounds)) == true);
                return true;
            }
            case '3': {
                system(CLEAR);
                instruction(board);
                return true;

            }
            case '4': {
                system(CLEAR);
                char choice{};
                cout << "1) Last Normal Game Score\n 2) Special mode scores: ";
                do {
                    cin >> choice;
                    if (choice == '1') {
                        cout << "Press any key to continue";
                        const int normal_game_board{
                                1};  // parametr used to display score of normal game, changing value for loop
                        show_board(board, normal_game_board);
                    } else if (choice == '2') {
                        const int special_mode_board{
                                2}; // parametr used to display score of special game, changing value for loop
                        score_board(special_mode_board, board, loop_counter, winners_to_score_board);
                    } else
                        cout << "Inncorent choice, try again: ";
                } while (choice != '1' && choice != '2');


                ::getchar();
                return true;

            }
            case '5': {
                system(CLEAR);
                cout << "1) First player nickname\n 2) Second player nickname ";
                size_t which_player{};
                char choice{};
                do {
                    cin >> choice;
                    if (choice == '1') {
                        which_player = 1;
                        set_nickname(which_player, players, first_nickname, second_nickname);
                    } else if (choice == '2') {
                        which_player = 2;
                        set_nickname(which_player, players, first_nickname, second_nickname);
                    } else
                        cout << "Inncorent choice, try again: ";
                } while (choice != '1' && choice != '2');


                return true;
            }
            case '6': {
                cout << "I hope, you enjoyed! Goodbay" << endl;
                return false;

            }

        }


    }
}
#endif //GAME_MENU_H
