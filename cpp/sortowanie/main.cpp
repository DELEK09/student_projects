#include <iostream>
#include "sort.cpp"

using namespace std;

int main(){
	int v[5] = {69, -1225, 2137, 420};
	sort(v);
	for(int i : v) {cout << i << " ";}
	return 0;
}
