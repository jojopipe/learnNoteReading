//
// Created by joppo on 11/30/24.
//
#include "note.h"
#include <stdint.h>

#ifndef LEARNNOTEREADING_SCALE_H
#define LEARNNOTEREADING_SCALE_H

typedef struct scale {
    enum note_prototype root;
    uint32_t type_of_scale;
} scale_t;

int note_in_scale(note_t note, scale_t *scale);

#endif //LEARNNOTEREADING_SCALE_H
