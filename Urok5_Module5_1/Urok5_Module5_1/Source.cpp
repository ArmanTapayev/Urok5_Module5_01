#include<stdio.h>
#include<iostream>
#include<time.h>
#include<math.h>
#include<iomanip>

using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));
	system("color 1A");

	int i, j, n;

	do
	{
		cout << "\nВ работе содержится 5 заданий." << endl;
		cout << "\nДля выхода наберите 0." << endl;
		cout << endl;
		cout << "\nВведите номер задания: ";
		cin >> n;

		switch (n)
		{

			case 1:
			{
				cout << "\nЗадание №1" << endl;

				/*1. Дан целочисленный квадратный массив 10×10. Найти сумму элементов  каждой строки. */

				int A[10][10], C[10] = { 0 };
				const int w = 4;

				cout << "\nИсходный массив:\n" << endl;

					for (i = 0; i < 10; i++)
					{
							for (j = 0; j < 10; j++)
							{
								A[i][j] = 10 + rand() % 30;
								cout << setw(w) << A[i][j];

									C[i] += A[i][j];
							}

						cout << endl;

					}

				cout << endl;

				cout << "\nСуммы элементов каждой строки." << endl;

				cout << endl;

					for (i = 0; i < 10; i++)
					{
						cout << "sum[" << i << "]=" << C[i] << "  ";
					}

				cout << endl;

				system("pause");
				system("cls");

			}
			break;

			case 2:
			{
				cout << "\nЗадание №2" << endl;

				/*2. Дан целочисленный квадратный массив 4×4. Найти строку с наименьшей суммой элементов */

				int A[4][4], C[4] = { 0 };
				const int w = 4;

				cout << "\nИсходный массив:\n" << endl;

					for (i = 0; i < 4; i++)
					{
						for (j = 0; j < 4; j++)
						{
							A[i][j] = 10 + rand() % 30;
							cout << setw(w) << A[i][j];

								C[i] += A[i][j];
						}

						cout << endl;

					}

					cout << endl;

					cout << "\nСуммы элементов каждой строки." << endl;

					cout << endl;

					int min = 1000000, mini;

						for (i = 0; i < 4; i++)
						{
							cout << "sum[" << i << "]=" << C[i] << "  ";

								if (C[i] < min)
								{
									min = C[i];
									mini = i;
								}
						}

				cout << endl;

				cout << "Строка с наименьшей суммой элементов: sum[" << mini <<"] = "<< C[mini] << endl;
			
				cout << endl;

				system("pause");
				system("cls");
			}
			break;

			case 3:
			{
				cout << "\nЗадание №3" << endl;

				/*3. Дана целочисленная матрица 6×8. Найти произведение положительных элементов первого столбца.*/

				int A[8][6], mult=1;
				const int w = 4;

				cout << "\nИсходный массив:\n" << endl;

					for (i = 0; i < 8; i++)
					{
							for (j = 0; j < 6; j++)
							{
									A[i][j] = -10 + rand() % 20;
									cout << setw(w) << A[i][j] << "  ";

											if ((j==0) && (A[i][0] > 0))
											{
												mult *= A[i][j];
											}
							}

						cout << endl;

					}

				cout << endl;
				cout << "Произведение положительных элементов первого столбца: " << mult << endl;
				cout << endl;

				system("pause");
				system("cls");

			}
			break;

			case 4:
			{
				cout << "\nЗадание №4" << endl;

				/*4. Составить программу, которая заполняет квадратную матрицу порядка n
				натуральными числами 1, 2, 3, .. ., n2, записывая их в нее "по спирали" 
				по часовой стрелке.*/

				int A[5][5] = { 0 }, n = 5, i = 0, j = 0, c = 0, k = 1;
				const int w = 3;

					do
					{
						while ((k <= 25) && (j < 5 - c)) //вправо
						{
							A[i][j] = k;
							j++;
							k++;
						}

						i++;  j--;

							while ((k <= 25) && (i < 5 - c)) // вниз
							{
								A[i][j] = k;
								i++;
								k++;
							}

							j--;  i--;

								while ((k <= 25) && (j >= 0 + c)) //влево
								{
									A[i][j] = k;
									j--;
									k++;
								}

								c++;  j++;  i--;

									while ((k <= 25) && (i >= 0 + c)) //вверх
									{
										A[i][j] = k;
										i--;
										k++;
									}

									j++;  i++;

					} while (k <= 25);

					cout << "\nЗаполненный массив:\n" << endl;

						for (i = 0; i < 5; i++)
						{
								for (j = 0; j < 5; j++)
								{
									cout << setw(w) << A[i][j] << "  ";
								}

							cout << endl;

						}

				cout << endl;

				system("pause");
				system("cls");

			}
			break;

			case 5:
			{
				cout << "\nЗадание №5" << endl;

				/*5. Дан двухмерный целочисленный массив A(M,N).
				Составить одномерный массив B из номеров строк этого массива*/

				int A[6][8], B[6] = { 0 };
				const int w = 4;

					cout << "\nИсходный массив:\n" << endl;

					for (i = 0; i < 6; i++)
					{
							for (j = 0; j < 8; j++)
							{
								A[i][j] = -3 + rand() % 6;
								cout << setw(w) << A[i][j] << "  ";
							}

						B[i] = i + 1;
						cout << endl;

					}

					cout << endl;

						for (i = 0; i < 6; i++)
						{
							cout << "B[" << i << "]=" << B[i] << "  ";
						}

					cout << endl;
				system("pause");
				system("cls");

			}
			break;

		}

	} while (n != 0);

	cout << endl;
	cout << "Спасибо!" << endl;
	cout << endl;

	system("pause");
}