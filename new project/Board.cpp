#include "Board.h"
#include"Header.h"

void Board::display_board() {
    int BoardWidth = 160;
    int BoardHeight = 80;
    char sym{ 'x' };
    //Draw Top Left Base
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            gotoRowCol(BoardHeight / 2 + i, (BoardWidth / 2-6) + j);
            std::cout << char(-37);
        }
    }
    //Draw Top Right Base
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            gotoRowCol(BoardHeight / 2 + i, (BoardWidth / 2+3) + j);
            std::cout << char(-37);
        }
    }
    //Draw Down Left Base
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            gotoRowCol((BoardHeight / 2+9) + i, (BoardWidth / 2 - 6) + j);
            std::cout << char(-37);
        }
    }
    //Draw Down Right Base
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            gotoRowCol((BoardHeight / 2 + 9) + i, (BoardWidth / 2 + 3) + j);
            std::cout << char(-37);
        }
    }
    //Draw Top Verticle Lines
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 3; j++) {
            gotoRowCol(BoardHeight / 2+i, BoardWidth / 2 + j);
            std::cout << sym;
        }
    }
    //Draw Left Horizontal Lines
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 6; j++) {
            gotoRowCol((BoardHeight / 2 + 6) + i, (BoardWidth / 2 - 6) + j);
            std::cout << sym;
        }
    }
    //Draw Bottom Verticle Lines
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 3; j++) {
            gotoRowCol((BoardHeight / 2+9) + i, BoardWidth / 2 + j);
            std::cout << sym;
        }
    }
    //Draw Right Horizontal Lines
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 6; j++) {
            gotoRowCol((BoardHeight / 2 + 6) + i, (BoardWidth / 2-6)+9 + j);
            std::cout << sym;
        }
    }
    _getch();
}


