#include <iostream>

class Chair
{
public:
    virtual void sit() const = 0;
};

class ModernChair : public Chair
{
public:
    void sit() const override 
    {
        std::cout << "Modern Chair" << std::endl;
    }
};

class VictorianChair : public Chair 
{
public:
    void sit() const override 
    {
        std::cout << "Victorian chair" << std::endl;
    }
};

class ArtDecoChair : public Chair 
{
public:
    void sit() const override 
    {
        std::cout << "Art Deco chair" << std::endl;
    }
};

class Sofa 
{
public:
    virtual void lie_down() const = 0;
};


class ModernSofa : public Sofa 
{
public:
    void lie_down() const override 
    {
        std::cout << "Modern sofa." << std::endl;
    }
};

class VictorianSofa : public Sofa 
{
public:
    void lie_down() const override 
    {
        std::cout << "Victorian Sofa" << std::endl;
    }
};

class ArtDecoSofa : public Sofa 
{
public:
    void lie_down() const override 
    {
        std::cout << "Art Deco Sofa" << std::endl;
    }
};

class CoffeeTable 
{
public:
    virtual void drink_coffee() const = 0;
};

class ModernCoffeeTable : public CoffeeTable 
{
public:
    void drink_coffee() const override 
    {
        std::cout << "Modern coffee table." << std::endl;
    }
};

class VictorianCoffeeTable : public CoffeeTable 
{
public:
    void drink_coffee() const override 
    {
        std::cout << "Victorian coffee table." << std::endl;
    }
};

class ArtDecoCoffeeTable : public CoffeeTable 
{
public:
    void drink_coffee() const override 
    {
        std::cout << "Art Deco coffee table." << std::endl;
    }
};

// Abstract Factory
class FurnitureFactory 
{
public:
    virtual Chair* create_chair() const = 0;
    virtual Sofa* create_sofa() const = 0;
    virtual CoffeeTable* create_coffee_table() const = 0;
};

class ModernFurnitureFactory : public FurnitureFactory 
{
public:
    Chair* create_chair() const override 
    {
        return new ModernChair();
    }

    Sofa* create_sofa() const override 
    {
        return new ModernSofa();
    }

    CoffeeTable* create_coffee_table() const override 
    {
        return new ModernCoffeeTable();
    }
};

class VictorianFurnitureFactory : public FurnitureFactory 
{
public:
    Chair* create_chair() const override 
    {
        return new VictorianChair();
    }

    Sofa* create_sofa() const override 
    {
        return new VictorianSofa();
    }

    CoffeeTable* create_coffee_table() const override 
    {
        return new VictorianCoffeeTable();
    }
};

class ArtDecoFurnitureFactory : public FurnitureFactory 
{
public:
    Chair* create_chair() const override 
    {
        return new ArtDecoChair();
    }

    Sofa* create_sofa() const override 
    {
        return new ArtDecoSofa();
    }

    CoffeeTable* create_coffee_table() const override 
    {
        return new ArtDecoCoffeeTable();
    }
};

// Client code
void client_code(const FurnitureFactory& factory) 
{
    Chair* chair = factory.create_chair();
    Sofa* sofa = factory.create_sofa();
    CoffeeTable* coffee_table = factory.create_coffee_table();

    chair->sit();
    sofa->lie_down();
    coffee_table->drink_coffee();

    delete chair;
    delete sofa;
    delete coffee_table;
}

int main() 
{
    // Modern furniture 
    FurnitureFactory* modern = new ModernFurnitureFactory();
    client_code(*modern);
    delete modern;

    // Victorian furniture 
    FurnitureFactory* victorian = new VictorianFurnitureFactory();
    client_code(*victorian);
    delete victorian;

    // ArtDeco furniture 
    FurnitureFactory* art_deco = new ArtDecoFurnitureFactory();
    client_code(*art_deco);
    delete art_deco;

    return 0;
}