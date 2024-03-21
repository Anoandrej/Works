// STL Task 6

#include <iostream>
#include <queue>

using namespace std;

int main()
{
    std::queue<int>orderQueue;
    orderQueue.push(101);
    orderQueue.push(102);
    orderQueue.push(103);

    while (!orderQueue.empty())
    {
        int val = orderQueue.front();
        orderQueue.pop();
        cout << "Processing order #" << val << endl;
    }
    return 0;
}

// Создайте очередь для хранения номеров заказов.Реализуйте обработку заказов : извлечение заказа из очереди и печать его номера.
//
// Пример работы программы :
// Входные данные :
// orderQueue.push(101);
// orderQueue.push(102);
// orderQueue.push(103);
//
// Выходные данные :
// Processing order #101
// Processing order #102
// Processing order #103