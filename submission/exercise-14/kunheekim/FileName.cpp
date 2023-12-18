#include <iostream>

class MyBaseClass {
public:
	virtual void Hello() {
		std::cout << "This is Base\n";
	}

	virtual ~MyBaseClass() = default;
};

class MyDerivedClass : public MyBaseClass {
public : 

	void Hello() override{
		std::cout << "This is Derived\n";
	}
};

int main() {

	std::unique_ptr<MyBaseClass> ptr
		= std::make_unique<MyDerivedClass>();
	
	ptr->Hello();

	return 0;
}