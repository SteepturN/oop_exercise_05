/*
Разработать шаблоны классов согласно варианту задания.  Параметром шаблона должен являться скалярный тип данных задающий тип данных для оси координат. Классы должны иметь публичные поля. Фигуры являются фигурами вращения (правильные многоугольники), т.е. равносторонними (кроме трапеции и прямоугольника). Для хранения координат фигур необходимо использовать шаблон  std::pair.
Например:
template <class T>
struct Square{
    using vertex_t = std::pair<T,T>;
    vertex_t a,b,c,d;
};

 Создать шаблон динамической коллекциu, согласно варианту задания:
1. Коллекция должна быть реализована с помощью умных указателей (std::shared_ptr, std::weak_ptr). Опционально использование std::unique_ptr;
2. В качестве параметра шаблона коллекция должна принимать тип данных - фигуры;
3. Реализовать forward_iterator по коллекции;
4. Коллекция должны возвращать итераторы begin() и  end();
5. Коллекция должна содержать метод вставки на позицию итератора insert(iterator);
6. Коллекция должна содержать метод удаления из позиции итератора erase(iterator);
7. При выполнении недопустимых операций (например выход за границы коллекции или удаление несуществующего элемента) необходимо генерировать исключения;
8. Итератор должен быть совместим со стандартными алгоритмами (например, std::count_if)
9.       Коллекция должна содержать метод доступа:
стек – pop, push, top;
очередь – pop, push, top;
список, Динамический массив – доступ к элементу по оператору [].

10.     Реализовать программу, которая:
позволяет вводить с клавиатуры фигуры (с типом int в качестве параметра шаблона фигуры) и добавлять в коллекцию;
позволяет удалять элемент из коллекции по номеру элемента;
выводит на экран введенные фигуры c помощью std::for_each;
выводит на экран количество объектов, у которых площадь меньше   заданной (с помощью  std::count_if).

variant: 3. Прямоугольник Стек
*/

#include <iostream>
#include "../Stack/List.h"
#include "../header/Triangle.h"
#include "../header/Read_input.hpp"
#include "../header/Iterator.h"
#include "../header/ListEl.h"
#include <cstdio>
#include <set>
#include <string>

int main(int argc, char *argv[]) {
    List list;
    for(auto a : list) {
        std::cout << a;
    }
    return 0;
}
