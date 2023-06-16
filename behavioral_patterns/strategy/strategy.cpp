#include <iostream>

// Strategy interface
class Strategy 
{
public:
    virtual int execute(int a, int b) = 0;
};

// Concrete strategy classes
class ConcreteStrategyAdd : public Strategy 
{
public:
    int execute(int a, int b) override 
    {
        return a + b;
    }
};

class ConcreteStrategySubtract : public Strategy 
{
public:
    int execute(int a, int b) override 
    {
        return a - b;
    }
};

class ConcreteStrategyMultiply : public Strategy 
{
public:
    int execute(int a, int b) override 
    {
        return a * b;
    }
};

// Context class
class Context 
{
public:
    Context() 
        : strategy(nullptr) 
    {
    }

    void set_strategy(Strategy* strategy) 
    {
        this->strategy = strategy;
    }

    int execute_strategy(int a, int b) 
    {
        if (strategy) {
            return strategy->execute(a, b);
        } else {
            throw std::runtime_error("No strategy set");
        }
    }

private:
    Strategy* strategy;
};

int main() 
{
    Context context;

    int a, b;
    std::cout << "Enter the first number: ";
    std::cin >> a;
    std::cout << "Enter the second number: ";
    std::cin >> b;

    std::cout << "Enter the desired action (addition, subtraction, multiplication): ";
    std::string action;
    std::cin >> action;

    if (action == "addition") {
        context.set_strategy(new ConcreteStrategyAdd());
    } else if (action == "subtraction") {
        context.set_strategy(new ConcreteStrategySubtract());
    } else if (action == "multiplication") {
        context.set_strategy(new ConcreteStrategyMultiply());
    } else {
        std::cout << "Invalid action\n";
        return 0;
    }

    int result = context.execute_strategy(a, b);

    std::cout << "Result: " << result << std::endl;

    return 0;
}