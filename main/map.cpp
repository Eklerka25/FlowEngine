#include <iostream>
#include <macros.hpp>

#define WIDTH 80
#define HEIGHT 25

char map[WIDTH][HEIGHT];

void overwrite_map(char value) {
    for (int y = 0; y < HEIGHT; y++) {
        for (int x = 0; x < WIDTH; x++) {
            map[x][y] = value;
        }
    }
}

void draw(int x, int y, char value) {
    map[x][y] = value;
}

void dump_map() {
    for (int y = 0; y < HEIGHT; y++) {
        for (int x = 0; x < WIDTH; x++) {
            write << map[x][y];
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
