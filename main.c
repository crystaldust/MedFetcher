//
//  main.c
//  MedFetcher
//
//  Created by Lance Ju on 5/25/13.
//  Copyright (c) 2013 Lance Ju. All rights reserved.
//

#include <stdio.h>
#include "game.h"
int main(int argc, const char * argv[])
{
    
    printf( "%10s   |   %-5s   |   %10s\n\n", "Medicine", "Taker", "Box" );
    
    printf( "%10s   |   %-5s   |   A:%d/%d, B:%d/%d, C:%d/%d\n", "Type A", "  A", 0, 5, 0, 6, 0, 10 );
    printf( "%10s   |   %-5s   |   A:%d/%d, B:%d/%d, C:%d/%d\n", "Type A", "  B", 0, 5, 0, 6, 0, 10 );
    printf( "%10s   |   %-5s   |   A:%d/%d, B:%d/%d, C:%d/%d\n", "Type A", "  C", 0, 5, 0, 6, 0, 10 );
    
    Taker taker = { 0, MED_A };
    Med medA    = { MED_A };
    Med medB    = { MED_B };
    Med medC    = { MED_C };
    
    take( &taker, medA );   printf( "%d\n", taker.type );
    take( &taker, medB );   printf( "%d\n", taker.type );
    take( &taker, medC );   printf( "%d\n", taker.type );
    
    
    
    return 0;
}

