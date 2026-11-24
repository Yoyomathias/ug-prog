
#include <stdio.h>
int main(void) {
	int age;
	age = 3;
	if (age <= 1) {
		printf("bonjour bébé ! ");}
	if (age > 1 && age <= 14) {
		printf("bonjour mes petits !");}
	if (age > 14 && age <= 30) {
		printf("bonjour jeune homme !");}
	if (age > 30 && age <= 60) {
		printf("bonjour monsieur ! ");}
	if (age > 60) {
		printf("bonjour papy ! ");
	}
}
