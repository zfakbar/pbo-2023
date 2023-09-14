#include <iostream> // for cout


using namespace std;
class Cat // declare the class Cat
{
public:
    void SetAge(int age);
    int GetAge();
    void SetWeight(int weight);
    int GetWeight();

    void SetColor(int color);

    int voice;
    int GetColor();
    Cat(int age){
        this->itsAge = age;
    }

private:
    int itsAge;
    int itsWeight;
    int itsColor;
};
int Cat::GetAge()
{
    return itsAge;
}
void Cat::SetAge(int age)
{
    itsAge = age;
}

int Cat::GetColor(){
    return itsColor;

}

void Cat::SetColor(int color){
    itsColor = color;
}


int main()
{

	Cat Frisky(5);
    // Cat Frisky;

    Frisky.voice = 5;
    Frisky.SetAge(4);
	int catAge;

    cout << "Frisky is a cat who is ";
	cout << Frisky.GetAge() << " years old.\n";

    cout << "Voice : "<<Frisky.voice << " \n";

    cout << "Give cat age : ";
    cin >> catAge;  
    Frisky.SetAge(catAge);	// assign to the member variable

	cout << "Frisky is a cat who is ";
	cout << Frisky.GetAge() << " years old.\n";
	return 0;
}
