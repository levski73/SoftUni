#include <iostream>
#include<vector>
using namespace std;
const int arrLength = 10;

int main()
{
    int arr[arrLength][2]; /* ��������� �� ������� �������� �����.
                           �� ������ � � ��������� �� �� � �� ���������
                           �� ��� ������ /�������-����/ ����������.
                           ��������� �� ����� �� 0 �� 9 �� �������� ����� ����
                           ��������� �� ���������� ���� ����� ���� ������� ��
                           ���������� �� ������*/

    for (int i = 0; i < arrLength; i++)
    {
        arr[i][0] = i;
        arr[i][1] = 0;
    }

    int N, maxValue = 0;
    cin >> N;  //������� ���� �����

    for (int i = 0; i < N; i++)
    {
        int j;
        cin >> j;    //������� ����� ����� � ��������� ���� ��� ������ ������� �� ������
        arr[j][1] += 1;
    }

    for (auto row : arr)
        if (row[1] > maxValue) maxValue = row[1]; // ������ ���� ���� ����������

    for (auto row : arr)
        if (row[1] == maxValue)  /* �������� �� ���� ���������� �� ����� �������
                                 � ��� � ����� �� ����������� �� ���������*/
            cout << row[0] << " ";

    cout << endl;

    return 0;
}