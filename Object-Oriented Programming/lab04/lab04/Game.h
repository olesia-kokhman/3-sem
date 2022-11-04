#pragma once
#ifndef GAME_H
#define GAME_H
enum FieldState {
    Empty,
    Cross,
    Nought
};
class Game {
public:
    FieldState Items[3][3];
    int CurrentPlayer = 0;
    bool Winned = false;
    Game();
    void MakeMove(int row, int col);
    bool CheckTie();
private:
    bool CheckWinner(FieldState state);
    bool AllCellsAreFull();
};
#endif
