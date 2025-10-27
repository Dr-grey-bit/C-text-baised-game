#include<iostream>
#include<cmath>
#include<list>
using namespace std;

list <double> CharacterStats() {
	list <double> stats;
	stats.push_front(15.0); // Health
	stats.push_back(2.0); // Damage
	stats.push_back(0.0); // Defense
	stats.push_back(1.0); // Level
	stats.push_back(0.0); // Experience
	stats.push_back(100.0); // Experiance until next level
	return stats;
}

