#include <iostream>
#include <string>
using namespace std;
int main(){
	string name = "Minecraft";
	string name2 = "MINECRAFT";
	for (int i = 0; i < 9; i++) {
		cout << "name[" << i << "]" <<" = " << name[i] << endl;
	}
	cout << name << endl;
	cout << "LYC工作室的名称：" << name[0] << name2[8] << "Studio" << endl;
	return 0;
}