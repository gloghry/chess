/* Terminal color codes

This is built to be used with C like syntax
Other languages may not use #define in the same way

helpful image (with more colors) at url https://i.stack.imgur.com/9UVnC.png
*/

/* FOREGROUND (IE TEXT) COLOR */
#define BLK "\033[30m"
#define RED	"\033[31m"
#define GRN	"\033[32m"
#define YEL	"\033[33m"
#define BLU	"\033[34m"
#define MAG	"\033[35m"
#define CYN	"\033[36m"
#define WHT	"\033[37m"
// non standard colors below. They may not all be supported.
#define BRBLK	"\033[90m"	// also known as "bright black
#define GRY	BRBLK
#define BRWHT	"\033[97m"

/* BACKGROUND COLOR */
#define BLKB 	"\033[40m"
#define REDB	"\033[41m"
#define GRNB	"\033[42m"
#define YELB	"\033[43m"
#define BLUB	"\033[44m"
#define MAGB	"\033[45m"
#define CYNB	"\033[46m"
#define WHTB	"\033[47m"
// non standard colors below. They may not all be supported.
#define BRBLKB	"\033[100m"
#define GRYB	BRBLKB
#define BRWHTB	"\033[107m"

/* DEFAULTS AND RESETS */
#define DEF    "\033[39m"
#define DEFB   "\033[49m"
#define RESET  "\033[0m"

void printColors(void) {
   printf("FG\tBG\n");
   for (int i = 40; i < 48; i++) {
      printf("\033[%dm\n", i);         // need to figure out why it skips a line
   }
   printf(RESET"\n");
}
