#include <stdio.h>
typedef union {
float lemon;
int lime_pieces;
}lemon_lime;
typedef struct {
float tequila;
float cointreau;
lemon_lime citrus;
} margarita;
int main()
{
margarita m = {2.0, 1.0, {2}};
printf("%2.1f порции текилы\n%2.1f порции куантро\n%2.1f порции сока\n", m.tequila, m.cointreau, m.citrus.lemon);
}