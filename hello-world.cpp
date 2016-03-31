#include "hello-world.h"
#include <iostream>
#include <string>

using namespace std;

void HelloWorld::setName(string &n) {
	name = n;
}

string HelloWorld::getName() {
	return name;
}

int main() {
	HelloWorld a;
	cout << "Please enter a name:" << endl;
	string n;
	getline(cin, n);
	a.setName(n);
	cout << "Hello " << a.getName() << endl;
	return 0;
}