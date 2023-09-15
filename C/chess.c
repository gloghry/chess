/* Chess project in C by Garett Loghry */

#include <stdio.h>
#include "pieces.h"
#include "terminal_colors.h"

#ifndef white
#define white     1
#endif

#ifndef black
#define black     0
#endif


piece allPieces[32];
piece board[8][8];

void printWht(void);
void printBlk(void);

int main(void){
   int i;

   printWht();
   printBlk();

   return 0;
}

/*
   _________________________________         _________________________________
8  | r | n | b | q | k | b | n | r |         |WHT|BLK|WHT|BLK|WHT|BLK|WHT|BLK|
   |---|---|---|---|---|---|---|---|         |---|---|---|---|---|---|---|---|
7  | p | p | p | p | p | p | p | p |         |BLK|WHT|BLK|WHT|BLK|WHT|BLK|WHT|
   |---|---|---|---|---|---|---|---|         |---|---|---|---|---|---|---|---|
6  |   |   |   |   |   |   |   |   |         |WHT|BLK|WHT|BLK|WHT|BLK|WHT|BLK|
   |---|---|---|---|---|---|---|---|         |---|---|---|---|---|---|---|---|
5  |   |   |   |   |   |   |   |   |         |BLK|WHT|BLK|WHT|BLK|WHT|BLK|WHT|
   |---|---|---|---|---|---|---|---|         |---|---|---|---|---|---|---|---|
4  |   |   |   |   |   |   |   |   |         |WHT|BLK|WHT|BLK|WHT|BLK|WHT|BLK|
   |---|---|---|---|---|---|---|---|         |---|---|---|---|---|---|---|---|
3  |   |   |   |   |   |   |   |   |         |BLK|WHT|BLK|WHT|BLK|WHT|BLK|WHT|
   |---|---|---|---|---|---|---|---|         |---|---|---|---|---|---|---|---|
2  | p | p | p | p | p | p | p | p |         |WHT|BLK|WHT|BLK|WHT|BLK|WHT|BLK|
   |---|---|---|---|---|---|---|---|         |---|---|---|---|---|---|---|---|
1  | r | n | b | q | k | b | n | r |         |BLK|WHT|BLK|WHT|BLK|WHT|BLK|WHT|
   ---------------------------------         ---------------------------------
     a   b   c   d   e   f   g   h
*/
void printWht(void) {

   printf(CYN"    ________________________________"DEF DEFB"\n");
   for (int i = 8; i >= 1; i--) {
      if (i % 2) {            // odd row (rank)
         printf(DEF DEFB"%d  "CYN"|"DEF DEFB, i);
         for (int i = 1; i <= 8; i++) {
            if (i % 2) printf(BLKB" %c "DEFB, 'x');   // odd column (file)
            else printf(GRYB" %c "DEFB, 'x');
            printf(CYN"|"DEF);
         }
      } else {                // even row (rank)
         printf(DEF DEFB"%d  "CYN"|"DEF DEFB, i);
         for (int i = 1; i <= 8; i++) {
            if (i % 2) printf(GRYB" %c "DEFB, 'x');   // odd column (file)
            else printf(BLKB" %c "DEFB, 'x');
            printf(CYN"|"DEF);
         }
      }
      if (i != 1) printf(CYN"\n   |---|---|---|---|---|---|---|---|"DEF DEFB"\n");
   }

   printf(CYN"\n    --------------------------------"DEF DEFB"\n");
   printf(RESET"     a   b   c   d   e   f   g   h\n");

   return;
}


/*
   _________________________________         _________________________________
1  | r | n | b | q | k | b | n | r |         |WHT|BLK|WHT|BLK|WHT|BLK|WHT|BLK|
   |---|---|---|---|---|---|---|---|         |---|---|---|---|---|---|---|---|
2  | p | p | p | p | p | p | p | p |         |BLK|WHT|BLK|WHT|BLK|WHT|BLK|WHT|
   |---|---|---|---|---|---|---|---|         |---|---|---|---|---|---|---|---|
3  |   |   |   |   |   |   |   |   |         |WHT|BLK|WHT|BLK|WHT|BLK|WHT|BLK|
   |---|---|---|---|---|---|---|---|         |---|---|---|---|---|---|---|---|
4  |   |   |   |   |   |   |   |   |         |BLK|WHT|BLK|WHT|BLK|WHT|BLK|WHT|
   |---|---|---|---|---|---|---|---|         |---|---|---|---|---|---|---|---|
5  |   |   |   |   |   |   |   |   |         |WHT|BLK|WHT|BLK|WHT|BLK|WHT|BLK|
   |---|---|---|---|---|---|---|---|         |---|---|---|---|---|---|---|---|
6  |   |   |   |   |   |   |   |   |         |BLK|WHT|BLK|WHT|BLK|WHT|BLK|WHT|
   |---|---|---|---|---|---|---|---|         |---|---|---|---|---|---|---|---|
7  | p | p | p | p | p | p | p | p |         |WHT|BLK|WHT|BLK|WHT|BLK|WHT|BLK|
   |---|---|---|---|---|---|---|---|         |---|---|---|---|---|---|---|---|
8  | r | n | b | q | k | b | n | r |         |BLK|WHT|BLK|WHT|BLK|WHT|BLK|WHT|
   ---------------------------------         ---------------------------------
     h   g   f   e   d   c   b   a
*/
void printBlk(void) {

   printf(CYN"    ________________________________"DEF DEFB"\n");
   for (int i = 8; i >= 1; i--) {
      if (i % 2) {            // odd row (rank)
         printf(DEF DEFB"%d  "CYN"|"DEF DEFB, i);
         for (int i = 1; i <= 8; i++) {
            if (i % 2) printf(BLKB" %c "DEFB, 'x');   // odd column (file)
            else printf(GRYB" %c "DEFB, 'x');
            printf(CYN"|"DEF);
         }
         if (i != 1) printf(CYN"\n   |---|---|---|---|---|---|---|---|"DEF DEFB"\n");
      } else {       // even number
         printf(DEF DEFB"%d  "CYN"|"DEF DEFB, i);
         for (int i = 1; i <= 8; i++) {
            if (i % 2) printf(GRYB" %c "DEFB, 'x');   // odd column (file)
            else printf(BLKB" %c "DEFB, 'x');
            printf(CYN"|"DEF);
         }
         printf(CYN"\n   |---|---|---|---|---|---|---|---|"DEF DEFB"\n");

      }
   }

   printf(CYN"\n    --------------------------------"DEF DEFB"\n");
   printf(RESET"     a   b   c   d   e   f   g   h\n");

   return;
}
