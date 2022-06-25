#include <iostream>
#include <vector>
using namespace std;

vector< vector<int> > cestini;

void inizia(int N, int M) {

	vector<int> a;
	
	cestini.resize(M, a);
	
	vector<int>::iterator itcestino;

	
	 for (int i = 0; i < N; i++) {
         cestini[0].push_back(i);
    }
 
}


void sposta(int a, int b) {

	
	cestini[b].push_back(cestini[a][cestini[a].size()-1]);
	cestini[a].pop_back();

	
}

int controlla(int a, int i) {

	if( cestini[a].size()<= i)  return -1;
		
    return cestini[a][i];
}


