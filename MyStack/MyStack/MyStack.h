#ifndef STACK_H
#define STACK_H

#include <iostream> // Для обработки ошибок

namespace MyContainers {

    class Stack {
    private:
        char* arr;       // Указатель на динамический массив (только для char)
        int capacity; // Максимальная вместимость стека
        int top;      // Индекс вершины стека (-1 для пустого стека)

    public:
        // Конструкторы
        Stack(int capacity = 10);

        // Деструктор
        ~Stack();

        // Операторы
        Stack& operator=(const Stack& other);

        // Методы
        bool isEmpty() const;
        bool isFull() const;
        void push(char element);  // Теперь принимает только char
        char pop();        // Теперь возвращает char
        char peek() const; // Теперь возвращает char
        int getSize() const;

    private:
        void resize();
    };

} // namespace MyContainers

#endif
