#include <iostream>
using namespace std;
class Human{
    public:
    int age;
    int weight;
    int height; 

    public:
    int getage(){
        return this->age;
    }
    void setweight(int w){
         this->weight = w;
    }

};
class Male : public Human{
    public:
    string color;
    void sleep(){
        cout<<"Male is sleeping " <<endl;
    }

};


int main(){
    Male object1;
    cout << object1.age <<endl;
    cout<< object1.color <<endl;
    cout<< object1.height <<endl;
    cout<< object1.weight <<endl;
    object1.sleep ();
    object1.setweight(86);
    cout<<object1.weight<<endl;
    

}
