// File:    outputScores.cpp
// Author:  Sushil Pandey
// Program: prog5 
// Date:    02/28/2018

// Description: This file contains the function outputScores



#include <iostream>
#include <iomanip>
#include "constants.h" 
using namespace std;



//function outputScores
//Description: output the tabulation form of array(scores entered), 
//              respected percentage and respected grade 
//input:integers(array of int)
//output:percentage
//       grade (character grade of eacb score)       
//count(int)-the number of scores in the array
//preconditions:count contains the number of scores in the array
//postconditions: the array(scores),respected percentage and grade is
//               displayed to the screen

void outputScores(const int scores[],int count,int maxScore)
{ 
  char grade;
  
  //print format of headings
  cout  << setw(10) <<left<<"score" <<setw(16) <<"Prercentage(%)"<<setw(9)<<right<<"Grade"<<endl;
  for(int i=0;i<count;i++)
  {
    cout<<fixed<<showpoint<<setprecision(2);
    double pct = static_cast<double>(scores[i]) / maxScore * 100;
  //grade range  
  if (pct >= A_min)
     grade='A';
  else if (pct>=B_min)
      grade='B';
  else if (pct>=C_min)
      grade='C';
  else if (pct >=D_min)
    grade='D';
  else
    grade='F';
  //print format of scores, percentage and grade
  cout<<setw(10)<<left<<scores[i]<<setw(3)<<setw(6)<<right<<pct<<" %"<<setw(15)<<right<<grade<<endl;
       
  }
}