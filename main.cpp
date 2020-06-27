// File:    main.cpp
// Author:  Sushil Pandey
// Program: prog6 
// Date:    03/21/2018

// Description: This file contains the function main
// The program will read ints from the keyboard into an array until the
// sentinel value (-1) is entered, sort them descendingly, then output them
// to the screen.
#include <string>
#include <fstream>
#include <iostream>
#include <iomanip>
#include<cmath>
#include "constants.h"     //constants 
using namespace std;

//function prototypes
double avg(const int scores[],int count);
double median( const int scores[] , int& count);
void outputScores(const string names[],const int scores[],int count,int maxScore)
void outputSummary(const int scores[],int count, int maxScore);
void read(string names[],int scores[],int& count,int& maxScore)
void sort(string names[],int scores[] , int count)
double stDeviation(const int scores[], int count);

//Function: main
//Description: the main function calls the other functions
//Input: <none>
//output: <none>
//Preconditions:<none>
//postconditions:<none>

int main() 
{
  //variables
  string names [ arraySize];
  int scores[arraySize]; 
  int maxScore;           //maximum scores
  int count;              // count of scores
  
  //calling above function
  read(names,scores,count,maxScore);
  sort(names,scores,count);
  outputScores(names,scores,count,maxScore);
  outputSummary(scores,count,maxScore);
  cout<<maxScore<<endl;
  
  for (int i=0; i<count;i++)
  {
    cout << names[i];
    cout << scores[i] <<endl;
  } 
  return 0;
  
  
}    