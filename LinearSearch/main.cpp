#include<iostream>

// Вывод массива в консоль.
template<typename T>
void print_arr(T arr[], const int lenght) {
	std::cout << '[';
	for (int i = 0; i < lenght; i++)
		std::cout << arr[i] << ", ";
	std::cout << "\b\b]\n";
}

// Поиск элемента массива
// Линейный поиск первого вхождения элемента в массив.
template<typename T>
int search_index(T arr[], const int lenght, T value,int begin=0) {
	for (int i = begin; i < lenght; i++)
		if (arr[i] == value)
			return i;
	return -1;
}

// Линейный поиск последнего вхождения элемента в массив.
template<typename T>
int search_last_index(T arr[], const int lenght, T value) {
	for (int i = lenght - 1; i >= 0; i--)
		if (arr[i] == value)
			return i;
	return -1;
}
template<typename T>
int search_last_index(T arr[], const int lenght, T value,int begin) {
	for (int i = begin; i >= 0; i--)
		if (arr[i] == value)
			return i;
	return -1;
}
void subword(char word[], const int lenght, char sym) {
	int index = search_index(word, lenght, sym);
	if (index != -1) {
		for (int i = index; i < lenght; i++)
			std::cout << word[i];
		std::cout << '\n';
	}
	else
		std::cout << "Ошибка.\n";
}
int main() {
	setlocale(LC_ALL, "Russian");
	int n;
	//  Линейный поиск.
	/*const int size = 10;
	int arr[size]{ 45,34,-3,777,21,56,87,212,21,-12};
	//             0, 1,  2 ,3, 4, 5, 6, 7 , 8,  9
	std::cout << "Маассив :\n";
	print_arr(arr, size);
	int index;
	std::cout << "Введите число : ";
	std::cin >> n;

	//index = search_index(arr, size, n, 5);
	index = search_last_index(arr, size, n, 5);
	if (index != -1)
		std::cout << "Индекс: " << index << "\n\n";
	else
		std::cout << "Числа нет в массиве.\n\n";*/

	// Задание
	std::cout << "Слово.\n";
	const int word_size = 8;
	char word[word_size]{ 'f','u','n','c','t','i','o','n' };
	for (int i = 0; i < word_size; i++)
		std::cout << word[i];
	std::cout << "\nВведите символ : ";
	char sym;
	std::cin >> sym;
	std::cout << "Подслово : \n";
	subword(word, word_size, sym);

	return 0;
}