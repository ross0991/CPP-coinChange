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
