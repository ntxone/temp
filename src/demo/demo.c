/**
 * @file demo.c
 * Демонстраційна програма.
 * @author xone
 * @version 0.0.1
 * @date 2017.09.17
 */

/**
 * Точка входу.
 * @return код завершення
 */
int main(void) {
	// Початкові дані.
	// Номер мобільного телефону.
	const unsigned long long data = 380661234567;
	// Додаткові змінні.
	// Поточна цифра.
	unsigned int digit;
	// Кількість цифр.
	unsigned int digitNumber = 0;
	// Кількість парних.
	unsigned int evenNumber = 0;
	// Кількість непарних.
	unsigned int oddNumber = 0;
	// Кількість двійкових одиниць.
	unsigned int bitNumber = 0;

	// Знаходження рішення прикладної задачі.
	// Підрахунок кількості парних і непарних десяткових цифр.
	// Копія початкового значення.
	unsigned long long copy = data;
	while (copy > 0) {
		digit = copy % 10;
		oddNumber += digit % 2;
		++digitNumber;
		copy /= 10;
	}
	evenNumber = digitNumber - oddNumber;
	// Результат у змінних evenNumber та oddNumber.

	// Підрахунок кількості двійкових одиниць.
	copy = data;
	while (copy > 0) {
		bitNumber += copy & 1;
		copy >>= 1;
	}
	// Результат у змінних evenNumber, oddNumber та bitNumber.

	return 0;
}
