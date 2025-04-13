#include<iostream>
using namespace std;
class Hero {
    private:
    int health;
    char level;

    public:
   
    int gethealth(){
        return health;
    }
    void sethealth(int h){
        health =h;
    }
    char getlevel(){
        return level;
    }
    void setlevel(char ch){
        level=ch;
    }
};
int main(){
    Hero Ramesh;
    
    Ramesh.gethealth();
    Ramesh.sethealth(90);
    Ramesh.setlevel('X');
    Ramesh.getlevel();
    cout << "Health of Ramesh is: "<<Ramesh.gethealth()<<endl;
    cout << "Level of Ramesh is: "<<Ramesh.getlevel()<<endl;

    return 0;
}