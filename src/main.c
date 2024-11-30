#include <stdio.h>
#include <raylib.h>
#include "draw.h"
#include "note.h"
#include "app.h"
#include "scale.h"
#include "constants.h"


int main(void) {
    int status = appInit();
    if (status != 0) return 1;
    note_t c5 = NULL;
    set_note(c5, 0, "c5", c);

    scale_t cmaj;
    cmaj.root = c;
    cmaj.type_of_scale = major_scale;

    printf("c5 in cmajor: %d\n", note_in_scale(c5, &cmaj));

    status = mainAppLoop();
    if (status != 0) return 1;

    status = appExit();
    if (status != 0) return 1;

    free_note(c5);
    return 0;
}
