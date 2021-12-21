#include<iostream>
using namespace std;

ostream& operator<<(ostream& out,const int str[4][3]) {
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 3; j++) {
			cout << str[i][j] << " ";
			if (j == 2)
				cout << endl;
		}
	}
	return cout;
}
int check(int str[4][3]) {
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 3; j++) {
			if (str[i][j] == 0)
				 continue;
			return 0;
		}
	}
}

void printf(int str[]) {
	cout << str[0] << " " << str[1] << " " << str[2] << endl<<endl;
	
}

int main() {
	int need[4][3] = { {3,2,2},{6,1,3},{3,1,4},{4,2,2} };
	int Allocation[4][3] = { {1,0,0},{6,1,2},{2,1,1},{0,0,2} };
	int Resourse[3] = { 9,3,6 };
	int Available[3] = { 0,1,1 };
	int finish[4] = { 0,0,0,0 };
	int x, y, z,flag=0;

	

	for (int i = 0; i < 4; i++) {
		if (flag == 1)
			i = 0;
		flag = 0;
		x = Allocation[i][0] + Available[0];
		y = Allocation[i][1] + Available[1];
		z = Allocation[i][2] + Available[2];

		if (finish[i]==1)
			continue;
		if (x >= need[i][0] && x >= need[i][1] && x >= need[i][2]) {
			finish[i] = 1;
			Available[0] -= need[i][0] - Allocation[i][0];
			Available[1] -= need[i][1] - Allocation[i][1];
			Available[2] -= need[i][2] - Allocation[i][2];

			Available[0] += need[i][0];
			Available[1] += need[i][1];
			Available[2] += need[i][2];

			need[i][0] = 0;
			need[i][1] = 0;
			need[i][2] = 0;

			Allocation[i][0] = 0;
			Allocation[i][1] = 0;
			Allocation[i][2] = 0;

			if (finish[0] == 1 && finish[1] == 1 && finish[2] == 1 && finish[3] == 1)
				break;
			cout << "need:" << endl << need << "Allocation:" << endl << Allocation << "Available"<<endl;
			printf(Available);
			flag = 1;
		}	
	}


}