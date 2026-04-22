#include <iostream>
#include <string>



class dog{
    public:
        dog(){
            _dogSize= 4;
            _legs = true;
        }
        void setDogSize(int dogSize){
            _dogSize = dogSize;
        }
    private:
        int _dogSize;
        bool _legs;
};

struct family{
    int number_Of_People;
    std::string name;
}nkosi_family;

struct Student{
    std::string name;
    int age;
    float grade;
};

int main(){
    family lil_bro;
    family num_ppl;
    num_ppl.number_Of_People = 4;
    lil_bro.name= "yewo";

    std::cout<<"i have alittle brother "<<lil_bro.name<<" and we are "
    <<num_ppl.number_Of_People<<" in our family"
    <<std::endl;

    return 0;
}