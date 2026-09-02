#include <iostream>
using namespace std;

class Product {
	public:
		int id;
		string name;
		int date; // Day of the month
		Product() {}		
		Product(int id, string name, int date) : id(id), name(name), date(date) {}		
};

void bubbleSort(int* arr, int n) {
	//Ascending Order
	for (int i = 0; i < n - 1; i++) {
		bool swapped = 	false;				
		for (int j = i; j < n - i - 1; j++) {
			if (arr[j] > arr[j + 1])  {
				swap(arr[j], arr[j + 1]);
				swapped = true;
			}
		}
		
		if (!swapped) break;
	}
}

void bubbleSortProduct(Product* arr, int n) {
	//Ascending Order
	for (int i = 0; i < n - 1; i++) {
		bool swapped = 	false;				
		for (int j = i; j < n - i - 1; j++) {
			if (arr[j].date > arr[j + 1].date)  {
				swap(arr[j], arr[j + 1]);
				swapped = true;
			}
		}
		
		if (!swapped) break;
	}
}


int main() {
	int n = 0;
	cout << "Enter the number of products: ";
	cin  >> n;
	Product* prods = new Product[n];
	for (int i = 0; i < n; i++) {
		string n;
		int d;
		cout << "Enter the name of product: "; cin >> n;
		cout << "Enter the expiry day of product: "; cin >> d;
		prods[i] = Product(i, n, d);
	}
	
	
	for (int i = 0; i < n; i++)	{
		cout << "Product ID: " << prods[i].id << " Product Name: " << prods[i].name << " Product date: " << prods[i].date << endl;
	}
	
	bubbleSortProduct(prods, n);
	cout << endl;
	cout << "Sorted products" << endl;
	for (int i = 0; i < n; i++)	{
		cout << "Product ID: " << prods[i].id << " Product Name: " << prods[i].name << " Product date: " << prods[i].date << endl;
	}
		
}