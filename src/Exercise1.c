/*
1.	Input an array of n integers. Write a function to check whether
the array is symmetric or not (optional: use recursive)
Ex:
 ____________________________________ 
| Input: 1 2 3 2 1                   |
| Output: symmetric                  |
|____________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void Ex1(int arr[], int n){
	//Your codes here
	int m=n-1,check;	
		for (int j=n/2,i=0;m>=j,i<=(n-1)/2;m--,i++) {
			if (arr[i]!=arr[m])
				check =0;
				else	check=1;
			 }
	if (check==0)
	printf(" not symmetric ");
	else printf(" symmetric");
}

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	argc--;
	int testcase[argc],i;
	for(i=0; i<argc;i++){
		testcase[i] = atoi(argv[i+1]);
	}
	
	Ex1(testcase, argc);
	
	return 0;
}
