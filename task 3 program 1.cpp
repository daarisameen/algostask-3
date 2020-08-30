// C++ program to count number of times we 
// need to add digits to get a single digit. 
#include <bits/stdc++.h> 
using namespace std; 

int NumberofTimes(string str) 
{ 
	// Here the count variable store 
	// how many times we do sum of 
	// digits and temporary_sum 
	// always store the temporary sum 
	// we get at each iteration . 
	int temporary_sum = 0, count = 0; 

	// In this loop we always compute 
	// the sum of digits in temporary_ 
	// sum variable and convert it 
	// into string str till its length 
	// become 1 and increase the count 
	// in each iteration. 
	while (str.length() > 1) 
	{ 
		temporary_sum = 0; 

		// computing sum of its digits 
		for (int i = 0; i < str.length(); i++) 
			temporary_sum += ( str[ i ] - '0' ) ; 

		// converting temporary_sum into string 
		// str again . 
		str = to_string(temporary_sum) ; 

		// increase the count 
		count++; 
	} 

	return count; 
} 

// Driver program to test the above function 
int main() 
{ 
	string s;
	cin>>s;
	cout << NumberofTimes(s);
	return 0; 
} 

