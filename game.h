//
//  game.h
//  MedFetcher
//
//  Created by Lance Ju on 5/25/13.
//  Copyright (c) 2013 Lance Ju. All rights reserved.
//

#ifndef MedFetcher_game_h
#define MedFetcher_game_h

#define MED_A 0
#define MED_B 1
#define MED_C 2

typedef struct Taker {
    int amount;  // The amount is fixed when after the taker is created.
    int type;
} Taker;

typedef struct Med {
    int type;
} Med;

typedef struct Unit {
    int now;
    int total;
} Unit;

typedef struct MedBox {
    Unit a;
    Unit b;
    Unit c;
} MedBox;


void take( Taker *, Med );


#endif
