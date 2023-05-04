cmake_minimum_required(VERSION 3.24)
project(game)

set(CMAKE_CXX_STANDARD 17)

add_executable(game main.cpp tic_tac_toe.cpp menu.h show_board.h score_board.h instruction.h set_nickname.h is_int_ok.h game.h game_check.h special_mode_game.h restart_board.h)
