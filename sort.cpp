//File: sort.cpp
//Author: Sushil Pandey
//program:prog5
//Date:02/28/2018

//Description:This file contains the function sort

//function:sort 
//Description:This function will sort an array descendingly
//Input: integers ( array of integers)
//count(int)-the number odf values in an array
//output:numbers(array of int) - sorted descendingly

//precondition:count contains the number of values store in an array

//postCondition:The array of integers is arranged in descending order


void sort(int scores[] , int& count)
{
   int temp;
   int large;
   for (int i=0; i<count-1; i++)     // put n-1 ints in their correct spot
   {
      large=i;
      for (int j=i+1;j<count;j++)      //loop to find the largest
         if (scores[j] > scores[large])
            large=j;
      temp = scores[i];                // put largest in proper position
      scores[i] = scores[large];
      scores[large] = temp;
   }
}
