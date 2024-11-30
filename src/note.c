
#include "note.h"
#include <string.h>
#include <malloc.h>


void set_note(note_t note, int pos, const char* c, enum note_prototype notep) {
    note = (note_t) malloc(sizeof(note));
    if (note == NULL) {
        return;
    }
    note->pos = pos;
    int i = 0;
    for (; i < strlen(c); ++i) {
        note->name[i] = c[i];
    }
    note->name[i + 1] = '\0';
    note->notep = notep;
}

void free_note(note_t note) {
    free(note);
}
