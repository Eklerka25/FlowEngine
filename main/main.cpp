#include <iostream>
#include <conio.hpp>

#include <init.hpp>
#include <macros.hpp>
#include <map.hpp>
#include <info.hpp>

int main() {
    init();
    overwrite_map(' ');
    
    while (true) {
        system("cls");
        dump_map();
        overwrite_map(' ');
        draw_polygon(3,3,7,3,7,10,'X');
        system("timeout /t 0 /nobreak > nul");
    }

    system("pause > nul");
}
