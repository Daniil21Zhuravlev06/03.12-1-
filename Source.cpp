//Даниил Журавлёв


int main() {
	int etaperemennayravnadesyati = 10;
	const int n = 10;
	int arr[n];
	fill_array(arr, n, 0, 10);
	print_array(arr, n);
	 cout << sum_array(arr, n);
	 cout << proizvedenie(arr, n);
	 cout << srednee_arifm(arr, n);
	 cout << col_chet(arr, n) << "\n";
	 cout << boolalpha << bol(arr, n, etaperemennayravnadesyati);
}