#include "Board.h"
#include"Header.h"

void Board::display_board() {
    // Draw horizontal lines
    for (int i = 0; i < 30; i++) {
        gotoRowCol(20, 20 + i);
        std::cout << static_cast<char>(-37);
    }

    // Draw vertical lines
    for (int i = 0; i < 30; i++) {
        gotoRowCol(20 + i, 20);
        std::cout << static_cast<char>(-37);
        gotoRowCol(20 + i, 49);
        std::cout << static_cast<char>(-37);
    }

    // Draw horizontal lines at the bottom
    for (int i = 0; i < 30; i++) {
        gotoRowCol(49, 20 + i);
        std::cout << static_cast<char>(-37);
    }

    // Draw a small box inside the board for the goal area
    for (int i = 0; i < 10; i++) {
        // Top horizontal line of the box
        gotoRowCol(24, 25 + i);
        std::cout << static_cast<char>(-37);

        // Bottom horizontal line of the box
        gotoRowCol(27, 25 + i);
        std::cout << static_cast<char>(-37);

        // Left vertical line of the box
        gotoRowCol(25 + i, 24);
        std::cout << static_cast<char>(-37);

        // Right vertical line of the box
        gotoRowCol(25 + i, 29);
        std::cout << static_cast<char>(-37);
    }
}


