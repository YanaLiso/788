#include <iostream>
using namespace std;
int main() {


	/*//For1.Даны целые числа K и N(N > 0).Вывести N раз число K.*/


	/*int N, K;
	cout << "N:";
	cin >> N;
	cout << "K:";
	cin >> K;
	for (int i = 0; i < N; i = i + 1) {
		cout << K << endl;
	}*/


	/*For2.Даны два целых числа A и B(A < B).Вывести в порядке возрастания все
	целые числа, расположенные между A и B(включая сами числа A и B), а
	также количество N этих чисел.*/


	///*int A, B;
	//int n = 0;
	//cout << "A: ";
	//cin >> A;
	//cout << "B: ";
	//cin >> B;
	//for (int i = A; i <= B; i = i + 1) {
	//	cout << i << " ";
	//	n++;
	//}
	//	cout << "kol = " << n << endl;
	//}*/


	/*For3.Даны два целых числа A и B(A < B).Вывести в порядке убывания все
	целые числа, расположенные между A и B(не включая числа A и B), а
	также количество N этих чисел.*/


	//int A, B;
	//int n = 0;
	//cout << "A: ";
	//cin >> A;
	//cout << "B: ";
	//in >> B;
	//for (int i = B - 1; i > A; i = i - 1) {
	//	cout << i << " ";
	//	n++;
	//}
	//cout << "kol = " << n << endl;



	/*For4.Дано вещественное число — цена 1 кг конфет.Вывести стоимость 1,
	2, . . ., 10 кг конфет.*/


	//double price;
	//cout << "input price: ";
	//cin >> price;
	//for (int weight = 1; weight <= 10; weight++) {
	//	cout << weight << " kg costs " << weight * price << " $" << endl;
	//}*/


	/*//For5◦.Дано вещественное число — цена 1 кг конфет.Вывести стоимость 0.1,
	//0.2, . . ., 1 кг конфет.*/


	/*double price;
	//cout << "input price";
	//cin >> price;
	//for (double weight = 0.1; weight <= 1; weight = weight + 0.1) {
	//	cout << weight << " kg costs " << weight * price << " $ " << endl;
	//}*/


	/*//For6.Дано вещественное число — цена 1 кг конфет.Вывести стоимость 1.2,
	//1.4, . . ., 2 кг конфет.*/


	/*double price;
	cout << "input price";
	cin >> price;
	for (double weight = 1.2; weight <= 2; weight = weight + 0.2) {
		cout << weight << " kg costs " << weight * price << " $ " << endl;
	}*/


	/*//For7.Даны два целых числа A и B(A < B).Найти сумму всех целых чисел
	//от A до B включительно.*/


	/*int A, B;
	int sum = 0;
	cout << "A: ";
	cin >> A;
	cout << "B: ";
	cin >> B;
	for (int i = A; i <= B; i = i + 1) {
		sum = sum + i;
		}
		cout << "kol = " << sum << endl;
	}*/


	/*For8.Даны два целых числа A и B(A < B).Найти произведение всех целых
	чисел от A до B включительно.*//*int A, B;
int pros = 1;
cout << "A: ";
cin >> A;
cout << "B: ";
cin >> B;
for (int i = A; i <= B; i = i + 1) {
	pros = pros * i;}cout << "kol = " << pros << endl;*/


/*For9. Даны два целых числа A и B (A < B). Найти сумму квадратов всех целых
чисел от A до B включительно.*/


/*int A, B;
int sum = 0;
cout << "A: ";
cin >> A;
cout << "B: ";
cin >> B;
for (int i = A; i <= B; i = i + 1) {
	sum = sum + (i * i);
}
cout << "kol = " << sum << endl;*/


/*For10.Дано целое число N(> 0).Найти сумму
1 + 1 / 2 + 1 / 3 + . . . + 1 / N
(вещественное число).*/


int n;
double s = 0;
for (int i = 1; i <= n; i = i + 1) {
	s += 1.0 / i;
      }
cout << "sum = " << s << endl;
  

    


