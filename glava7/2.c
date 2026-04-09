#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int sports_no_bieber(char *s)
{
    return strstr(s, "спорт") && !strstr(s, "Бибер");
}

int sports_or_workout (char *s)
{
    return strstr(s, "спорт") || strstr(s, "тренировки в зале");
}

int ns_theater(char *s)
{
    return strstr(s, "некурящий ") && strstr(s, "театр");
}

int arts_theater_or_dining(char *s)
{
    return strstr(s, "живопись") || strstr(s, "театр") || strstr(s, "перекусить");
}

void find( int (*match)(char*))
{
    int i;
    puts("Search results:");
    puts("------------------------");
    for (i = 0; i < NUM_ADS; i++) {
        if (match (ADS[i])) {
            printf("%s\n", ADS[i]);
        }
    }
    puts("--------------------------");
}

int main()
{
    find(sports_no_bieber);
    find(sports_or_workout);
    find(ns_theater);
    find(arts_theater_or_dining);
    return 0;
}
