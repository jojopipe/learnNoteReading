#ifndef NOTE
#define NOTE

#define note_t __note*

enum note_prototype {c, cs, d, ds, e, f, fs, g, gs, a, as, b};

typedef struct note {
    int pos;
    enum note_prototype notep;
    char name[4]; //worst is probably something like f5bb
}
__note;

void set_note(note_t note, int pos, const char*, enum note_prototype notep);
void free_note(note_t note);

#endif