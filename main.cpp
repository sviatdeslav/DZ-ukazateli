#include <iostream>

using namespace std;

//Вариант 4(18)

/*#1. Объявить указатели на две переменные указанного типа.
Используя указатели произвести операции сложения и вычитания над переменными.
Вывести адреса указателей. Тип char*/
void start(char* &r){
    r=new char[2];
}

void fill(char *r){
    cin>>r[0]>>r[1];
}

void slozh(char *r){
    cout<<(char)(r[0]+r[1])<<endl;
}

void vich(char *r){
    cout<<(char)(r[0]-r[1])<<endl;
}

void finish(char *r){
    cout<<&r[0]<<" "<<&r[1];
    delete[] r;
}

int main(){
    char *r=nullptr;
    start(r);
    fill(r);
    slozh(r);
    vich(r);
    finish(r);
    return 0;
}

/*#2. Написать функцию для обмена значений переменных, указанных выше. Передача по указателю.
Выполнить программу по шагам и выписать в тетрадь адреса указателей и величины переменных.*/
void start(char* &r){
    r=new char[2];
}

void fill(char *r){
    cin>>r[0]>>r[1];
}

void obmen(char *r){
    char t=r[0];
    r[0]=r[1];
    r[1]=t;
}

void finish(char *r){
    cout<<r[0]<<" "<<r[1];
    delete[] r;
}

int main(){
    char *r=nullptr;
    start(r);
    fill(r);
    obmen(r);
    finish(r);
    return 0;
}

/*#3. Объявить динамический массив. Размер массива задаёт пользователь.
Заполнить массив случайными числами. Вывести на экран адреса и значения элементов массива.*/
int main(){
    srand(0);
    int dlina;
    char *r=nullptr;
    cin>>dlina;
    r=new char[dlina];
    for (int c=0;c<dlina;c++){
        r[c]=rand()%51;
        cout<<c<<" Value(char): "<<r[c]<<" Address: "<<int(&r[c])<<endl;
    }
    return 0;
}

/*#4. Объявить сущность и описать её свойства. Объявить динамический массив сущностей.
Реализовать функцию, которая изменяет значения элемента (структура) массива.
Заполнить атрибуты числовыми и текстовыми значениями (диапазон значений определить самостоятельно).
*/

