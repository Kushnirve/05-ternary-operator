#include <iostream>
using namespace std;

int main() {
	setlocale(0, "rus");

	//1.1
	int num1, num2;
	cout << "Является ли первое число кратным второму?\nВведите 2 числа -> " << endl;
	cin >> num1 >> num2;
	num1% num2 == 0 ? cout << "Да" : cout << "Нет";

	//1.2
	float A, B, C;
	string comment;
	cout << "Если числа упорядочены по возрастанию, удвоить их, иначе заменить значения на противоположные.\nВведите значения A B C -> " << endl;
	cin >> A >> B >> C;
	(A < B and B < C) ? (A *= 2, B *= 2, C *= 2, comment = "Числа упорядочены. Удваиваем. ") : (A = -A, B = -B, C = -C, comment = "Числа не упорядочены. Меняем знак.");
	cout << comment << endl << A << " " << B << " " << C;

	//1.3
	int A, B, C;
	cout << "Определить порядковый номер числа, отличного от остальных.\nВведите значения A B C -> " << endl;
	cin >> A >> B >> C;
	(A == B and A == C) ? (cout << "Все числа равны") : (A != B and A != C and B != C) ? (cout << "Все числа разные") : (A == B) ? (cout << "Число 3 отлично от двух других") : (A == C) ? (cout << "Число 2 отлично от двух других") : (cout << "Число 1 отлично от двух других");

	//1.4
	int dotA, dotB, dotC, rangeAB, rangeAC;
	cout << "Какая из точек B или C расположена ближе к A?\nВведите значения точек A B C -> " << endl;
	cin >> dotA >> dotB >> dotC;
	rangeAB = dotA - dotB;
	rangeAC = dotA - dotC;
	(rangeAB < 0) ? rangeAB = -rangeAB : rangeAB;
	(rangeAC < 0) ? rangeAC = -rangeAC : rangeAC;
	(rangeAB == rangeAC) ? (cout << "Точки B и C расположены на одном расстоянии от A: " << rangeAB) : (rangeAB < rangeAC) ? (cout << "Точка B ближе. Расстояние: " << rangeAB) : (cout << "Точка С ближе. Расстояние: " << rangeAC);
}