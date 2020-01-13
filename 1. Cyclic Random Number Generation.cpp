#include<bits/stdc++.h>

#define N 15 							// Define the total number of random numbers to be gnerated
#define LOWER_VALUE 45 					// Define the lower limit for the number (lower range)
#define HIGHER_VALUE 55					// Define the higher limit for the number (higher range)

using namespace std;

int Rand_Range()
{
	//Logic for random number generator
	return (LOWER_VALUE + (rand() % (HIGHER_VALUE-LOWER_VALUE+1)));
}

int main()
{
	// The pseudo-random number generator should only be seeded once, 
	// before any calls to rand(), and the start of the program
	// Call it only once 
	srand(time(0));	
	
	// This structure will be responsible for tracking the values 
	// that are already generated. The size of this array of 
	// structures would be equal to higher limit of values.
	typedef struct {
		bool valid = 0;
	}num_check[HIGHER_VALUE];
	num_check number_check;
	
	// This structure will be responsible for storing the generated 
	// values and stored using the value field.
	typedef struct {
		int value = 0;
	}num[N];
	num numbers;
	
	int temp = 0;
	// This loop needs to be run for a very long time. The time of 
	// the loop will be dependent on the random generator [Rand_Range]
	// It will be generating for a very large number of times.
	for (int i=0; i<100; i++)
	{
		temp=Rand_Range();					// Random Generation
		if (number_check[temp].valid==0)	
		{
			number_check[temp].valid=1;
			numbers[i].value=temp;
		}
	}
	
	//Display Function
	for (int i=0; i<N; i++)
		if (number_check[numbers[i].value].valid == 1)
			cout<<numbers[i].value<<endl;

}
