#include <encrypt.h>
#include <stdio.h>
#include <checksum.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Russian");
	char s[]= "����� ���� � �������";
	encrypt(s);
	printf("����������� � '%s'\n", s);
	printf("����������� �����: %d\n", checksum(s));
	encrypt(s);
	printf("������������ � '%s'\n", s);
	printf("����������� �����: %d\n", checksum(s));
	return 0;
}
