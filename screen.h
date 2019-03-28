// constant definitions
enum COLORS(BLACK, RED, GREEN, YELLOW, BLUE, MAGENTA, CYAN, WHITE);
#define bg(c) (c+10)	//macro definition
// function declarations
void clearScreen(void);
void setColors(short fg, short bg);
void resetColors(void);
