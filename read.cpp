// File:    read.cpp
// Author:  Sushil Pandey
// Program: prog5 
// Date:    02/28/2018

// Description: This file contains the function read
#include <iostream>
#include "constants.h"
using namespace std;

// Function:read
//Description:reads ints from input from keyboard until the sentinel value 
//             is entered and stores them in an array.
//input: <none>
//output: scores(array of int)
//        count(int)-the number of integers read and stored into the array
//Preconditions: <none>
//Postconditions:The array will be assigned with the values entered from keyboard 
//                and the count will contain the number of scores in the array.
void read(int scores[],int& count,int& maxScore)
  {
    count=0;
    
    cout<<"please enter the maximum possible value:"<<endl;
    cin>>maxScore;
    int testScore;
    cout<<"please enter the student test scores:"<<endl;
    cin>>testScore;
    while (testScore!=sentinel && count<arraySize)    //loop 
    {
      if (testScore <= maxScore)
      {
	scores[count]=testScore;
        count++;
      }
      else
	cout<<"Sry!! your score is bigger than maximum score"<<endl;
      
      cout<<"please enter the student test scores:"<<endl; 
           cin>>testScore;
    }
  }