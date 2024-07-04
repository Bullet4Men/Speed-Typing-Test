#include <ncurses.h>
#include <stdlib.h>
#include <time.h>
#include "typing_test.h"

int main() {
    initscr();
    noecho();
    cbreak();
    start_color();
    use_default_colors();
    curs_set(0);
    srand(time(NULL));

    start_typing_test();

    endwin();

    return 0;
}

