#include<bits/stdc++.h>
using namespace std;

bool Check_Power_Of_2(int n)
{
	// Bit Manipulation Technique
	// Subtract 1 from the number and use bit-wise &(AND) with original number
	// 4 - 0100 and 3 - 0011 		bit-wise & result : 0
	// 5 - 0101 and 4 - 0100		bit-wise & result : 1
	// 8 - 1000 and 7 - 0111   		bit-wise & result : 0
	
	// This first n is helpful in indetifying whether the number is actually zero 
	// or not. The second expression !(n & (n-1)) will fail.
	return (n && (!(n & (n-1))) ); 
}

int main()
{
	printf("0\t");		Check_Power_Of_2(0) 	? printf("Yes\n") : printf("No\n");
	printf("2\t");		Check_Power_Of_2(2) 	? printf("Yes\n") : printf("No\n");
	printf("1024\t");	Check_Power_Of_2(1024)  ? printf("Yes\n") : printf("No\n");
	printf("25\t");		Check_Power_Of_2(25) 	? printf("Yes\n") : printf("No\n");
	printf("1\t");		Check_Power_Of_2(1) 	? printf("Yes\n") : printf("No\n");
	
	return 0;
}
