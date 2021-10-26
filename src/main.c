#include <stdio.h>
#include <stdlib.h>
#include <string.h>




void draw_bitmap(int bitmap[2550], int height, int width) {
        int x = 1;
        int y = 1;
        int i = 0;
        while (y <= height) {
                if (x >= width) {
                        printf("\n");
                        y++;


                        x = 0;
                } else {

                        x++;
                        i++;
                        printf("\x1b[%d;%dm**", bitmap[i], bitmap[i]+10);
                        printf("\x1b[0m");
                }

        }

}

int main() {
        int bitmap[2550] = {31,31,31,31,31,30,30,31,31,31,31,31,31,31,
                            31,30,30,30,30,30,30,30,30,30,30,30,30,31,
                            31,30,30,30,30,30,30,30,30,30,30,30,30,31,
                            31,30,30,30,30,30,32,30,30,30,30,30,30,31,
                            31,30,30,30,30,30,30,30,30,30,30,30,30,31,
                            31,30,30,30,30,30,30,30,30,30,30,30,30,31,
                            31,31,31,31,31,31,31,31,31,31,31,31,31,31,};
        draw_bitmap(bitmap, 7, 14);
        return 0;
}
