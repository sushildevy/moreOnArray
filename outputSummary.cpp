// File:    outputSummary.cpp
// Author:  Sushil Pandey
// Program: prog6 
// Date:    03/21/2018

// Description: This file contains the function outputSummary


#include <iostream>
using namespace std;
//included function prototypes
double avg(const int scores[],int count);
double median( const int scores[] , int& count);
double stDeviation(const int scores[], int count);

//function:outputsummary
//Description:output the maximum score, number of students, high scores
//             low score, range of score, average of scores, median and 
//             standars deviation of the scores.
//input: integers(array of int)
//	 count (int)-the number of scores in the array
//output:<none>
//preconditions:count contains the number of scores in the array
//postconditions:calculated results will be displayed to the screen

void outputSummary(const int scores[],int count, int maxScore)
{ 
  
  cout<<"The output summary goes like this:"<<endl<<endl;
  cout<<"The maximum score is "<< maxScore<<endl<<endl;
  cout<<"The number of students processed is "<<count<<endl<<endl;
  cout<<"The highest score is "<<scores[0]<<endl<<endl;
  cout<<"The lowest score is "<<scores[count-1]<<endl<<endl;
  cout<<"The range of the score is "<<scores[0]-scores[count-1]<<endl;
  cout<<"The average of the scores is "<<avg(scores,count)<<endl<<endl;
  cout<<"The median score is "<<median (scores,count)<<endl;
  cout<<"The standard deviation is "<<stDeviation(scores,count)<<endl<<endl;
}