#include <stdio.h>
#include <hfcal.h>
#include <locale.h>
void display_calories(float weight, float distance, float coeff){
	setlocale(LC_ALL, "Russian");
	printf("���: %3.2f ���������\n", weight);
	printf("����������: %3.2f ����������\n", distance);
	printf("������� �������: %4.2f ���\n", coeff * weight * distance);
}
