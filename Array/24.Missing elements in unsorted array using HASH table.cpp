#include<iostream>
using namespace std;
struct Array {
	int* A;
	int size;
	int length;
};
int Min(struct Array* arr) {
	int min = INT_MAX;
	for (int i = 0; i < arr->length; i++) {
		if (arr->A[i] < min)
			min = arr->A[i];
	}
	return min;
}

int Max(struct Array* arr) {
	int max = INT_MIN;
	for (int i = 0; i < arr->length; i++)
		if (arr->A[i] > max)
			max = arr->A[i];
	return max;
}
void Missingelemet_Hash_table(struct Array* arr) {
	int* H;
	int i;
	int low = Min(arr);
	int high = Max(arr);
	H = new int[high];
	for (int i = 0; i < high; i++)H[i] = { 0 };
	for (i = 0; i < arr->length-1; i++) {
		H[arr->A[i]]++;
	}
	for (i = Min(arr); i <= high; i++) {
		if (H[i] == 0)
			cout << i<<" ";
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
	Missingelemet_Hash_table(&arr);
return 0;

}