#include<iostream>
#include<string>
using namespace std;

char* fun(char* str1, char* str2) {
	int len1 = 0, len2 = 0;
	int i = 0,j=0;
	while (str1[i] != '\0') {
		len1++;
		i++;
	}
	while (str2[j] != '\0') {
		len2++;
		j++;
	}
	for (int i = len1; i < len1 + len2; i++) {
		str1[i] = str2[i -len1 ];
	}
	str1[len1 + len2] = '\0';
	return str1;
}

int main() {
	char str1[100];
	char str2[100];
	char* p;
	int i = 0,len=0;
	printf("请输入第一个字符串：\n");
	gets_s(str1);
	printf("请输入第二个字符串：\n");
	gets_s(str2);
	p = fun(str1, str2);
	cout << p;

	return 0;
}