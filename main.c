#include <stdio.h> // include this file for the printf() function
#include <gb/gb.h> // include this file for Game Boy functions
#include "Di.c"

void main()
{

    int x = 55; // Our beginning x coord
    int y = 75; // Our beginning y coord

    SPRITES_8x16;
    set_sprite_data(0, 0, Di);
    set_sprite_tile(0, 0);
    set_sprite_tile(1, 2, Di);
    move_sprite(0, x, y); // Move sprite to our predefined x and y coords
    move_sprite(1, x + 8, y);

    SHOW_SPRITES;

    while (1)
    {
        if (joypad() == J_RIGHT) // If RIGHT is pressed
        {
            x++;
            move_sprite(0, x, y); // move sprite 0 to x and y coords
            move_sprite(1, x + 8, y);
            delay(10);
        }

        if (joypad() == J_LEFT) // If LEFT is pressed
        {
            x--;
            move_sprite(0, x, y); // move sprite 0 to x and y coords
            move_sprite(1, x + 8, y);
            delay(10);
        }

        if (joypad() == J_UP) // If UP is pressed
        {
            y--;
            move_sprite(0, x, y); // move sprite 0 to x and y coords
            move_sprite(1, x + 8, y);
            delay(10);
        }

        if (joypad() == J_DOWN) // If DOWN is pressed
        {
            y++;
            move_sprite(0, x, y); // move sprite 0 to x and y coords
            move_sprite(1, x + 8, y);
            delay(10);
        }
        if (joypad() == J_A) // If DOWN is pressed
        {
            printf("Cock");
            delay(100);
        }
    }
}
