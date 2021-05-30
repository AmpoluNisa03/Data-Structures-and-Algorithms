#include<iostream>
using namespace std;
struct Array {
	int* A;
	int size;
	int length;
};
void MultipleMissingElement(struct Array* arr) {
	int low = arr->A[0];
	int difference = low - 0;
	for (int i = 0; i < arr->length; i++) {
		if (arr->A[i] - i != difference) {
			while (difference < arr->A[i] - i)
			{
				cout << i + difference<<" ";
				difference++;
			}
		}
	}
}

int main() {
	struct Array arr;
	int no;
	cout << "Enter the size of the array " << endl;
	cin >> arr.size;
	arr.A = new int[arr.size];
	arr.length = 0;
	cout << "Enter the size of the array" << endl;
	cin >> no;
	cout << "Enter the elements of the array " << endl;
	for (int i = 0; i < no; i++) 
		cin >> arr.A[i];
	arr.length = no;
	
	cout << "The missing elements are ! " << endl;
	MultipleMissingElement(&arr);
	return 0;

}