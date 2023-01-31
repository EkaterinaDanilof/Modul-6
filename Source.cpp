#include<iostream>
#include "IElectronics.h"
#include "portable.h"
#include "household.h"
#include "beauty.h"


int main()
{
    setlocale(LC_ALL, "");
   
    IElectronics * unit[6];

    unit[0] = new portable("Колонка",50, 50);
    unit[1] = new portable("Диктофон", 50, 10);
    unit[2] = new household("Блендер", 10, 10);
    unit[3] = new household("Миксер", 10, 90);
    unit[4] = new beauty("Фен", 25, 30);
    unit[5] = new beauty("Массажёр", 50,50);
    

    bool open = true;
    while (open)
    {
        cout << "Выберите продукт : 1 - Колонка , 2 - Диктофон , 3 - Блендер , 4 - Миксер , 5 - Фен , 6 - Массажёр , 0 - чтобы выйти" << endl;
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
            cout << "Выберите продукт от 1 до 6 или 0, чтобы выйти" << endl;
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