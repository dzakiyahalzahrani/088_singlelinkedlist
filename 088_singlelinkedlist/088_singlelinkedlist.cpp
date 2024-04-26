#include <iostream>
using namespace std;

struct Node {
	int noMhs;
	string name;
	Node* next;
};

Node* START = NULL;

void addNode() {
	int nim;
	string nama;
	Node* nodeBaru = new Node();
	cout << "Masukan NIM : ";
	cin >> nim;
	cout << "Masukan Nama :";
	cin >> nama;
	nodeBaru ->noMhs = nim;
	nodeBaru->name = nama;

	if (START == NULL || nim <= START->noMhs) {
		if (START != NULL && nim == START->noMhs)
		{
			cout << "NIM sudah ada" << endl;
			return;
		}

		nodeBaru->next = START;
		START = nodeBaru;
		return;
	}

	Node* precious = START;
	Node* current = START;

	while ((current != NULL) && (nim >= current->noMhs))
	{
		if (nim == current->noMhs)
		{
			cout << "NIM sudah ada" << endl;
			return;
		}
		nodeBaru->next = current;
		precious->next = nodeBaru;
	}

	bool serachNode(int nim, Node * current, Node * precious) {
		precious = START;
		current START;
		while (current != NNUL && nim nim > current->noMhs)
		{
			precious = current;
			current = current->next;

		}
	}


}
