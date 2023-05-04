//
// Created by Piotr on 26.04.2023.
//

#ifndef GAME_IS_INT_OK_H
#define GAME_IS_INT_OK_H
bool is_int_ok(int to_check){
    if(cin.fail() || to_check>9 || to_check < 1) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid value. Try again: ";
        return 1;
    }
    else
        return 0;

}
bool is_int_ok(int to_check, int limit){

    if (cin.fail() ) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid value. Try again: ";
        return 1;
    }
    else if(to_check >= limit || to_check < 1){
        cout << "Invalid value. Try again: ";
        return 1;
    }
    else
        return 0;

}
#endif //GAME_IS_INT_OK_H
