#include <iostream>
using namespace std;

#define MAX 5 // ukuran maksimum stack

class Stack {
	int top; // menyimpan indeks elemen paling atas
	public:
		int array[MAX] ; // 	Array untuk menyimpan elemen stack
		
		Stack () { top = -1; } // inisialisasi stack kosong
		
		bool isFull () ; // mengecek apakah stack penuh
		bool isEmpty () ; // mengecek apakah stack kosong
		void push (int elemen) ; // menambahkan elemen ke stack
		int pop () ; // menghapus elemen dari stack
		int peek () ; // melihat elemen paling atas
};

// mengecek apakah stack penuh
bool Stack::isFull () {
	return (top == MAX -1) ; // jika top mencapai MAX -1, berarti stack penuh
}

// mengecek apakah stack kosong
bool Stack::isEmpty () {
	return (top == -1) ; // jika top -1, berarti stack kosong
}

// menambahkan elemen ke stack
void Stack::push (int elemen) {
	if (isFull () ) {
		cout << "stack penuh, tidak bisa menambah elemen." << endl;
		return;
	}
	array [++top] = elemen;
	cout << elemen << " ditambahkan ke stack. " << endl;
}

// menghapus elemen dari stack
int Stack::pop () {
	if (isEmpty () ) {
		cout << "Stack kosong, tidak ada elemen untuk dihapus." <<
endl;
		return -1;
	}
	return array [top--];
}

// melihat elemen paling atas
int Stack::peek () {
	if (isEmpty () ) {
		cout << "Stack kosong, tidak ada elemen di atas." << endl;
		return -1;
	}
	return array [top];
}

int main () {
	Stack stack;
	
	stack.push(10); // menambahkan elemen ke stack
	stack.push(20);
	stack.push(30);
	
	cout << "Elemen paling atas: " << stack.peek() << endl; // melihat elemen paling atas
	
	cout << stack.pop() << " dihapus dari stack." << endl; // menghapus elemen dari stack
	cout << "Elemen paling atas sekarang: " << stack.peek() << endl;
	return 0;
}
