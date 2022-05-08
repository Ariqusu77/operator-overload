#include <iostream>
#include "grafika.hpp"
#include "rectangle.hpp"
#include <chrono>
#include <thread>

using namespace std::this_thread;
using namespace std::chrono_literals;
using std::chrono::system_clock;

int main(){
    rectangle abc(5,5,9,9);
    rectangle def(10,10,10,10);
    if (abc == def){
        std::cout << "mantap" << std::endl;
    }else{
        std::cout << "enggak cuy" << std::endl;
    }
    sleep_for(1s);
    system("cls");
    draw_rectangle(abc.getXmin(),abc.getYmin(),abc.getXmax(),abc.getYmax());
    draw_rectangle(def.getXmin(),def.getYmin(),def.getXmax(),def.getYmax());
    sleep_for(2s);

    rectangle tempe = --abc;
    rectangle tahu = ++def;

    system("cls");
    draw_rectangle(tempe.getXmin(),tempe.getYmin(),tempe.getXmax(),tempe.getYmax());
    draw_rectangle(tahu.getXmin(),tahu.getYmin(),tahu.getXmax(),tahu.getYmax());
    sleep_for(2s);

    rectangle hij = abc + def;
    rectangle klm = tempe - tahu;

    system("cls");
    draw_rectangle(hij.getXmin(),hij.getYmin(),hij.getXmax(),hij.getYmax());
    sleep_for(2s);

    system("cls");
    draw_rectangle(klm.getXmin(),klm.getYmin(),klm.getXmax(),klm.getYmax());
    sleep_for(2s);
}