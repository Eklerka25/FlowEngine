#pragma once

#include <iostream>
#include <macros.hpp>

void overwrite_map(char value);
void draw(int x, int y, char value);
void dump_map();
void draw_line(int x1, int y1, int x2, int y2, char value);
void draw_polygon(int x1, int y1, int x2, int y2, int x3, int y3, char value);
