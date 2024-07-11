#include<iostream>
#include<cstdlib>
#include<cctype>
using namespace std;
char UL[80];
char word[80];
char* car;
char* p1;
char* LA();
void copie(char*, char*);
int main() {
	unsigned int n;
	cout << "input word: ";
	cin >> word;
	car = word;
	while (*car != '\0') {
		cout << LA() << ' ';
		cout << UL << ' ';
	}
	cout << "\nword is in the language";
	system("pause");
	return 0;
}

char* LA() {
	int state = 0;
	while (1) {
		switch (state) {
		case 0:	if (*car == '*' || *car == '+' || *car == '(' || *car == ')' || *car == '$')
		{
			p1 = car; state = 1; break;
		}
			  else if (isalpha(*car))
		{
			p1 = car; state = 2; break;
		}
			  else
			if (isdigit(*car))
			{
				p1 = car; state = 3; break;
			}
			else
			{
				cout << "lexical error"; exit(1);
			}
		case 1: copie(p1, car); return "SEP";
		case 2: if (isalpha(*car) || isdigit(*car))
			break;
			  else { copie(p1, car); return "ID"; }
		case 3:  if (isdigit(*car))
			break;
			  else
		{
			copie(p1, car); return "INTEGER";
		}


		}
		++car;
	}
}

void copie(char* p, char* car) {
	int i = 0;
	while (p < car) {
		UL[i] = *p;
		p++; i++;
	}
	UL[i] = '\0';
}

