#include <iostream>
#include <macros.h>

char map[80][25];

void overwrite_map(char value) {
    map[x][y] = value;
}

void draw(int x, int y, char value) {
    map[x][y] = value;
}

void dump_map() {
    for (int y = 0; y < 10; y++) {
        for (int x = 0; x < 10; x++) {
            write << map[y][x];
        }
        write << "\n";
    }
}

void draw_line(int x1, int y1, int x2, int y2, char value) {
    int dx = abs(x2 - x1);
    int dy = abs(y2 - y1);
    int sx = (x1 < x2) ? 1 : -1;
    int sy = (y1 < y2) ? 1 : -1;
    int err = dx - dy;

    while (1) {
        map[y1][x1] = value;

        if (x1 == x2 && y1 == y2) break;

        int e2 = 2 * err;
        if (e2 > -dy) {
            err -= dy;
            x1 += sx;
        }
        if (e2 < dx) {
            err += dx;
            y1 += sy;
        }
    }
}
