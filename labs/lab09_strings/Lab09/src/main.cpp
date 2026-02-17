#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Lab 09



int lengcharr(char charArray[]) {

    int length = 0;
    char *ptr = charArray;
    for (; *ptr != '\0'; ptr++) {

        length++;
    }
    return length;
}

int main() {
    // Упражнения 1–3: демонстрация/анализ строковых функций (без ввода).
    // Использование 3х функций C++ для string/char
    string s = "Testing";
    char str[] = "Testing";
    cout << "Длина строки: " << s.length() << endl;
    cout << "Проверка пустая ли строка или нет: " << s.empty() << endl;
    cout << "Последний символ строки: " << s.back() << endl;
    cout << "Длина массива char: " << lengcharr(str) << endl;

   
    // (2)Объяснение использование типов, переменных и констант, а также, что будет напечатано в итоге
    
    // Char *str_s = “There is an example of a string constant”, *str_d, *pd;  - Создаём три поинтера, к первому присваиваем строковую константу

    // str_d = new char [strlen(str_s)+1]; - Выделяем 42 ячейки (длину *str_s + 1) под символы для str_d.

    // Pd = str_d; - присваиваем адрес str_d к pd

    // While (*str_d++ = *str_s++); - Мы сначала получаем адрес очередного символа, затем копируем его в str_s и смещаем каждый из поинтеров на 1 символ вперёд, когда это достигает 0, тогда While(0) - становится false и цикл останавливается.
	//     cout << pd << end; - выводим pd

    // Pd: 42,41,40,39..1


    // (3)Объяснение использование типов, переменных и констант, а также, что будет напечатано в итоге
    
    // Char *str = “     The first line of the paragraph”, *s; - Создаём 2 поинтера, поинтеру *str придаём адрес строковой константы.

    // S = str; - присваиваем адрес поинтера str к s.

    // Cout << s << endl; - Выводим адрес поинтера S (Это будет адрес поинтера str)

    // For (; *str == ‘ ‘; str++) - пока у нас в начале строковой константы идут пробелы, цикл for будет выполняться. (Поинтер сдвигается на 1 символ каждый проход). Под конец в *ptr будет храниться строковая константа начинающаяся с T….

    // While (*str) cout << *str++; - Пока цикл не дойдёт до последнего символа (\0) он будет выполняться, выводя следующий символ каждый раз. На последней итерации будет выведено ничего(но вывод всё равно произойдет в консоль).
    // Cout << endl; - Следующая строка.

    // Сначала будет напечатан адрес s, затем посимвольно строковая константа в *ptr
    

    // Упражнение 4: ввод количества слов и самих слов.
    
    int maxLength = 10;
    int maxWords = 20;
    int wordsCountedd = 0;
    int pos = 0;
    string initArr[20];
    string word;

    for(;wordsCountedd < maxWords;) {
        cout << "Type a word, or type /end to stop forming an array: " << endl;
        cin >> word;
        if (word == "/end") break;

        if (word.length() <= maxLength) {

            initArr[pos] = word;
            pos++;
            wordsCountedd++;

        } else {
            exit(1);
         }
     }

    pos = 0;
    string wordsArr[wordsCountedd];
    for (int i = 0;;pos++, i++) {
        wordsArr[pos] = initArr[i];

        if (pos == wordsCountedd) break;
    }
    cout << "Finished forming an array" << endl;
    cout <<  "Array: ";
    
    for (pos = 0;pos <= wordsCountedd; pos++) {

        cout << wordsArr[pos] << " ";
    }
    cout << endl;

    char cArray[20][10];
    int wordsCounted = 0;
    int cPos = 0;
    int currWordSize = 0;
    int currWordSize2 = 0;
    int flag = 0;

    char cWord[] = "";
     for(;wordsCounted < maxWords;) {
        cout << "Type a word, or type - to stop forming an array: " << endl;
        cin >> cWord;
        
        for (int i = 0; i < sizeof(cWord); i++) {

            if (cWord[i] == '-') flag = 1;
        }

        if (flag == 1) break;
        if (sizeof(cWord) <= maxLength) {

            for (int i = 0;i <= sizeof(cWord);) {
                
                cArray[cPos][i] = cWord[i];
                wordsCounted++;
            }
            currWordSize = sizeof(cWord);
            int i = currWordSize;
            memset(cWord, 0, sizeof(cWord));

        } else {
            exit(1);
         }

        cPos++;
     }

     cout << "printing array: ";

     cPos = 0;
     int i = 0;
     char *ptr;
     for (;cPos <= wordsCounted;) {
        ptr = cArray[cPos];
        while(*ptr != '\0') {

            cout << cArray[cPos][i];
            i++;
        }
        cout << " ";
        ptr++;
     }

}
