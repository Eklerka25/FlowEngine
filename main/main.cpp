#include <iostream>
#include <conio.h>

#include <init.h>
#include <macros.h>
#include <map.h>

int main() {
    init();
    draw_line(1, 1, 5, 5, 'O');
    dump_map();
    system("pause > nul");
}
