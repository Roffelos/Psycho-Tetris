#ifdef ENGINE_H
#define EGINE_H

#ifdef SERV_ENGINE
#define EXT_MOD_ENGINE
#else
#define EXT_MOD_ENGINE extern
#endif

void inicializa_ncurses();
void finaliza_ncurses();
int pega_input(int);


#endif