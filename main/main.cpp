#include <iostream>
#include <conio.h>

#include <init.hpp>
#include <macros.hpp>
#include <map.hpp>

int main() {
    init();
    draw_line(1, 1, 5, 5, 'O');
    dump_map();
    system("pause > nul");
}
