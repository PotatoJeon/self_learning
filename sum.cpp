//sum.cpp
#include <stdio.h>

int sum(int n){
	int res=0;
	for(int i=1; i<=n; ++1)
		res+=i;
	return res;
}

