class A
{
    friend class B;
};

class B
{
    public:
        calc()
        {
            
        }
}

main()
{
    A objA;
    B objB;
    objB.calc(objA);
}