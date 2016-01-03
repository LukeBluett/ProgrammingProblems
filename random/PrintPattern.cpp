/*
*  
*   Problem 
*	Write a program to print the following pattern
*	1
*	2 4 
*	3 5 7
*	6 8 10 12 
*	9 11 13 15 17﻿
*	With out using if else 
*
*   Source Google+ community C++ Programmers
*   Link https://plus.google.com/115582589296720380101/posts/3aTvj8ebPTe
*/

#include <iostream>
#include <math.h>

int main()
{
   int i = 36;
   int j = 1;
   while(i > 2)
   {
      i = ceil(i / 2.0f);
      int k = (int)floor(18 / i);
      int n = 0;
      for(int l = 0; l < j; l++)
      {
         std::cout << k + n << " ";
         n += 2;
      }
      std::cout << "\n";
      j++;
   }
}
