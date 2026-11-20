#include <iostream>

using namespace std;

void sort(int v[5]){
	int n = 5;
	for (int i = 0; i < n-1; i++) {
		for (int j = 0; j < n-i-1; j++) {
			if (v[j] > v[j+1]) swap(v[j], v[j+1]);
		}
	}
}
