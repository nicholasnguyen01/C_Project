#include <array>
#include <iostream>
#include <vector>

void array_experiment()
{
    std::array<double, 5> numbers{1, 2, 3, 4, 5};
    std::cout << numbers[0] << '\n';
    numbers[0] = 2.5;
    std::cout << numbers[0] << '\n';
}

void vector_experiment()
{
    std::vector<int> numbers{0, 1};
    numbers.push_back(-123);
    for (const auto & number: numbers)
    {
        std::cout << number << '\n';
    }
}

void vector_insert()
{
    std::vector<int> numbers{0, 1};
    numbers.insert(numbers.begin(), -123);
    for(const auto & number: numbers)
    {
        std::cout << number << '\n';
    }
}

void vector_insert2()
{
    std::vector<int> numbers{0, 1};
    auto iterator = numbers.begin();
    numbers.insert(++iterator, -123);
    for(const auto & number: numbers)
    {
        std::cout << number << '\n';
    }
}

int main()
{
    array_experiment();
    vector_experiment();
    vector_insert();
    vector_insert2();
}