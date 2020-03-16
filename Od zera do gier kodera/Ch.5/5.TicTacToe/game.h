#ifndef GAME_H_INCLUDED
#define GAME_H_INCLUDED

const int GAME_SIZE = 3;
enum SIGN {SGN_CIRCLE = 'O',
           SGN_CROSS  = 'X'  };
enum FIELD {FLD_EMPTY,
            FLD_CIRCLE = SGN_CIRCLE,
            FLD_CROSS  = SGN_CROSS  };
enum GAMESTATE {GS_NOTSTARTED, GS_MOVE, GS_WON, GS_DRAW};
extern GAMESTATE g_StanGry;

// prototypy funkcji
// -----------------

// rozpoczenie gry
bool StartGry();

// wykonanie ruchu
bool Ruch(unsigned);

// rysowanie planszy
bool RysujPlansze();

// inicjalizacja planszy
bool InicjujPlansze();

#endif // GAME_H_INCLUDED
