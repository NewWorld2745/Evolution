#include <iostream>
#include <string>
#include <math.h>
#include <random>
#include <time.h>
#include <vector>
#include <array>

using namespace std;


//User Conditions
int runTime;
char qualityOfLife;
bool showStats;


//System Conditions
int roomForError;


//Environmental Conditions
int timePast;
int foodSource;
int temperature;


//Population Values
int startPop;
int currentPop;
int endPop;
int maxGenerations;
int males;
int females;


//Individual Characteristics
bool lookingForMate;
bool isParent;
bool isMother;
bool isFather;
bool isChild;
bool breedable;
bool socialyAccepted;
bool healthy;
bool tired;
bool exiled;
bool dead;
bool leaveGroup;
bool contempt;
bool stayInGroup;
bool isHostile;
bool isPregnant;
bool isResting;

int group;
int groupPosition;
int age;
int size;
int speed;
int energy;
int unitNumber;
int foodDesire;

char job;
char gender;


string greeting = "Starting Simulation...";


//Functions to be used
void los();
void qol();
void rts();
void checkingInput();


//Core
int main() {

	cout << greeting << endl;

	los();

	qol();

	rts();

	checkingInput();

	return 0;
}


void los() {
	cout << "Length of simulation (minutes, 1-10): ";
	cin >> runTime;
}


void qol() {
	cout << "\n" << "Quality of life (a, b, c): ";
	cin >> qualityOfLife;
}


void rts() {
	cout << "\n" << "Show real time stats? (true/false): ";
	cin >> showStats;
}


void checkingInput() {
	if (runTime == 1 || runTime == 2 || runTime == 3 || runTime == 4 || runTime == 5 || runTime == 6 || runTime == 7 || runTime == 8 || runTime == 9 || runTime == 10)
	{

		if (runTime == 1)
		{
			cout << "Running simulation for " << runTime << " minute..." << "\n";
		}
		else
		{
			cout << "Running simulation for " << runTime << " minutes..." << "\n";
		}

		cout << "Quality of life will be at level \"" << qualityOfLife << "\"..." << "\n";

		if (showStats = true) {
			cout << "Showing real time stats..." << "\n";
		}
		else
		{
			cout << "Not displaying real time stats. Results will be displayed when the simulation ends..." << "\n";
		}
	}
	else
	{
		cout << "Please enter a valid paramaters...";
	}
}