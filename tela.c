#define SERV_TELA
#include "tela.h"
#define SERV_PECA
#include "peca.h"

EXT_MOD_TELA Tela nova_tela () {
	Tela t;
	int i, j;

	t.x = OFFSET_X_TELA;
	t.y = OFFSET_Y_TELA;

	for (i=0; i < TELA_ALTURA; i++){
		for (j=0; j < TELA_LARGURA; j++) {
			t.bloco[i][j] = novo_bloco(j, i, INVISIVEL);
		}

	}

	return t;
}

EXT_MOD_TELA void mostra_tela (Tela* t){
	int i, j;

	for (i = 0; i < TELA_ALTURA; i++){
		for (j=0; j < TELA_LARGURA; j++) {
			mostra_bloco(&(t->bloco[i][j]));
		}
	}

	for(i=OFFSET_X_TELA; i < 2*TELA_LARGURA+OFFSET_X_TELA; i+=2)
	{
		set_color(1);
		mvaddstr(OFFSET_Y_TELA, i, "--");
		mvaddstr(OFFSET_Y_TELA + TELA_ALTURA, i, "--");
	}

	for(i=OFFSET_Y_TELA; i <= TELA_ALTURA+OFFSET_Y_TELA; ++i)
	{
		set_color(1);
		mvaddch(i, OFFSET_X_TELA, '|');
		mvaddch(i, OFFSET_X_TELA + 2*TELA_LARGURA, '|');
	}

}
