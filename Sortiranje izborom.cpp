#include <iostream>
using namespace std;

int main() {
	int N;
	float A[1000];
	do {
		cout << "N= "; cin >> N;
	} while(N<2 || N>1000);
	for (int i=0;i<N;i++){
		cout << "A["<< i <<"]="; cin >> A[i];
	}
	//			SORTIRANJE IZBOROM!!!!!!
	for(int i=N; i>1; i--){
		int Max = 0;
		for (int j=1; j<i; j++){
			if (A[j]>A[Max]) Max = j;
		}
		float pom = A[i-1];
		A[i-1]=A[Max];
		A[Max]=pom;
	}
	for (int i=0; i<N; i++){
		cout << A[i] << " " <<endl;
	}
	
	system("pause");
	return 0;
}
