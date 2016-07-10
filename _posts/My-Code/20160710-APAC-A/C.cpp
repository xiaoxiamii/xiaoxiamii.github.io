#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<math.h>
#include<vector>
#include<string>
#include<sstream>
#include<algorithm>
#include<stack>
#include<queue>
#include<limits.h>
#include<numeric>
#include<cstring>
#include<map>
#include<set>
#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<cctype>
#include<vector>
#include<map>
#include<set>
#include<stack>
#include<list>
#include<string>
#include<cstdlib>
#include<queue>
#include<cmath>
#include<iomanip>
#include<climits>
#include<fstream>
#include<unordered_set>
#include<unordered_map>
#include<functional>
#include<string.h>

#define LLI long long int 
#define THRE 1e-9
using namespace std;

void solution() {
	long double left = -1;
	long double right = 1;
	int nums;
	scanf("%d", &nums);
	vector<LLI> costs;
	for (int i = 0; i < nums + 1; ++i) {
		LLI num;
		scanf("%lld", &num);
		costs.push_back(num);
	}
	costs[0] = -costs[0];
	long double r;
	for (int i = 0; i < 100; ++i){
		r = (left + right) /2 ;
		long double sums = 0.0;
		for (int i = 0; i < costs.size(); ++i) {
			sums = sums* (r+1) + costs[i];
		}
		//printf("sums : %.14f\t r: %.14f \n", sums, r);
		if(sums > 0){
			left = r;
		}
		else {
			right = r;
		}
	}
	//printf("%.12f \t %.12f\n", right, left );
	printf("%.12f\n", (right + left )/2);
	//printf("%.12f\n", r);
}

int main() {
	freopen("test3.in", "r", stdin); freopen("test3.out", "w", stdout);
	//freopen("C-large-practice.in", "r", stdin); freopen("C-large-practice.out", "w", stdout);
	int T = 0;
	scanf("%d", &T);
	for (int i = 1; i <= T; ++i) {
		printf("Case #%d: ", i);
		//printf("Case #%d:\n", i);
		solution();
	}
	fclose(stdin);
	fclose(stdout);

	return 0;
}

