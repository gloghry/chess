/* Piece structure for all 6 types of pieces.

Possible (char) p_name (piece name) possibility's are:
   Pawn     'p'
   Knight   'n'
   Bishop   'b'
   Rook     'r'
   Queen    'q'
   King     'k'

Possible (bool) colors are:
   White    0
   Black    1

Coordinate positions come in two forms:
   The 2D array is built from the top left, going left to right and top down.
   Accessing a position in the array would be by [row][column].

   The chess notation is a piece followed by column and row.
   We would expect to see something in the form of ka1.

   It is critical to understanding these differences and perhaps having a function
   to fill one or the other to avoid problems. Maybe a dictionary would work.

   Reference board below, but ka1 would mean the king is on the board[7][0]
                        while ka8 would mean the king is on the board[0][0]
   The white printout will probably build top down, while 
   the black printout will probably built bottom up. This way [0][0] is
   perserved at a8.

Chess boards are configured in an 8x8 pattern,
with rows being identified with numbers   1-8,
while columns are letters with            a-h

The board can be viewed from two different positions.
   White is the "standard" way of looking at it,
   with a1 in the bottom left corner, and h8 in the top right.

   Black is the alternate way, looking reverse from white.
   a1 is in the top right for black, and h8 is the bottom left.

   Each piece has a starting location. Pawns fill the 2nd and 7th rank.
   Keep in mind that chess calls rows ranks
                       and calls columns files

Viewed from whites position, we should see someting ike this:
   _________________________________
8  | r | n | b | q | k | b | n | r |
   |---|---|---|---|---|---|---|---|
7  | p | p | p | p | p | p | p | p |
   |---|---|---|---|---|---|---|---|
6  |   |   |   |   |   |   |   |   |
   |---|---|---|---|---|---|---|---|
5  |   |   |   |   |   |   |   |   |
   |---|---|---|---|---|---|---|---|
4  |   |   |   |   |   |   |   |   |
   |---|---|---|---|---|---|---|---|
3  |   |   |   |   |   |   |   |   |
   |---|---|---|---|---|---|---|---|
2  | p | p | p | p | p | p | p | p |
   |---|---|---|---|---|---|---|---|
1  | r | n | b | q | k | b | n | r |
   ---------------------------------
     a   b   c   d   e   f   g   h
     

*/

#define white     1
#define black     0

typedef struct piece_ {
   char name;
   _Bool color;
} piece;
