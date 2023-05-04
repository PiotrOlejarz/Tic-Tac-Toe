//
// Created by Piotr on 26.04.2023.
//

#ifndef GAME_SET_NICKNAME_H
#define GAME_SET_NICKNAME_H
void set_nickname(const size_t which_player, map <string, int> &players, string &first_nickname, string &second_nickname){
    system(CLEAR);
    if(which_player == 1) {
        cout <<"Enter nickname max 11 characters in one line" << first_nickname<<": ";
        players.erase(first_nickname);
        do {
            cin >> first_nickname;
            if(first_nickname.size() > 12)
                cout << "To much characters, try again: ";
        }while(first_nickname.size() > 12);


    }
    else if(which_player == 2) {
        cout << "Enter nickname max 11 characters in one line"<<second_nickname<<": ";
        players.erase(second_nickname);
        do {
            cin >> second_nickname;
            if(second_nickname.size() > 12)
                cout <<"To much characters, try again: ";
        }while(second_nickname.size() > 12);

    }

}
#endif //GAME_SET_NICKNAME_H
