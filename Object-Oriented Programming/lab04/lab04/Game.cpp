#include "Game.h"
Game::Game() {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            Items[i][j] = Empty;
        }
    }
}
void Game::MakeMove(int row, int col) {
    if (Items[row][col] != Empty) {
        return;
    }
    if (Winned) {
        return;
    }
    Items[row][col] = CurrentPlayer == 0 ? Cross : Nought;
    if (CheckWinner(Cross) || CheckWinner(Nought)) {
        Winned = true;
        return;
    }
    CurrentPlayer ^= 1;
}
bool Game::CheckWinner(FieldState state){
    for (int i = 0; i < 3; i++) {
        if (Items[i][0] == state && Items[i][1] == state && Items[i][2] == state) {
            return true;
        }
        if (Items[0][i] == state && Items[1][i] == state && Items[2][i] == state) {
            return true;
        }
    }
    if (Items[0][0] == state && Items[1][1] == state && Items[2][2] == state) {
        return true;
    }
    if (Items[0][2] == state && Items[1][1] == state && Items[2][0] == state) {
        return true;
    }
    return false;
}
bool Game::AllCellsAreFull() {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (Items[i][j] == Empty) {
                return false;
            }
        }
    }
    return true;
}
bool Game::CheckTie() {
    return !Winned && AllCellsAreFull();
}