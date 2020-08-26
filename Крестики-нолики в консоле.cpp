#include <iostream>
#include <time.h>

using namespace std;

bool IsWin(char arr[3][3])
{
    // равные строки
    for (int i = 0; i < 3; i++)
    {
        if  (arr[i][0] == arr[i][1] && arr[i][1] == arr[i][2] && arr[i][1] != NULL )
        {
            cout << "_____________________________________________" << endl;
            cout << "победил " << arr[i][1] << endl;
            return true;
        }

    }

    // равные столбики
    for (int i = 0; i < 3; i++)
    {
        if (arr[0][i] == arr[1][i] && arr[1][i] == arr[2][i] && arr[1][i]!= NULL)
        {
            cout << "_____________________________________________" << endl;
            cout << "победил " << arr[1][i] << endl;
            return true;
        }

    }

    // равные диагонали

    if ((arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2] && arr[1][1] != NULL))
    {
        cout << "_____________________________________________" << endl;
        cout << "победил " << arr[1][1] << endl;
        return true;
    }

    if ((arr[0][2] == arr[1][1] && arr[1][1] == arr[2][0]) && arr[1][1] != NULL)
    {
        cout << "_____________________________________________" << endl;
        cout << "победил " << arr[1][1] << endl;
        return true;
    }
    
    int scht = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3;j++)
        {
            if (arr[i][j] != NULL)
                scht++;
        }

    }

    if (scht == 9)
    {
        cout << "_____________________________________________" << endl;
        cout << "Ничья!";
        return true;
    }

    return false;

}



void gameplayMultiPlayer(char field[3][3],char x_symbal,char o_symbal)
{
    while (!IsWin(field))
    {
        int ChooseNum;
        cout << "крестик ходит" << endl;

        int num1 = 0;
        while (num1 == 0)
        {
            cin >> ChooseNum;
            cout << endl << endl << endl;

            switch (ChooseNum)
            {
            case 1:
                if (field[0][0] == NULL)
                {
                    num1++;
                    field[0][0] = x_symbal;
                }
                break;
            case 2:
                if (field[0][1] == NULL)
                {
                    num1++;
                    field[0][1] = x_symbal;
                }
                break;
            case 3:
                if (field[0][2] == NULL)
                {
                    num1++;
                    field[0][2] = x_symbal;

                }
                break;
            case 4:
                if (field[1][0] == NULL)
                {
                    num1++;
                    field[1][0] = x_symbal;
                }
                break;
            case 5:
                if (field[1][1] == NULL)
                {
                    num1++;
                    field[1][1] = x_symbal;
                }
                break;
            case 6:
                if (field[1][2] == NULL)
                {
                    num1++;
                    field[1][2] = x_symbal;
                }
                break;
            case 7:
                if (field[2][0] == NULL)
                {
                    num1++;
                    field[2][0] = x_symbal;
                }
                break;
            case 8:
                if (field[2][1] == NULL)
                {
                    num1++;
                    field[2][1] = x_symbal;
                }
                break;
            case 9:
                if (field[2][2] == NULL)
                {
                    num1++;
                    field[2][2] = x_symbal;
                }
                break;

            default:
                cout << "кривой ввод" << endl;

            }
        }

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3;j++)
            {
                if (j == 2)
                {

                    cout << "    " << field[i][j] << "    ";
                    continue;
                }

                cout << "    " << field[i][j] << "    " << "|";

            }
            if (i == 2)
                continue;
            cout << endl;
            cout << "---------------------------" << endl;

        }

        cout << endl << endl << endl;

        if (IsWin(field))
        {
            break;
        }


        cout << "нулик ходит" << endl;
        int num2 = 0;
        while (num2 == 0)
        {
            cin >> ChooseNum;
            cout << endl << endl << endl;

            switch (ChooseNum)
            {
            case 1:
                if (field[0][0] == NULL)
                {
                    num2++;
                    field[0][0] = o_symbal;
                }
                break;
            case 2:
                if (field[0][1] == NULL)
                {
                    num2++;
                    field[0][1] = o_symbal;
                }
                break;
            case 3:
                if (field[0][2] == NULL)
                {
                    num2++;
                    field[0][2] = o_symbal;
                }
                break;
            case 4:
                if (field[1][0] == NULL)
                {
                    num2++;
                    field[1][0] = o_symbal;
                }
                break;
            case 5:
                if (field[1][1] == NULL)
                {
                    num2++;
                    field[1][1] = o_symbal;
                }
                break;
            case 6:
                if (field[1][2] == NULL)
                {
                    num2++;
                    field[1][2] = o_symbal;
                }
                break;
            case 7:
                if (field[2][0] == NULL)
                {
                    num2++;
                    field[2][0] = o_symbal;
                }
                break;
            case 8:
                if (field[2][1] == NULL)
                {
                    num2++;
                    field[2][1] = o_symbal;
                }
                break;
            case 9:
                if (field[2][2] == NULL)
                {
                    num2++;
                    field[2][2] = o_symbal;
                }
                break;
            default:
                cout << "кривой ввод" << endl;

            }
        }

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3;j++)
            {
                if (j == 2)
                {

                    cout << "    " << field[i][j] << "    ";
                    continue;
                }

                cout << "    " << field[i][j] << "    " << "|";

            }
            if (i == 2)
                continue;
            cout << endl;
            cout << "---------------------------" << endl;

        }

        cout << endl << endl << endl;



    }

}






void gameplaySinglePlayer(char field[3][3], char x_symbal, char o_symbal)
{
    cout << "Выберите за кого играть" << endl << endl;
    cout << "1 \t крестик" << endl;
    cout << "2 \t нолик" << endl;

    int ChooseSide = 0;

    while (ChooseSide != 1 && ChooseSide != 2)
    {
        cin >> ChooseSide;
    }


    while (!IsWin(field))
    {
        int ChooseNum;
        
        cout << "крестик ходит" << endl;

        int num1 = 0;
        while (num1 == 0)
        {
            if (ChooseSide == 1)
            {
                cin >> ChooseNum;
            }
            if (ChooseSide == 2)
            {
                ChooseNum = rand() % 10;
            }
            cout << endl << endl << endl;

            switch (ChooseNum)
            {
            case 1:
                if (field[0][0] == NULL)
                {
                    num1++;
                    field[0][0] = x_symbal;
                }
                break;
            case 2:
                if (field[0][1] == NULL)
                {
                    num1++;
                    field[0][1] = x_symbal;
                }
                break;
            case 3:
                if (field[0][2] == NULL)
                {
                    num1++;
                    field[0][2] = x_symbal;

                }
                break;
            case 4:
                if (field[1][0] == NULL)
                {
                    num1++;
                    field[1][0] = x_symbal;
                }
                break;
            case 5:
                if (field[1][1] == NULL)
                {
                    num1++;
                    field[1][1] = x_symbal;
                }
                break;
            case 6:
                if (field[1][2] == NULL)
                {
                    num1++;
                    field[1][2] = x_symbal;
                }
                break;
            case 7:
                if (field[2][0] == NULL)
                {
                    num1++;
                    field[2][0] = x_symbal;
                }
                break;
            case 8:
                if (field[2][1] == NULL)
                {
                    num1++;
                    field[2][1] = x_symbal;
                }
                break;
            case 9:
                if (field[2][2] == NULL)
                {
                    num1++;
                    field[2][2] = x_symbal;
                }
                break;

            default:
                cout << "кривой ввод" << endl;

            }
        }

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3;j++)
            {
                if (j == 2)
                {

                    cout << "    " << field[i][j] << "    ";
                    continue;
                }

                cout << "    " << field[i][j] << "    " << "|";

            }
            if (i == 2)
                continue;
            cout << endl;
            cout << "---------------------------" << endl;

        }

        cout << endl << endl << endl;

        if (IsWin(field))
        {
            break;
        }


        cout << "нулик ходит" << endl;
        int num2 = 0;
        while (num2 == 0)
        {
            if (ChooseSide == 2)
            {
                cin >> ChooseNum;
            }
            if (ChooseSide == 1)
            {
                ChooseNum = rand() % 10;
            }
            cout << endl << endl << endl;

            switch (ChooseNum)
            {
            case 1:
                if (field[0][0] == NULL)
                {
                    num2++;
                    field[0][0] = o_symbal;
                }
                break;
            case 2:
                if (field[0][1] == NULL)
                {
                    num2++;
                    field[0][1] = o_symbal;
                }
                break;
            case 3:
                if (field[0][2] == NULL)
                {
                    num2++;
                    field[0][2] = o_symbal;
                }
                break;
            case 4:
                if (field[1][0] == NULL)
                {
                    num2++;
                    field[1][0] = o_symbal;
                }
                break;
            case 5:
                if (field[1][1] == NULL)
                {
                    num2++;
                    field[1][1] = o_symbal;
                }
                break;
            case 6:
                if (field[1][2] == NULL)
                {
                    num2++;
                    field[1][2] = o_symbal;
                }
                break;
            case 7:
                if (field[2][0] == NULL)
                {
                    num2++;
                    field[2][0] = o_symbal;
                }
                break;
            case 8:
                if (field[2][1] == NULL)
                {
                    num2++;
                    field[2][1] = o_symbal;
                }
                break;
            case 9:
                if (field[2][2] == NULL)
                {
                    num2++;
                    field[2][2] = o_symbal;
                }
                break;
            default:
                cout << "кривой ввод" << endl;

            }
        }

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3;j++)
            {
                if (j == 2)
                {

                    cout << "    " << field[i][j] << "    ";
                    continue;
                }

                cout << "    " << field[i][j] << "    " << "|";

            }
            if (i == 2)
                continue;
            cout << endl;
            cout << "---------------------------" << endl;

        }

        cout << endl << endl << endl;



    }

}






int main()
{

    setlocale(LC_ALL, "RUS");
    srand(time(NULL));
    // creating field (матрица)
    char field[3][3];

    //creating symbals
    
    char x_symbal = 'x';
    char o_symbal = 'o';


    // filling field by NULLS
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            field[i][j] = NULL;
        }

    }

    //tutuorial
    int num = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3;j++)
        {
            if (j == 2)
            {
                num++;
                cout << "    " << num << "    ";
                continue;
            }
            num++;
            cout << "    " << num << "    " << "|";

        }
        if (i == 2)
            continue;
        cout << endl;
        cout << "---------------------------" << endl;;
    } 

    cout << endl << endl << endl;

    cout << "Это поле, первые ходят крестики, чтобы указать куда ставить, надо написать цифру из поля" << endl << endl << endl;


    //gameplay
    cout << "Введите выбор режима" << endl << "1 \t мультиплеер" << endl;
    cout << "2 \t игра с ботом" << endl << endl << endl;;
    int ChooseMod;
    
    

    cin >> ChooseMod;

    
    if (ChooseMod == 1)
    {
        gameplayMultiPlayer(field, x_symbal, o_symbal);
    }

    else 
    {
        gameplaySinglePlayer(field, x_symbal, o_symbal);
    
    }


  
    int en;
    cin >> en;

    





}

