#include <iostream>
#include <conio.h>

#include <init.h>
#include <macros.h>
#include <map.h>
#include <info.h>

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
