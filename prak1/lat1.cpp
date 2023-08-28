#include <iostream> // for cout
using namespace std;
class Cat // declare the class Cat
{
public:
    void SetAge(int age);
    int GetAge();
    void SetWeight(int weight);
    int GetWeight();
    Cat(int age){
        this->itsAge = age;
    }

private:
    int itsAge;
    int itsWeight;
};
int Cat::GetAge()
{
    return itsAge;
}
void Cat::SetAge(int age)
{
    itsAge = age;
}


int main()
{
	Cat Frisky(5);
	int catAge;

    cout << "Frisky is a cat who is ";
	cout << Frisky.GetAge() << " years old.\n";

    cout << "Give cat age : ";
    cin >> catAge;  
    Frisky.SetAge(catAge);	// assign to the member variable

	cout << "Frisky is a cat who is ";
	cout << Frisky.GetAge() << " years old.\n";
	return 0;
}
