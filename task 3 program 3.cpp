// C++ implementation of the approach 
#include <bits/stdc++.h> 
using namespace std; 

// Function to generate the required array 
int specialSieve(int n) 
{ 

	// Initialize cnt variable for assigning 
	// unique value to prime and its multiples 
	int cnt = 0; 
	int prime[n + 1]; 

	for (int i = 0; i <= n; i++) 
		prime[i] = 0; 

	for (int i = 2; i <= n; i++) { 

		// When we get a prime for the first time 
		// then assign a unique smallest value to 
		// it and all of its multiples 
		if (!prime[i]) { 
			cnt++; 
			for (int j = i; j <= n; j += i) 
				prime[j] = cnt; 
		} 
	} 

	// Print the generated array 
//	for (int i = 2; i <= n; i++) 
		//cout << prime[i] << " ";
	
		sort(prime, prime+n);
		int sum = prime[2],b=prime[2];
		if(n%2!=0)
		{
		for (int i = 2; i <=n; i++)
		{
			if(b != prime[i])
			{
				sum = sum + prime[i];
				b=prime[i];
			}
		}
	}
	if(n%2==0)
		{
		for (int i = 2; i <n; i++)
		{
			if(b != prime[i])
			{
				sum = sum + prime[i];
				b=prime[i];
			}
		}
	}
	return sum;	 
} 

// Driver code 
int main() 
{ 

	int n; 
cin>>n;
	cout << specialSieve(n); 

	return 0; 
} 
