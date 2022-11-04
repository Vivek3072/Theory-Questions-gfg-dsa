// C++ program to Count set 
// bits in an integer (32 bit nuber)
// Time complexity is Theta(1) i.e, constant 

#include <bits/stdc++.h> 
using namespace std; 

    int table[256];	
	// recursive function to count set bits 
	void initialize() { 
      // To initially generate the table algorithmically:
      table[0] = 0;
      for (int i = 0; i < 256; i++) {
      // counting number of set bits in the ith number tabele[number=i]= (number of set bits in i)
          table[i] = (i & 1) + table[i / 2];
      }
	} 
	
	int countSetBits(int n)
	{
        // 0xff is value of last 8 bits  , ff is binary representaion of 8 set bits(11111111)
	    return table[n & 0xff] + 
        table[(n >> 8) & 0xff] + 
        table[(n >> 16) & 0xff] + 
        table[n >> 24]; 
	}

/* Program to test function countSetBits */
int main() 
{ 
	    initialize();
		int n = 9; 
	cout << countSetBits(n); 
	return 0; 
} 
 