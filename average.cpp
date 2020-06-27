// File:    average.cpp
// Author:  Sushil Pandey
// Program: prog5 
// Date:    02/28/2018

// Description: This file contains the function avg

//function:avg
//Description: output the averageof the scores to the screen
//Input: scores(array of int)
//	count(int)-the numbers of scores in the array
//output: <none>
//preconditions: count contains the number of scores in the array
//postconditions: average of the scores is output ti the screen


double avg(const int scores[],int count)
{    
     int sum=0;
     for(int i=0; i<count;i++)
     {
         sum+=scores[i];
	 
     }
     double average;   
     cout<<fixed<<showpoint<<setprecision(2)<<endl;
     return static_cast<double>(sum )/count;
     
}
