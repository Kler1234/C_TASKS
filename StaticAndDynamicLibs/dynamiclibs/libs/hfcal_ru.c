#include <stdio.h>
#include <hfcal.h>
#include <locale.h>
void display_calories(float weight, float distance, float coeff){
	setlocale(LC_ALL, "Russian");
	printf("Вес: %3.2f килограмм\n", weight);
	printf("Расстояние: %3.2f километров\n", distance);
	printf("Сожжено калорий: %4.2f кал\n", coeff * weight * distance);
}
