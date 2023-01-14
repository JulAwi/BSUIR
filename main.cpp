int main()
{
	int numbers[4] = {1,2,3,4};
	int first_number = numbers[0];
	std::cout << first_number << std::endl;	// 1
	numbers[0] = 34;						// изменяем элемент
	std::cout << numbers[0] << std::endl; // 34
	
	return 0;
}