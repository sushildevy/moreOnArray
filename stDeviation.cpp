// File:    stDeviation
// Author:  Sushil Pandey
// Program: prog5 
// Date:    02/28/2018

// Description: This file contains the function stDeviation

#include <cmath>

//function prototypes
double avg(const int scores[],int count);

//Function: stDeviation
//Description: This function calculates standard deviation of scores
//Input :numbers (array of int)
//       count-the numbers of scores in the array
//output: standard deviation 
//Preconditions:count contains the number of scores in the array
//Postconditions:The standard deviation of the scores 

double stDeviation(const int scores[], int count)
{
  double mean;    //mean of the scores
  double sqr ;   
  double tot=0;  
  double stDeviation;   //standard deviation
  mean=avg(scores,count);
  for(int i=0;i <count;i++)
  {
    sqr=pow((scores[i]-mean),2);
    tot+=sqr;
  }
    stDeviation=sqrt(tot/count);
    return stDeviation;
}