#include <iostream>
#include <ctime>
#include <string>

using namespace std;

//Вариант 4(18)

/*#1. Объявить указатели на две переменные указанного типа.
Используя указатели произвести операции сложения и вычитания над переменными.
Вывести адреса указателей. Тип char*/
void start(char* &r){//выделение памяти
    r=new char[2];
}

void fill(char *r){//заполнение переменных
    cin>>r[0]>>r[1];
}

void slozh(char *r){//вывод результата сложения
    cout<<(char)(r[0]+r[1])<<endl;
}

void vich(char *r){//вывод результата вычитания
    cout<<(char)(r[0]-r[1])<<endl;
}

void finish(char *r){//вывод адресов указателей ит очистка памяти
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
void start(char* &r){//выделение памяти
    r=new char[2];
}

void fill(char *r){//заполнение переменных
    cin>>r[0]>>r[1];
}

void obmen(char *r){//обмен значений переменных
    char t=r[0];
    r[0]=r[1];
    r[1]=t;
}

void finish(char *r){//вывод результата и очистка памяти 
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
    srand(time(0));
    int dlina;//длина динамического массива
    char *r=nullptr;
    cin>>dlina;
    r=new char[dlina];//выделение памяти
    for (int c=0;c<dlina;c++){
        r[c]=rand()%9999;
        cout<<c<<" Value(char): "<<r[c]<<" Address: "<<int(&r[c])<<endl;
    }
    delete [] r;//очистка памяти
    return 0;
}

/*#4(d). Объявить сущность(фрукт) и описать её свойства. Объявить динамический массив сущностей(фруктов).
Реализовать функцию, которая изменяет значения элемента (структура) массива.
Заполнить атрибуты числовыми и текстовыми значениями (диапазон значений определить самостоятельно).*/
struct Fruit{
    string view;//вид
    string color;//цвет
    int length;//длина
    int height;//высота
    int width;//ширина
    int weight;//вес
    string taste;//вкус
};

string nview(int d){//выбирает вид фрукта
    switch(d){
    case 0:
     return "apple";//яблоко
     break;
    case 1:
     return "orange";//апельсин
     break;
    case 2:
     return "banana";//banana
     break;
    case 3:
     return "peach";//персик
     break;
    case 4:
     return "pear";//груша
     break;
    }
}

string ncolor(int d){
    switch(d){
    case 0:
     return "red";//красный
     break;
    case 1:
     return "blue";//голубой(голубые фрукты..:)
     break;
    case 2:
     return "yellow";//жёлтый
     break;
    case 3:
     return "green";//зелёный
     break;
    case 4:
     return "orange";//оранжевый
     break;
    case 5:
     return "purple";//фиолетовый(фрукт:)
     break;
    }
}

string ntaste(int d){//выбирает вид фрукта
    switch(d){
    case 0:
     return "sweet";//сладкий
     break;
    case 1:
     return "bitter";//горький
     break;
    case 2:
     return "sour";//кислый
     break;
    }
}

int main(){
    srand(time(0));
    int S;
    Fruit *fr=nullptr;
    cout<<"Count of fruits: ";//Кол-во фруктов
    cin>>S;
    fr=new Fruit[S];//выделение памяти
    for (int c=0;c<S;c++){
        fr[c].height=rand()%101;//высота
        fr[c].length=rand()%101;//длина
        fr[c].width=rand()%101;//ширина
        fr[c].weight=rand()%101;//вес
        fr[c].view=nview(rand()%5);//вид фрукта
        fr[c].color=ncolor(rand()%6);//цвет фрукта
        fr[c].taste=ntaste(rand()%3);//вкус фрукта
        cout<<"Fruit "<<c+1
            <<"\t View "<<fr[c].view
            <<","<<"\t Height: "<<fr[c].height
            <<"\t cm, Length: "<<fr[c].length
            <<"\t cm, Width: "<<fr[c].width
            <<"\t cm, Weight: "<<fr[c].weight
            <<"\t kg, Color: "<<fr[c].color
            <<"\t Taste: "<<fr[c].taste<<endl;
    }
    delete [] fr;//очистка памяти
    return 0;
}
