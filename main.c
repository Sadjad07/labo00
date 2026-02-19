
//Данный код должен считать количество уникальных элементовв массиве целых чисел.
//Программа использует два счетчика (два индекса).
//Первый счетчик указывает на текущий элемент массива.
//Второй счетчик проходит по остальной части массиваи сравнивает элементы с текущим.
//Если находится одинаковый элемент, ему присваиваетсяспециальное значение (константа), которое означает,
//что этот элемент больше не учитывается.
//В конце программа определяет количество уникальных элементов.

#include <stdio.h>
#define szz 10

int main()
{
    int array[szz] = {5,5,7,3,3,2,2,1,1,10};
    int max = array[0];
    for(int i=1;i < szz;i++)
        if(array[i] > max) max = array[i];

    int notExist = max+1;
    int countEl = 0;

    for(int i=0;i < szz;i++)
    {
        if(array[i] != notExist)
        {
            int unique = 1;
            int jx = i+1;
            while(jx < szz)
            {
                if(array[jx] != notExist)
                {
                    if(array[i] == array[jx])
                    {
                        unique = 0;
                        array[jx] = notExist;
                    }
                }
                jx++;
            }
            if(unique)
                countEl++;
        }
    }

    printf("countEl = %d\n", countEl);
    return 0;
}
