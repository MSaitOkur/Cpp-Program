#ifndef car_h
#define car_h

#include <iostream>
#include <memory>
#include <random>

class car
{
public:
    // Base class dtor must be public virtual or protected nonvirtual
    virtual ~car() = default;

    virtual void start() = 0; // Pure Virtual Function
    virtual void run() = 0;   // Pure Virtual Function
    virtual void stop() = 0;  // Pure Virtual Function

    virtual std::ostream &print(std::ostream &os) const = 0; // Pure Virtual Function
    virtual car *clone_car() = 0;                            // Virtual Constructor Idiom
};

class mercedes : public car
{
public:
    virtual void start() override { std::cout << "mercedes has started\n"; }
    virtual void run() override { std::cout << "mercedes is running\n"; }
    virtual void stop() override { std::cout << "mercedes has stopped\n"; }

    virtual std::ostream &print(std::ostream &os) const override
    {
        return std::cout << "This is mercedes\n";
    }

    // covariance return type
    virtual mercedes *clone_car() override
    {
        return new mercedes{*this};
    }

    virtual void open_sunroof()
    {
        std::cout << "Mercedes's sunroof has opened\n";
    }
};

class mercedes_S500 : public mercedes
{
public:
    virtual void start() override { std::cout << "mercedes_s500 has started\n"; }
    virtual void run() override { std::cout << "mercedes_s500 is running\n"; }
    virtual void stop() override { std::cout << "mercedes_s500 has stopped\n"; }

    virtual std::ostream &print(std::ostream &os) const override
    {
        return std::cout << "This is mercedes_s500\n";
    }

    // covariance return type
    virtual mercedes_S500 *clone_car() override
    {
        return new mercedes_S500{*this};
    }

    void open_sunroof() override
    {
        std::cout << "Mercedes_S500's sunroof has opened\n";
    }
};

class audi : public car
{
public:
    virtual void start() override { std::cout << "audi has started\n"; }
    virtual void run() override { std::cout << "audi is running\n"; }
    virtual void stop() override { std::cout << "audi has stopped\n"; }

    virtual std::ostream &print(std::ostream &os) const override
    {
        return std::cout << "This is audi\n";
    }

    // covariance return type
    virtual audi *clone_car() override
    {
        return new audi{*this};
    }
};

class fiat : public car
{
public:
    virtual void start() override { std::cout << "fiat has started\n"; }
    virtual void run() override { std::cout << "fiat is running\n"; }
    virtual void stop() override { std::cout << "fiat has stopped\n"; }

    virtual std::ostream &print(std::ostream &os) const override
    {
        return std::cout << "This is fiat\n";
    }

    // covariance return type
    virtual fiat *clone_car() override
    {
        return new fiat{*this};
    }
};
class bmw : public car
{
public:
    virtual void start() override { std::cout << "bmw has started\n"; }
    virtual void run() override { std::cout << "bmw is running\n"; }
    virtual void stop() override { std::cout << "bmw has stopped\n"; }

    virtual std::ostream &print(std::ostream &os) const override
    {
        return std::cout << "This is bmw\n";
    }

    // covariance return type
    virtual bmw *clone_car() override
    {
        return new bmw{*this};
    }
};

class renault : public car
{
public:
    virtual void start() override { std::cout << "renault has started\n"; }
    virtual void run() override { std::cout << "renault is running\n"; }
    virtual void stop() override { std::cout << "renault has stopped\n"; }

    virtual std::ostream &print(std::ostream &os) const override
    {
        return std::cout << "This is renault\n";
    }

    // covariance return type
    virtual renault *clone_car() override
    {
        return new renault{*this};
    }
};

class volvo : public car
{
public:
    virtual void start() override { std::cout << "volvo has started\n"; }
    virtual void run() override { std::cout << "volvo is running\n"; }
    virtual void stop() override { std::cout << "volvo has stopped\n"; }

    virtual std::ostream &print(std::ostream &os) const override
    {
        return std::cout << "This is volvo\n";
    }

    virtual car *clone_car() override
    {
        return new volvo{*this};
    }
};

inline car *create_random_car_()
{
    static std::mt19937 eng{std::random_device{}()};
    static std::uniform_int_distribution<> dist{0, 6};

    switch (dist(eng))
    {
    case 0:
        std::cout << "mercedes case\n";
        return new mercedes;
    case 1:
        std::cout << "mercedes_S500 case\n";
        return new mercedes_S500;
    case 2:
        std::cout << "audi case\n";
        return new audi;
    case 3:
        std::cout << "fiat case\n";
        return new fiat;
    case 4:
        std::cout << "bmw case\n";
        return new bmw;
    case 5:
        std::cout << "reanult case\n";
        return new renault;
    case 6:
        std::cout << "volvo case\n";
        return new volvo;
    default:
        return nullptr;
    }
}

inline std::unique_ptr<car> create_unique_random_car()
{
    static std::mt19937 eng{std::random_device{}()};
    static std::uniform_int_distribution<int> dist{0, 6};

    switch (dist(eng))
    {
    case 0:
        std::cout << "mercedes case\n";
        return std::make_unique<mercedes>();
    case 1:
        std::cout << "mercedes_S500 case\n";
        return std::make_unique<mercedes_S500>();
    case 2:
        std::cout << "audi case\n";
        return std::make_unique<audi>();
    case 3:
        std::cout << "fiat case\n";
        return std::make_unique<fiat>();
    case 4:
        std::cout << "bmw case\n";
        return std::make_unique<bmw>();
    case 5:
        std::cout << "reanult case\n";
        return std::make_unique<renault>();
    case 6:
        std::cout << "volvo case\n";
        return std::make_unique<volvo>();
    default:
        return nullptr;
    }
}

#endif