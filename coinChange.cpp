#include <iostream>
#include <vector>

#define MAXN 100

using namespace std;

vector<int> coins = {1, 3, 4};

int value[MAXN];
bool ready[MAXN];

void initialise(){
  for(int i=0; i< MAXN; i++){
    value[i] = -1;
    ready[i] = false;
  }
};

int solve(int x){
  if(x < 0) return MAXN;
  if(x == 0) return 0;
  if(ready[x]) return value[x];
  
  int best = MAXN;
  for(auto c :coins){
    best = min(best, solve(x-c) +1);
  }
  ready[x] = true;
  value[x] = best;
  return best;
};

int main(){
  initialise();
  cout << solve(10);
  return 0;
}
