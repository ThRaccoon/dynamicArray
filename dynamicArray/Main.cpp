#include<iostream>

int main() {
	
	int n = 0;
	std::cout << "Enter the number of items:" << std::endl;
	std::cin >> n;
	
	int* arr = new int(n);
	
	std::cout << "Enter " << n << " items" << std::endl;
	
	for (int i = 0; i < n; i++) 
	{
		std::cin >> arr[i];
	}
	std::cout << "You entered: ";
	
	for (int i = 0; i < n; i++) 
	{
		std::cout << arr[i] << " ";
	}
	
	delete[] arr;

	return 0;
}