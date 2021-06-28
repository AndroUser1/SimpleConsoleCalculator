#include<Windows.h>
#include<iostream>
#include<stdlib.h>
using namespace std;

bool clear = false, END = false; int i = 0;

int translator(char symbol) {

	symbol = (int)symbol;

	return symbol;

}

float algorithm(int symbol, float first_number, float second_number) {

	switch (symbol) {

	case '+':

		first_number += second_number;

		return first_number;

		break;

	case '-':

		first_number -= second_number;

		return first_number;

		break;
		
	case '*':

		first_number *= second_number;

		return first_number;

		break;

	case '/':

		first_number /= second_number;

		return first_number;

		break;

	case 'c':

		cin >> first_number;

		return first_number;

		break;

	case 'C':

		cin >> first_number;

		return first_number;

		break;

	case 'с':

		cin >> first_number;

		return first_number;

		break;

	case 'С':

		cin >> first_number;

		return first_number;

		break;

	default:

		return first_number;

	}

}


int main() {

	setlocale(LC_ALL, "Rus");

	float first_number = 0, second_number; int numeric_symbol; char symbol; bool sequence = false;

		for (; !END; i++) {

			if (i == 0)

				cin >> first_number;

			cin >> symbol;

			numeric_symbol=translator(symbol);

			if ((numeric_symbol != 69) && (numeric_symbol != 101) && (numeric_symbol != 133) && (numeric_symbol != 165)) {

				if ((numeric_symbol != 67) && (numeric_symbol != 99) && (numeric_symbol != 145) && (numeric_symbol != 225)) {

					cin >> second_number;

				}

				else {

					first_number = 0;

					second_number = 0;

					sequence = true;

					cout << "Cleared" << endl;

				}

				first_number = algorithm(symbol, first_number, second_number);

				if(sequence == false)

					cout << "Ответ:" << first_number << endl << first_number;

				sequence = false;

			}

			else {

				END = true;
				
				cout << "Algorithm was ended"<<endl;

				break;

			}

		}

	return 0;

}