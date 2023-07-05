#include <bits/stdc++.h>
using namespace std;

class hero{
    public:
    int health;
    char level;



};

class animal{
    string name;
    int age;

    public:
    void getname(){
        cout<<"name of this animal is:"<<this->name<<endl;
    }

    void getage(){
        cout<<"age of the animal is:"<<this->age<<endl;
    }

    void setage(int x){
        this->age=x;
    }

    void setname(string str){
        this->name=str;
    }

   /* animal(string str, int x){
        this->age=x;
        this->name=str;
    }*/

    void bark(){
        cout<<"animal can produce many type of voices"<<endl;

    }
    ~animal (){
        cout<<"destructor callled"<<endl;
    }
};
            /*inheritance*/
class lion : public animal{
    public:
    void bark(){
        cout<<"your dog is barking"<<endl;
    }
    void bark(char a){
        cout<<"barking 2"<<endl;
    }

    void operator + (lion obj){
        obj.getname();
    }
};
int main(){
            /*static declarion of an object*/
    #ifdef PI
    hero h1;
    h1.health=50;
    h1.level='A';

    printf("level and health of your hero is:%c %d",h1.level,h1.health);
    #endif

            /*dynamic declaration of an object*/
    
    #ifdef PI
    hero *h1=new hero;
    h1->health=200;
    h1->level='A';
    printf("level and health of your hero is:%c %d",h1->level,h1->health);
    #endif
            /*Use of functions(getter and setter functions)*/
    #ifdef PI
    animal dog("tommy",10);
    animal dog2(dog);
    dog.setage(5);
    dog2.setname("tiger");
    dog2.getage();
    dog2.getname();
    dog.getname();
    #endif

                /*inheritance*/
    lion tommy;
    tommy.setname("tommy");
    tommy.setage(10);
    tommy.getname();
    tommy.getage();
                /*polymorphism*/
    tommy.bark('a');        //barking 2
    tommy.bark();           //dog is barking
    tommy + tommy;
    return 0;
}