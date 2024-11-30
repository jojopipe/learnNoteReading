//
// Created by joppo on 11/30/24.
//
#include "note.h"
#include "scale.h"

int note_in_scale(note_t note, scale_t *scale) {
    enum note_prototype p = note->notep;
    int32_t check = -1;
    switch(p) {
        case c:
            check = 1;
            break;
        case cs:
            check = 2;
            break;
        case d:
            check = 4;
            break;
        case ds:
            check = 8;
            break;
        case e:
            check = 16;
            break;
        case f:
            check = 32;
            break;
        case fs:
            check = 64;
            break;
        case g:
            check = 128;
            break;
        case gs:
            check = 256;
            break;
        case a:
            check = 512;
            break;
        case as:
            check = 1028;
            break;
        case b:
            check = 2056;
            break;
        default:
            check = -1;
    }

    return check & scale->type_of_scale;
}