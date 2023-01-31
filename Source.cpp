#include<iostream>
#include "IElectronics.h"
#include "portable.h"
#include "household.h"
#include "beauty.h"


int main()
{
    setlocale(LC_ALL, "");
   
    IElectronics * unit[6];

    unit[0] = new portable("�������",50, 50);
    unit[1] = new portable("��������", 50, 10);
    unit[2] = new household("�������", 10, 10);
    unit[3] = new household("������", 10, 90);
    unit[4] = new beauty("���", 25, 30);
    unit[5] = new beauty("�������", 50,50);
    

    bool open = true;
    while (open)
    {
        cout << "�������� ������� : 1 - ������� , 2 - �������� , 3 - ������� , 4 - ������ , 5 - ��� , 6 - ������� , 0 - ����� �����" << endl;
        int choice;
        cin >> choice;
        switch (choice)
        {
        case 1:
            unit[0]->ShowSpec();
            break;

        case 2:
            unit[1]->ShowSpec();
            break;

        case 3:
            unit[2]->ShowSpec();
            break;

        case 4:
            unit[3]->ShowSpec();
            break;

        case 5:
            unit[4]->ShowSpec();
            break;
        case 6:
            unit[5]->ShowSpec();
            break;

        case 0:
            open = false;
            break;

        default:
            cout << "�������� ������� �� 1 �� 6 ��� 0, ����� �����" << endl;
            break;
        }
    }
    delete unit[0];
    delete unit[1];
    delete unit[2];
    delete unit[3];
    delete unit[4];
    delete unit[5];

    return 0;
}