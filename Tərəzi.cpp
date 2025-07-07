// https://basecamp.eolymp.com/az/problems/11400
#include<bitset>
#include<stdio.h>
using namespace std;
const int MAX = 50000000;
bitset<MAX> b;
int n, a[1 << 4];
void solve(int i, long long sum) {
  if(i == n) {
    if(sum >= 0 and sum < MAX) b[sum] = 1;
    return;
  }
  solve(i + 1, sum);
  solve(i + 1, sum + a[i]);
  solve(i + 1, sum - a[i]);
}

int main () {
  scanf("%d",&n);
  for(int i = 0; i < n; ++i) scanf("%d",&a[i]);
  solve(0, 0); 
  for(int i = 0; i < MAX; ++i) {
    if(!b[i]) {
      printf("%d\n", i);
      break;
    }
  }
}