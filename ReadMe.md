a)

char name[] = "img",

value[] = "sunset.jpg",

pair[128];



b)

if( sizeof(pair) < strlen(name) + strlen(value) + 2)

{

puts("Fehler: Vektor pair ist zu klein!");

return 1;

}



c)

Vorausgesetzt die Header-Datei string.h ist inkludiert.

strcpy( pair, name); // Name kopieren.

strcat( pair, "="); // '=' anhängen.

strcat( pair, value); // Wert anhängen.



Die alternative Lösung mit den secure-Funktionen lautet wie folgt, vorausgesetzt

das Makro __STDC_WANT_LIB_EXT1__ ist vor string.h als 1 definiert.

strcpy_s( pair, sizeof(pair), name); // Name kopieren.

strcat_s( pair, sizeof(pair), "="); // '=' anhängen.

strcat_s( pair, sizeof(pair), value); // Wert anhängen.
