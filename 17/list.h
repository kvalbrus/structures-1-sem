#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef int Element;

struct list
{
    Element element;
    struct list * next;
};

typedef struct list List;

/**
 * Эта функция печатает все элементы списка
 * param [in] list - список элементов
 */
void list_print(List * list);

/**
 * Эта функция печатает все элементы списка в файл
 * param [in] list - список элементов
 * param [in] file - файл, в который нужно вывести элементы списка
 */
void list_printToFile(List * list, FILE * file);

/**
 * Эта функция добавляет в список элемент в начало списка
 * param [in] list - список элементов
 * param [in] elemetn - элемент, который нужно добавить в список
 * param [out] список с добавленным элементом в начало
 */
List * list_addElementToStart(List * list, Element element);

/**
 * Эта функция добавляет в конец списка элемент
 * param [in] list - список элементов
 * param [in] element - элемент, который нужно добавить в список
 * param [out] список с добавленным элементом в начало
 */
List * list_addElementToEnd(List * list, Element element);

List * list_addElementAfter(List * list, Element new, Element element);

List * list_addElementBefore(List * list, Element new, Element element);

/**
 * Эта функция удаляет элемент в начале списка
 * param [in] list - список элементов
 * param [out] список с удалённым элементом в начале
 */
List * list_deleteElementToStart(List * list);

/**
 * Эта функция удаляет элемент в конце списка
 * param [in] list - список элементов
 * param [out] список с удалённым элементом в конце
 */
List * list_deleteElementToEnd(List * list);

/**
 * Эта функция считает длину списка
 * param [in] list - список элементов
 * param [out] размер списка
 */
int list_length(List * list);

void list_delete(List * list);
