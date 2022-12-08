#include <encrypt.h>
#include <stdio.h>
#include <checksum.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Russian");
	char s[]= "Скажи друг и приходи";
	encrypt(s);
	printf("Зашифровано в '%s'\n", s);
	printf("Контрольная сумма: %d\n", checksum(s));
	encrypt(s);
	printf("Расшифровано в '%s'\n", s);
	printf("Контрольная сумма: %d\n", checksum(s));
	return 0;
}
