#include "cars.h"
#ifndef utilitaire_h
#define utilitaire_h

#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/sem.h>
double genereRandom(double min, double max);
int SemId;
structCar *voitures;
int *brain;
int *listePid;
structCar *qualifiedFor2;
structCar *qualifiedFor3;
int indexOf(int i, int longueur, int t[]);
void killIt();
int startPosition;
int tempsMaxCircuit;
int calculerTempsMax(int tailleCircuit);
void tempsS1(int i);
void tempsS2(int i);
void tempsS3(int i);

extern struct sembuf semWait0;
extern struct sembuf semDo0;
extern struct sembuf semPost0;
extern struct sembuf semWait1;
extern struct sembuf semDo1;
extern struct sembuf semPost1;
extern struct sembuf semWait2;
extern struct sembuf semDo2;
extern struct sembuf semPost2;

#endif