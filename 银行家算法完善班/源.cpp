#include<iostream>
using namespace std;



class bank {
private:
	int nums_P, nums_R;
	int Need[20][20], Allocation[20][20],/* Resource[20], */Available[20];
	bool Finish[20];
	bool Safe_flag = true;
public:
	bank(){
		nums_P = 0;
		nums_R = 0;
	}
	bank(int P, int R) {
		nums_P = P;
		nums_R = R;
		cout << "请输入Need矩阵:" << endl;
		my_cin(Need);
		cout << "请输入Allocation矩阵:" << endl;
		my_cin(Allocation);
		/*cout << "请输入Resource矩阵:" << endl;
		my_cin(Resource);*/
		cout << "请输入Available矩阵:" << endl;
		my_cin(Available);
		for (int i = 0; i < P; i++) {
			Finish[i] = false;
		}
	}

	void my_cin(int arr[][20]) {
		for (int i = 0; i < nums_P; i++) {
			for (int j = 0; j < nums_R; j++) {
				cin >> arr[i][j];
			}
		}
	}

	void my_cin(int arr[]) {
		for (int i = 0; i < nums_R; i++) {
			cin >> arr[i];
		}
	}

	void printf() {
		cout << "Need:" << endl;
		for (int i = 0; i < nums_P; i++) {
			for (int j = 0; j < 3; j++) {
				cout << Need[i][j] << " ";
			}
			cout << endl;
		}

		cout << "Allocation:" << endl;
		for (int i = 0; i < nums_P; i++) {
			for (int j = 0; j < 3; j++) {
				cout << Allocation[i][j] << " ";
			}
			cout << endl;
		}

		cout << "Available:" << endl;
		for (int i = 0; i < nums_R; i++) {			
				cout << Available[i] << " ";	
		}

		cout << endl<<endl<<endl;
	}

	int check() {
		for (int i = 0; i < nums_P; i++) {
			if (Finish[i] == true)
				continue;
			for (int j = 0; j < nums_R; j++) {
				if (Available[j] + Allocation[i][j] >= Need[i][j]) {
					if (j == nums_R - 1)
						return i;
				}
				else
					j = nums_R - 1;
			}
		}
		Safe_flag = false;
	}

	void run(int p_id) {
		for (int i = 0; i < nums_R; i++) {
			Available[i]= Available[i]+Allocation[p_id][i];
			Allocation[p_id][i] = 0;
			Need[p_id][i] = 0;
		}
		Finish[p_id] = true;
		/*safe[x] = p_id;
		x++;*/
		printf();
	}

	bool my_break() {
		for (int i = 0; i < nums_P; i++) {
			if (Finish[i] != true){
				return false;
			}
		}
		return true;
	}

	bool get_safe() {
		return Safe_flag;
	}

	~bank() {}
};

int main() {
	int p, r,p_id,i=0;
	int safe[20];
	cout << "请输入进程数量:" << endl;
	cin >> p;
	cout << "请输入进程所需资源种类数目：" << endl;
	cin >> r;
	bank test(p, r);
	cout << endl;
	while (1) {
		if (!test.get_safe()) {
			cout << "不安全状态！" << endl;
			break;
		}

		p_id = test.check();
		safe[i] = p_id+1;
		i++;
		test.run(p_id);

		if (test.my_break()) { break; }

		system("pause");
	}
	if (test.get_safe()) {
		cout << "安全序列:"<<endl;
		for (int j = 0;j<i; j++)
			cout << safe[j] << " ";
	}
	
	return 0;
}