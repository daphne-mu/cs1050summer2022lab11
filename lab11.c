// Don't forget your header


// Includes - you might need others?
#include <stdio.h>
#include "fight.h"

// Main
int main(int argc, char * argv[])
{
	// Uncomment the following line if you want random (different every time) fights
	SetSeed(0);

	// Uncomment the following line if you want to try a sample fight
	Fight("JimR",21,900,10,"5d6+5","5d12+5","Dr. Lawrence Ries",5,100,5,"1d6","N/A");
}
