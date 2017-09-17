/**
 * @file demo.c
 * �������������� ��������.
 * @author xone
 * @version 0.0.1
 * @date 2017.09.17
 */

/**
 * ����� �����.
 * @return ��� ����������
 */
int main(void) {
	// ��������� ���.
	// ����� ��������� ��������.
	const unsigned long long data = 380661234567;
	// �������� ����.
	// ������� �����.
	unsigned int digit;
	// ʳ������ ����.
	unsigned int digitNumber = 0;
	// ʳ������ ������.
	unsigned int evenNumber = 0;
	// ʳ������ ��������.
	unsigned int oddNumber = 0;
	// ʳ������ �������� �������.
	unsigned int bitNumber = 0;
	// ����������� ������ ��������� ������.
	// ϳ�������� ������� ������ � �������� ���������� ����.
	// ���� ����������� ��������.
	unsigned long long copy = data;
	while (copy > 0) {
		digit = copy % 10;
		oddNumber += digit % 2;
		++digitNumber;
		copy /= 10;
	}
	evenNumber = digitNumber - oddNumber;
	// ��������� � ������ evenNumber �� oddNumber.
	// ϳ�������� ������� �������� �������.
	copy = data;
	while (copy > 0) {
		bitNumber += copy & 1;
		copy >>= 1;
	}
	// ��������� � ������ evenNumber, oddNumber �� bitNumber.
	return 0;
}
