class Engine{

};

class Car{
Engine e1;
public:
    Car(const Engine &e)
    {
        e1 = e;
        //e = new Engine;
    }

    void build_Car(){
        //e = new Engine;
    }
    ~Car()
    {
        //delete e;
    }
};


int main()
{
    Engine e;
    Car *c =  new Car(e);

    delete c;
}