#include "Source.h"
#include <iterator>
#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <time.h>
#include <sstream> 

int randomWithLimits(int nedre, int ovre) {
	int heltTilfeldigTall = rand();
	ovre = ovre - nedre + 1;
	int tilfeldigMedGenser = (heltTilfeldigTall % ovre) + nedre;
	return tilfeldigMedGenser;
}
